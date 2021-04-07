#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
}

#include <stdio.h>
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int len = 0;
	while (len < ac)
	{
		printf("%s", av[len]);
		len++;
	}
	
	
	t_stock_str *stock = malloc(sizeof(t_stock_str) * len);

	int j = 0;
	int cnt;
	char copied[500];
	printf("working..");
	
	while (j < len)
	{
		cnt = 0;
		(stock+j)->str = av[j];
		while (av[j][cnt])
		{
			printf("%c",av[j][cnt]);
			cnt++;
		}
		printf("%s", (stock+j)->str);
		(stock+j)->size = cnt;
		cnt = 0;
		ft_strcpy(copied, av[j]);
		(stock+j)->copy = copied;
		j++;
	}
	return stock;	
}

#include <stdio.h>
void ft_show_tab(struct s_stock_str *par)
{
	int i = 0;
	int j = 0;

	while (par)
	{
		printf("%d", par->size);
		printf("%s", par->str);
		printf("%s", par->copy);
	}
}

int main()
{
	char *test[5];

	test[0] = "test1";
	test[1] = "this is teset2";
	test[2] = "last test3";
	printf("%s", test[0]);
	ft_strs_to_tab(3, test);
}
