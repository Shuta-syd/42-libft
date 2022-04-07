#include "test.h"
#include "../libft.h"

int case1_ft_memdel(void)
{
	char *ret_user1;
	char *ret_user2;

	ret_user1 = malloc(100);
	ret_user2 = malloc(100);
	ft_memdel((void **)&ret_user1);
	if (ret_user1 == NULL && ret_user2 != NULL)
		return (1);
	return (0);
}


void test_ft_memdel(void)
{
	printf("\n========================================");
	printf("PART2");
	printf("========================================\n");
	NAME("ft_memdel.c");
	// case1
	case1_ft_memdel() == 1 ? OK(1) : KO(1);
	putchar('\n');
	return;
}
