#include "test.h"
#include "../libft.h"

char	test_func3(char c)
{
	if (c == 'a')
		return ('0');
	return(c);
}

int case1_ft_strmap(void)
{
	char *ret_user;
	char test[] = "shut0ogur0";
	char user[] = "shutaogura";

	ret_user = ft_strmap(user, &test_func3);
	return (str_ret_cmp(test, ret_user));
}

int case2_ft_strmap(void)
{
	char *ret_user;
	char test[] = "00000ååååå";
	char user[] = "aaaaaååååå";

	ret_user = ft_strmap(user, &test_func3);
	return (str_ret_cmp(test, ret_user));
}

int case3_ft_strmap(void)
{
	char *ret_user;
	char test[] = "";
	char user[] = "";

	ret_user = ft_strmap(user, &test_func3);
	return (str_ret_cmp(test, ret_user));
}

void test_ft_strmap(void)
{
	NAME("ft_strmap.c");
	// case1
	case1_ft_strmap() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_strmap() == 1 ? OK(2) : KO(2);
	// case3
	case3_ft_strmap() == 1 ? OK(3) : KO(3);
	putchar('\n');
	return;
}
