#include <stdio.h>
int		ft_atoi_base(char *str, char *base);
//int 	map_to_value(char c, char *base, int nbase);
int		main(void)
{
	char *s = "--+-- -+0015 20";
	char *s1 = " 	+	-  FE";
	printf("%d\n", ft_atoi_base(s,"0123456789"));
	printf("%d\n", ft_atoi_base(s1,"01234567089ABCDEF"));
	printf("%d\n", ft_atoi_base("---+-120t00","0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("FFFFFFFF","01234567089ABCDEF"));
	return 0;
}
