#include <stdlib.h>

void	ft_putnbr(int n);

int main(int ac, char **av)
{
  int nb;

  if (ac != 2)
    return (0);
  nb = atoi(av[1]);
  ft_putnbr(nb);
  return (0);
}
