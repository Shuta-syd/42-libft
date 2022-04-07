#include "test.h"
#include "../libft.h"

int case1_ft_strclr(void)
{
	int i = 0;
	char test1[] = "shutaogura";
	int len = ft_strlen(test1) + 1;

	ft_strclr(test1);
	while (test1[i] == '\0')
		i++;
	return (int_ret_cmp(len, i));
}

int case2_ft_strclr(void)
{
	int i = 0;
	char test1[] = "hello shuta, welcome to 42tokyo.";
	int len = ft_strlen(test1) + 1;

	ft_strclr(test1);
	while (test1[i] == '\0')
		i++;
	return (int_ret_cmp(len, i));
}

void test_ft_strclr(void)
{
	NAME("ft_strclr.c");
	// case1
	case1_ft_strclr() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_strclr() == 1 ? OK(2) : KO(2);
	putchar('\n');
	return;
}
