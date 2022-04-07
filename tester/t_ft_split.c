#include "test.h"
#include "../libft.h"

int case1_ft_split(void)
{
	char **ret_user;
	char src[] = "+123+++456+++789+";
	char result[][10] = {"Hello", "fellow", "students"};

	ret_user = ft_split(src, '+');
	for (int i = 0; i < 3; i++)
	{
		//if (str_ret_cmp(ret_user[i], result[i]) == 0)
		//{
			printf("%s\n", ret_user[i]);
		//	return (0);
		//}
	}
	free(ret_user);
	return (1);
}

int case2_ft_split(void)
{
	char **ret_user;
	char src[] = "++++++++++++++++++++++++++";
	char result[][10] = {""};

	ret_user = ft_split(src, '+');
	for (int i = 0; i < 1; i++)
	{
		if (str_ret_cmp(ret_user[i], result[i]) == 0)
			return (0);
	}
	return (1);
}

int case3_ft_split(void)
{
	char **ret_user;
	char src[] = "++++++++++++++++++++++++++ååååååå";
	char result[][20] = {"ååååååå"};

	ret_user = ft_split(src, '+');
	for (int i = 0; i < 1; i++)
	{
		if (str_ret_cmp(ret_user[i], result[i]) == 0)
			return (0);
	}
	return (1);
}

void test_ft_split(void)
{
	NAME("ft_split.c");
	// case1
	//case1_ft_split() == 1 ? OK(1) : KO(1);
	// case2
	case2_ft_split() == 1 ? OK(1) : KO(1);
	// case3
	case3_ft_split() == 1 ? OK(2) : KO(2);
	putchar('\n');
	return;
}
