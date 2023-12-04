#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str [i] <= 'Z')
			|| (str [i] >= 'a' && str [i] <= 'z'))
			i++;
		else
			return (0);
	}	
	return (1);
}
/*
int	main()
{
	printf("%d", ft_str_is_alpha("abcdefghijklmnop"));
	printf("\n%d", ft_str_is_alpha("abc1defg2hi3jkl"));
	printf("\n%d\n", ft_str_is_alpha("-_134556efghij67"));
}
*/