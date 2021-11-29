echo "#include \"libft.h\"
#include \"./eval_tests/tests.h\"

int main()
{
	test_$1();
	return (0);
}" > test_$1.c
mv ./eval_tests/test_functions.c.test ./eval_tests/test_functions.c
gcc -Wall -Wextra -Werror test_$1.c libft.a ./eval_tests/test_functions.c -o test_$1
./test_$1
if [[ $1 == *_fd ]]; then
	./test_$1 1> standart 2> error
	echo "Checking stderror logs:"
	cat -e error
	rm error standart
fi
rm test_$1 test_$1.c
mv ./eval_tests/test_functions.c ./eval_tests/test_functions.c.test
