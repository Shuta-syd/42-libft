#include "test.h"
#include "../libft.h"

int case1_ft_strcpy(void)
{
	char *ret_test;
	char *ret_user;
	char test[100];
	char user[100];
	char str[] = "Hello World 42Tokyo!";

	ret_test = strcpy(test, str);
	ret_user = ft_strcpy(user, str);
	return (str_ret_cmp(ret_test, ret_user));
}

int case2_ft_strcpy(void)
{
	char *ret_test;
	char *ret_user;
	char test[100];
	char user[100];
	char str[] = "Hi I'm ååååå";

	ret_test = strcpy(test, str);
	ret_user = ft_strcpy(user, str);
	return (str_ret_cmp(ret_test, ret_user));
}

void test_ft_strcpy(void)
{
	NAME("ft_strcpy.c");
	// case1
	case1_ft_strcpy() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_strcpy() == 1 ? OK(2) : KO(2);
	putchar('\n');
	return;
}
