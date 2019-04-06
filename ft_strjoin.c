/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:50:14 by lachille          #+#    #+#             */
/*   Updated: 2019/04/06 20:58:49 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *s1, char *s2)
{
	int i;
  int j;

	i = 0;
  j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
  while (s2[j] != '\0')
	{
		j++;
	}
	return (i + j + 1);
}

char *ft_strjoin(char const *s1, char const *s2)
{
  char *dest;

  if(!(dest = malloc(sizeof(ft_strlen(s1, s2)))))
    return (0);
  while (s1[i])
  {
    dest[j] = s1[i]
    i++;
    j++;
  }
  i = 0;
  while (s2[i])
  {
    dest[j] = s2[i]
    i++;
    j++;
  }
  dest[j] = '\0';
  return (dest);
}
