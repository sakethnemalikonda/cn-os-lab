echo enter a number
read a
i=2
fact=1
if [ $a -ge 2 ]
then
while [ $i -le $a ]
do
fact=`expr $fact \* $i`
i=`expr $i + 1`
done
fi
echo factorial of $a = $fact

Example Input/Output:

student@202-28:~/5x0$ gedit 9a.sh
student@202-28:~/5x0$ sh 9a.sh
enter a number
5
factorial of 5 = 120
