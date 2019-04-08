#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);

int		main(int ac, char **av)
{
	ac = 0;
	int n = atoi(av[1]);
  int i;
  char *dst = ft_itoa(n);

  i = 0;
  printf("%s", dst);
	return (0);
}
