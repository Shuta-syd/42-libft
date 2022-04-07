#include "test.h"
#include "../libft.h"

int case1_ft_strlen(void)
{
	int ret_test;
	int ret_user;
	char test[] = "Hello World 42Tokyo!";
	char user[] = "Hello World 42Tokyo!";

	ret_test = strlen(test);
	ret_user = ft_strlen(user);
	return (int_ret_cmp(ret_test, ret_user));
}

int case2_ft_strlen(void)
{
	int ret_test;
	int ret_user;
	char test[] = "Hi I'm ååååå";
	char user[] = "Hi I'm ååååå";

	ret_test = strlen(test);
	ret_user = ft_strlen(user);
	return (int_ret_cmp(ret_test, ret_user));
}

int case3_ft_strlen(void)
{
	int ret_test;
	int ret_user;
	char test[] = "";
	char user[] = "";

	ret_test = strlen(test);
	ret_user = ft_strlen(user);
	return (int_ret_cmp(ret_test, ret_user));
}

void test_ft_strlen(void)
{
	NAME("ft_strlen.c");
	// case1
	case1_ft_strlen() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_strlen() == 1 ? OK(2) : KO(2);
	// case3
	case3_ft_strlen() == 1 ? OK(3) : KO(3);
	putchar('\n');
	return;
}
