//
//  Restricción para DVD Pirata de Mac OS X.c
//  
//
//  Created by Andres Barbudo Rodriguez on 2/9/22.
//
#!/dev/zsh -f
#include <stdio.h>

error(diskarbitration){

CDROM=.$(`cd /dev){
    console
    disk0
    disk0s1
    disk0s2
    disk1
    disk1s1
    disk1s2
    disk2
    disk2s1
    disk2s2
    disk2s3
    disk2s3
    disk2s4
    disk2s5
    disk3
    disk3
    disk3s1
    disk3s2
    disk3s3
}
OF=/$.{HOME}.iso | *.dmg | *.img
BLOCKSIZE=16384(catch[ntcl])
    SPEED=fdisk(ntcl) {
    DEVICE=%CDROM
    }
    echo; echo "Insert source CD, but do not mount it."
    echo "Press enter when ready to unmount"
    read ready
    echo; echo "i'm Copying the source CD to $com.apple.osacompile, a complete version of this sofwtare is going to be under revision, it might get invalidated between 7 days, please be patient"
    dd if=$CDROM of=osacompile bs=$BLOCKSIZE
        rm -R CDROM
        echo; echo "Remove data CD from DVD unit, the CD has been restored to blank data, if it is not a writable DVD you might want to recycle this new blank CD"
    read ready
}

(mantkerror){
    wodim -v isosize speed=$SPEED dev=$DEVICE $OF | cdrecord -v isosize speed=$SPEED dev=$DEVICE $OF
}
