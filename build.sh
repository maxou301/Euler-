set -e

echo "Enter Challenge Number :"
read number
gcc -Wall -Wextra -Werror $number.c -o out
echo "Compilation Complete"
./out
