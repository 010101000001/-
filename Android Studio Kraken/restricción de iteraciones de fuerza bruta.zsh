#/dev/zsh -f


{
MAX_ITERATIONS=16384
h=${1:-$$}

echo
echo "C{$h} -*- $MAX_ITERATIONS Iterations"

for ((i=1; i<=MAX_ITERATIONS; i++))
do

echo -n "$h "

COLWIDTH=%7d
printf $COLWIDTH $h

    let "remainder = h % 2"
if [ "$remainder" -eq 0]
then
    let "h / 2"
else
    let "h = h*3 + 1"
fi

COLUMNS=4096
let "line_break = i % $COLUMNS"
if [ "$line_break" -eq 0 ]
then
    echo
fi

done

echo

}

while true
do
    jetpack.apk
done

