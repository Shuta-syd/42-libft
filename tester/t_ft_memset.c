#include "test.h"
#include "../libft.h"

int	case1_ft_memset(void)
{
	char *ret_test;
	char *ret_user;
	char test[] = "0123456789";
	char user[] = "0123456789";

	ret_test = memset(test, 'x', 5);
	ret_user = ft_memset(user, 'x', 5);
	return (str_ret_cmp(ret_test, ret_user));
}

int	case2_ft_memset(void)
{
	char	*ret_test;
	char	*ret_user;
	char	test[] = "ABCDEFGHIJK";
	char	user[] = "ABCDEFGHIJK";

	ret_test = memset(test+2, '1', sizeof(test)-3);
	ret_user = ft_memset(user+2, '1', sizeof(user)-3);
	return (str_ret_cmp(ret_test, ret_user));
}

int case3_ft_memset(void)
{
	char *ret_test;
	char *ret_user;
	char test[] = "åååååååååå";
	char user[] = "åååååååååå";

	ret_test = memset(test, '1', sizeof(test));
	ret_user = ft_memset(user, '1', sizeof(user));
	return (str_ret_cmp(ret_test, ret_user));
}

void	test_ft_memset(void)
{
	printf("========================================");
	printf("PART1");
	printf("========================================\n");
	NAME("ft_memset.c");
	// case1
	case1_ft_memset() == 1 ? OK(1) : KO(1);
	//case2
	case2_ft_memset() == 1 ? OK(2) : KO(2);
	// case3
	case3_ft_memset() == 1 ? OK(3) : KO(3);
	putchar('\n');
	return;
}
