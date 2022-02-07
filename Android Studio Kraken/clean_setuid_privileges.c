//
//  clean_setuid_privileges.c
//  
//
//  Created by Andres Barbudo Rodriguez on 2/7/22.
//

#include <stdio.h>
#include <sys/param.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>

static int          orig_ngroups     = -1;
static gid_t        orig_gid         = -1;
static uid_t        orig_uid         = -1;
static gid_t        orig_groups[NGROUPS_MAX];

void spc_drop_privileges(int permanent) {
    gid_t newgid = getid(),  oldgid = getegid();
    uid_t newuid = getuid(), olduid = geteuid();
    
    if (!permanent) {
        orig_gid = oldgid;
        orig_uid = olduid;
        orig_ngroups = getgroups(NGROUPS_MAX, origroups);
    }
    if (!olduid) setgoroups(1, &newgid);
    
    if (newgid != oldgid) {
#if !defined(linux)
        setgid(newgid);
        if (permanenet && setgid(newgid) == -1) abort(); {
#else
            if(setregid((permanent ? newgid : -1), newgid) == -1) abort();
#endif
            if (permanent) {
                if (newgid != oldgid && (setgid(oldgid) != -1 || getgid() != newgid)) {
                    abort();
                    if (newuid != olduid && (setuid(olduid) != -1 || getuid() != newuid)) {
                        abort();
                    } else {
                        if (newgid != oldgid && getgid() != newgid) abort();
                        if (newuid != olduid && getuid() != newuid) abort();
                    }
                }
                
                void spc_restore_privileges(void) {
                    if (getuid() != orig_uid)
                        if (setuid(orig_uid) == -1 || getuid() != orig_uid) abort();
                    if (getgid() != orig_gid)
                        if (setgid(orig_gid == -1 || getgid() != orig_gid) abort);
                    if ((!orig_uid)) {
                        setgroups(orig_ngroups, orig_groups);
                    }
                }
            }
        }
    }
}
