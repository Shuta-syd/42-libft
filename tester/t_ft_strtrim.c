#include "test.h"
#include "../libft.h"

int case1_ft_strtrim(void)
{
	char *ret_user;
	char src[][30] = {"  Hello!        ", "Hello! ", "	Hello!", "Hello!	", "\nHello!", "Hello!\n"};
	char result[] = "Hello!";

	for (int i = 0; i < 6; i++)
	{
		ret_user = ft_strtrim(src[i]);
		if (str_ret_cmp(result, ret_user) == 0)
		{
			printf("%d %s ", i, ret_user);
			return (0);
		}
		free(ret_user);
	}
	return (1);
}

int case2_ft_strtrim(void)
{
	char *ret_user;
	char src[][30] = {"     Hel     \tl  o!   ", "H  el\tlo! ", "	Hel\tlo!", "Hel\tlo!	", "\nHel\tlo!", "Hel\tlo!\n"};
	char result[] = "Hel\tlo!";

	for (int i = 0; i < 6; i++)
	{
		ret_user = ft_strtrim(src[i]);
		if (str_ret_cmp(result, ret_user) == 0)
			return (0);
		free(ret_user);
	}
	return (1);
}

void test_ft_strtrim(void)
{
	NAME("ft_strtrim.c");
	// case1
	case1_ft_strtrim() == 1 ? OK(1) : KO(1);
	// case2
	//case2_ft_strtrim() == 1 ? OK(2) : KO(2);
	putchar('\n');
	return;
}
