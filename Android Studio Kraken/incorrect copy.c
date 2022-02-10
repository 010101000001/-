//
//  incorrect copy.c
//  
//
//  Created by Andres Barbudo Rodriguez on 2/9/22.
//

#!/bin/zsh -f

#include <stdio.h>


ARGS=2
E_BADARGS=65

if [ $# -ne "$ARGS"]
then
    exit $E_BADARGS
fi

source=`dig`
destination="/.urls" | "/https" | "/.http"

find "$source" -depth | cpio -admv "$destination"

exit $65
