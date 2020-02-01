#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{

	char *test;

	test = "-12+34";
	printf("ft_atoi, input: %s, output: %d\n", test, ft_atoi(test));
	printf("   atoi, input: %s, output: %d\n", test, atoi(test));
	if(ft_atoi(test) == atoi(test))
		printf("same: OK\n\n");
	else
		printf("------------------------------DIFFERENT\n\n");


	test = "   4819";
	printf("ft_atoi, input: %s, output: %d\n", test, ft_atoi(test));
	printf("   atoi, input: %s, output: %d\n", test, atoi(test));
	if(ft_atoi(test) == atoi(test))
		printf("same: OK\n\n");
	else
		printf("------------------------------DIFFERENT\n\n");


	test = " \t\v\r\f  4819";
	printf("ft_atoi, input: %s, output: %d\n", test, ft_atoi(test));
	printf("   atoi, input: %s, output: %d\n", test, atoi(test));
	if(ft_atoi(test) == atoi(test))
		printf("same: OK\n\n");
	else
		printf("------------------------------DIFFERENT\n\n");


	test = "+88";
	printf("ft_atoi, input: %s, output: %d\n", test, ft_atoi(test));
	printf("   atoi, input: %s, output: %d\n", test, atoi(test));
	if(ft_atoi(test) == atoi(test))
		printf("same: OK\n\n");
	else
		printf("------------------------------DIFFERENT\n\n");


	test = "2147483647";
	printf("ft_atoi, input: %s, output: %d\n", test, ft_atoi(test));
	printf("   atoi, input: %s, output: %d\n", test, atoi(test));
	if(ft_atoi(test) == atoi(test))
		printf("same: OK\n\n");
	else
		printf("------------------------------DIFFERENT\n\n");
	

	test = "-2147483645";
	printf("ft_atoi, input: %s, output: %d\n", test, ft_atoi(test));
	printf("   atoi, input: %s, output: %d\n", test, atoi(test));
	if(ft_atoi(test) == atoi(test))
		printf("same: OK\n\n");
	else
		printf("------------------------------DIFFERENT\n\n");
	

	test = "-654";
	printf("ft_atoi, input: %s, output: %d\n", test, ft_atoi(test));
	printf("   atoi, input: %s, output: %d\n", test, atoi(test));
	if(ft_atoi(test) == atoi(test))
		printf("same: OK\n\n");
	else
		printf("------------------------------DIFFERENT\n\n");


	test = " ++94845";
	printf("ft_atoi, input: %s, output: %d\n", test, ft_atoi(test));
	printf("   atoi, input: %s, output: %d\n", test, atoi(test));
	if(ft_atoi(test) == atoi(test))
		printf("same: OK\n\n");
	else
		printf("------------------------------DIFFERENT\n\n");


	test = " + +94845";
	printf("ft_atoi, input: %s, output: %d\n", test, ft_atoi(test));
	printf("   atoi, input: %s, output: %d\n", test, atoi(test));
	if(ft_atoi(test) == atoi(test))
		printf("same: OK\n\n");
	else
		printf("------------------------------DIFFERENT\n\n");


	test = "-9223372036854775809";
	printf("ft_atoi, input: %s, output: %d\n", test, ft_atoi(test));
	printf("   atoi, input: %s, output: %d\n", test, atoi(test));
	if(ft_atoi(test) == atoi(test))
		printf("same: OK\n\n");
	else
		printf("------------------------------DIFFERENT\n\n");

	test = "92233720368547758005";
	printf("ft_atoi, input: %s, output: %d\n", test, ft_atoi(test));
	printf("   atoi, input: %s, output: %d\n", test, atoi(test));
	if(ft_atoi(test) == atoi(test))
		printf("same: OK\n\n");
	else
		printf("------------------------------DIFFERENT\n\n");


	return (0);
}
