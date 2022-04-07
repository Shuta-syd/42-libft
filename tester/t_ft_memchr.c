#include "test.h"
#include "../libft.h"

int case1_ft_memchr(void)
{
	char *ret_test;
	char *ret_user;
	char test[] = "Hello World 42Tokyo!";
	char user[] = "Hello World 42Tokyo!";
	int input[] = {0, 5, 10, 15, 21};

	for (int i = 0; i < 5; i++)
	{
		ret_test = memchr(test, '4', input[i]);
		ret_user = ft_memchr(user, '4', input[i]);
		if (str_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

int case2_ft_memchr(void)
{
	char *ret_test;
	char *ret_user;
	char test[] = "Hi I'm åååçççååå";
	char user[] = "Hi I'm åååçççååå";
	int input[] = {0, 5, 15, 25, 40};

	for (int i = 0; i < 5; i++)
	{
		ret_test = memchr(test, 135, input[i]); //135 -> ç
		ret_user = ft_memchr(user, 135, input[i]);
		if (str_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

int case3_ft_memchr(void)
{
	char *ret_test;
	char *ret_user;
	char test[] = "Hi I'm a rockman";
	char user[] = "Hi I'm a rockman";
	int input[] = {0, 5, 15, 25, 40};

	for (int i = 0; i < 5; i++)
	{
		ret_test = memchr(test, 0, input[i]);
		ret_user = ft_memchr(user, 0, input[i]);
		if (str_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

void test_ft_memchr(void)
{
	NAME("ft_memchr.c");
	// case1
	case1_ft_memchr() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_memchr() == 1 ? OK(2) : KO(2);
	// case3
	case3_ft_memchr() == 1 ? OK(3) : KO(3);
	putchar('\n');
	return;
}
