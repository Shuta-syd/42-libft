#include "test.h"
#include "../libft.h"

char test_func4(unsigned int index, char c)
{
	if (c == 'a' && index != 0)
		return ('0');
	return(c);
}

int case1_ft_strmapi(void)
{
	char *ret_user;
	char test[] = "shut0ogur0";
	char user[] = "shutaogura";

	ret_user = ft_strmapi(user, &test_func4);
	return (str_ret_cmp(test, ret_user));
}

int case2_ft_strmapi(void)
{
	char *ret_user;
	char test[] = "a0000ååååå";
	char user[] = "aaaaaååååå";

	ret_user = ft_strmapi(user, &test_func4);
	return (str_ret_cmp(test, ret_user));
}

int case3_ft_strmapi(void)
{
	char *ret_user;
	char test[] = "";
	char user[] = "";

	ret_user = ft_strmapi(user, &test_func4);
	return (str_ret_cmp(test, ret_user));
}

void test_ft_strmapi(void)
{
	NAME("ft_strmapi.c");
	// case1
	case1_ft_strmapi() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_strmapi() == 1 ? OK(2) : KO(2);
	// case3
	case3_ft_strmapi() == 1 ? OK(3) : KO(3);
	putchar('\n');
	return;
}
