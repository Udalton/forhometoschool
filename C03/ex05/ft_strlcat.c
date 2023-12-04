#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	z;
	unsigned int	x;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	z = j;
	x = ft_strlen(src);
	if (size == 0 || size <= z)
		return (x + size);
	while (src [i] != '\0' && i < size - z - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (z + x);
}
/*
int main (void)
{
	char src[] = "ya zae*avsya";
    char dest [] = "2323 04 12";
    printf("%i \n", ft_strlcat(dest, src, 23));
    printf("%s \n", dest);
}
*/