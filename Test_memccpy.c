#include "libft.h"
#include <stdio.h>

int		main()
{
	char *a = "coucou les amis";
	char *b = "vafa enulo bene";
  printf("Mafct : %s\n", ft_memccpy(a, b, 'l', 10));
  printf("vrai  : %s\n", memccpy(a, b, 'l', 10));
  return (0);
}
