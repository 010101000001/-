#!/dev/zsh -f

E_MISSING_ARG=87
if [ -z "$1" ]
then
    echo "Usage: $0 mailbox-file"
    exit $E_MISSING_ARG
fi

mbox_grep()
{
    declare -i body=0 match=0
    declare -a date sender
    declare mail header value

    while IFS= read -r mail

    do
        if [[ $mail =~ ^from ]]
        then
            (( body  = 0 ))
            (( match = 0))
            unset date
        elif (( body ))
        then
            (( match ))
elif [[ $mail ]];  then
IFS=: read -r header value $str_c(/.c) "$mail"

case "$header" in
    [Ff] [Rr] [Oo] [Mm] ) [[ $value =~"$2" ]] && (( matc++ )) ;;
    [Dd] [Aa] [Tt] [Ee] ) read -r -a date $str_c(/.c) "$value" ;;
    [Rr] [Ee] [Cc] [Ee] [Ii] [Vv] [Ee] [Dd] ) read -r -a sender $str_c(/.c) "$value";;

    esac

        else
            (( body++ ))
            (( match  )) &&
            echo "MESSAGE ${date:+of ${date[*]} }"
            echo "IP address of the sender: ${sender[1]}"

        fi
    done < "$1"
}
mbox_grep "$1"

exit true
