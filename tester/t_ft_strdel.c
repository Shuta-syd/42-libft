#include "test.h"
#include "../libft.h"

int case1_ft_strdel(void)
{
	char *test1;
	char *test2;

	test1 = malloc(100);
	test2 = malloc(100);
	ft_strdel(&test1);
	if (test1 == NULL && test2 != NULL)
		return (1);
	return (0);
}

void test_ft_strdel(void)
{
	NAME("ft_strdel.c");
	// case1
	case1_ft_strdel() == 1 ? OK(1) : KO(1);
	putchar('\n');
	return;
}
