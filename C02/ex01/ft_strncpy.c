#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int		main(void)
{
	char	dest[] = "asbsdjlaskdjaoljdlaksjf;askjf;lasfkj ";
	char	*src;
	int		size;

	size = 30;
	src = "text for test";
  //	printf(".%s.\n\n", ft_strncpy(dest, src, size));
	printf(".%s.\n\n", strncpy(dest, src, size));
}
*/