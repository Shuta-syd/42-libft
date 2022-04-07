#include "test.h"
#include "../libft.h"

void test_func(char *c)
{
	if (*c == 'a')
		*c = '0';
	return;
}

int case1_ft_striter(void)
{
	char test[] = "shut0ogur0";
	char user[] = "shutaogura";

	ft_striter(user, &test_func);
	return (str_ret_cmp(test, user));
}

int case2_ft_striter(void)
{
	char test[] = "00000ååååå";
	char user[] = "aaaaaååååå";

	ft_striter(user, &test_func);
	return (str_ret_cmp(test, user));
}

void test_ft_striter(void)
{
	NAME("ft_striter.c");
	// case1
	case1_ft_striter() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_striter() == 1 ? OK(2) : KO(2);
	putchar('\n');
	return;
}
