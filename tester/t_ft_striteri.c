#include "test.h"
#include "../libft.h"

void test_func2(unsigned int index,char *c)
{
	if (*c == 'a' && index != 0)
		*c = '0';
	return;
}

int case1_ft_striteri(void)
{
	char test[] = "shut0ogur0";
	char user[] = "shutaogura";

	ft_striteri(user, &test_func2);
	return (str_ret_cmp(test, user));
}

int case2_ft_striteri(void)
{
	char test[] = "a0000ååååå";
	char user[] = "aaaaaååååå";

	ft_striteri(user, &test_func2);
	return (str_ret_cmp(test, user));
}

int case3_ft_striteri(void)
{
	char test[] = "";
	char user[] = "";

	ft_striteri(user, &test_func2);
	return (str_ret_cmp(test, user));
}

void test_ft_striteri(void)
{
	NAME("ft_striteri.c");
	// case1
	case1_ft_striteri() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_striteri() == 1 ? OK(2) : KO(2);
	// case3
	case3_ft_striteri() == 1 ? OK(3) : KO(3);
	putchar('\n');
	return;
}
