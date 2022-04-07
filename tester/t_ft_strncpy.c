#include "test.h"
#include "../libft.h"

int case1_ft_strncpy(void)
{
	char *ret_test;
	char *ret_user;
	char test[100];
	char user[100];
	char str[] = "Hello World 42Tokyo!";
	int input[] = {0, 5, 10, 15, 21, 100};

	for (int i = 0; i < 6; i++)
	{
		ret_test = strncpy(test, str, input[i]);
		ret_user = ft_strncpy(user, str, input[i]);
		ret_test[input[i]] = '\0';
		ret_user[input[i]] = '\0';
		if (str_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

int case2_ft_strncpy(void)
{
	char *ret_test;
	char *ret_user;
	char test[100];
	char user[100];
	char str[] = "Hi I'm ååååååååå";
	int input[] = {0, 5, 10, 27, 100};

	for (int i = 0; i < 5; i++)
	{
		ret_test = strncpy(test, str, input[i]);
		ret_user = ft_strncpy(user, str, input[i]);
		ret_test[input[i]] = '\0';
		ret_user[input[i]] = '\0';
		if (str_ret_cmp(ret_test, ret_user) == 0)
			return (0);
	}
	return (1);
}

void test_ft_strncpy(void)
{
	NAME("ft_strncpy.c");
	// case1
	case1_ft_strncpy() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_strncpy() == 1 ? OK(2) : KO(2);
	putchar('\n');
	return;
}
