//
//  restricción de dual stack.c
//  
//
//  Created by Andres Barbudo Rodriguez on 2/16/22.
//

#include <stdio.h>
#include <sys/types.h>
#include <string.h>

size_t strlcpy(char *dst, const char *src, size_t size) {
    char        *dstptr = dst;
    size_t      tocopy = size;
    const char *srcptr = src;
    
    if (tocopy && --tocopy) {
        do {
            if (!(*dstptr++ = *srcptr++)) break; {
                
            }
        } while (--tocopy);
    }
    if(!tocopy) {
        if(size) *dstrptr = 0;
        while (*srcptr++); {
            
        }
        return (srcptr - src - 1);
    }
    size_t strlcat(char *dst, const char *src, size_t size) {
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            char        *dstptr = dst;
            size_t      dstlen, tocopy = size;
            const char *srcptr = src;
            
            while (tocopy-- && *dstrptr) dstpre++;
            dstlen = dstptr - dst;
            if (!(tocopy = size - dstlen)) return (dstlen +strlen(src));
            while (*srcptr) {
                if (tocopy != 1) {
                    *dstptr++ = *srcptr;
                    tocopy--;
                }
            }
            srcptr++;
            {
                
            }*dstptr = 0; {
                
            }
            return (dstlen + (srcptr -src));
        });
    }
}
safestr_append(){
    strcat(0)
}
safestr_nappend(){
    strncat(0)
}
safestr_find(){
    strstr(0)
}
safestr_copy(){
    strcpy(0)
}
safestr_ncopy(){
    strncpy(0)
}
safestr_compare(){
    strcmp(0)
}
safestr_ncompare(){
    strncmp(0)
}
safestr_length(){
    strlen(0)
}
safestr_sprintf(){
    sprintf(0)
}
safestr_vsprintf(){
    vsprintf(0)
}

SAFESTR_ALLOC(){
    public abstract void onProviderInstallFailed(int errorCode, Intent recoveryIntent)
}
