#include "libft.h"
#include <stdio.h>

int		main(int ac, char **av)
{
  if (ac != 2)
    return (0);
  printf("Mafct : %s\n", ft_memset(av[1], 'A', 10));
  printf("vrai  : %s\n", memset(av[1], 'A', 10));
  return (0);
}
