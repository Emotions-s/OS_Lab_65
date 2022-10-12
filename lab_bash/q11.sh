for file in $(find -s . -type f -name "*.c")
do
    programName=`echo $file | cut -d'/' -f2 | cut -d'.' -f1`
    trimmedName=`echo $file | cut -d'/' -f2`
    gcc $trimmedName -o $programName 2>/dev/null
    if [ -f $programName ]
    then
        ans=$(./$programName)
        if [ $ans == "20" ]
        then
            score=10
        else
            score=7
        fi
    else
        score=5
    fi
    echo $trimmedName $score
done