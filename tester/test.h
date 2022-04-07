#ifndef TEST_H
# define TEST_H
# define NAME(file) printf("%-15s:", file)
# define OK(n) printf("\x1b[32m%d.OK \x1b[0m", n)
# define KO(n) printf("\x1b[31m%d.KO \x1b[0m", n)
#include <string.h>
#include <stdio.h>
#include <ctype.h>
int		int_ret_cmp(int ret_test, int ret_user);
int		str_ret_cmp(char *ret_test, char *ret_user);
void	test_ft_memset(void);
void	test_ft_bzero(void);
void	test_ft_memcpy(void);
void	test_ft_memccpy(void);
void	test_ft_memmove(void);
void	test_ft_memchr(void);
void	test_ft_memcmp(void);
void	test_ft_strlen(void);
void	test_ft_strdup(void);
void	test_ft_strcpy(void);
void	test_ft_strncpy(void);
void	test_ft_strcat(void);
void	test_ft_strncat(void);
void	test_ft_strlcat(void);
void	test_ft_strchr(void);
void	test_ft_strrchr(void);
void	test_ft_strstr(void);
void	test_ft_strnstr(void);
void	test_ft_strcmp(void);
void	test_ft_strncmp(void);
void	test_ft_atoi(void);
void	test_ft_isalpha(void);
void	test_ft_isdigit(void);
void	test_ft_isalnum(void);
void	test_ft_isascii(void);
void	test_ft_isprint(void);
void	test_ft_toupper(void);
void	test_ft_tolower(void);
void	test_ft_memdel(void);
void	test_ft_strnew(void);
void	test_ft_strdel(void);
void	test_ft_strclr(void);
void	test_ft_striter(void);
void	test_ft_striteri(void);
void	test_ft_strmap(void);
void	test_ft_strmapi(void);
void	test_ft_strequ(void);
void	test_ft_strnequ(void);
void	test_ft_substr(void);
void	test_ft_strjoin(void);
void	test_ft_strtrim(void);
void	test_ft_split(void);
void	test_ft_itoa(void);
void test_ft_strlcpy(void);
#endif
