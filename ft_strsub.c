/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lachille <lachille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:43:27 by lachille          #+#    #+#             */
/*   Updated: 2019/04/06 20:49:20 by lachille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
  char *dest;
  int i;

  i = 0;
  if(!(dest = malloc(sizeof(len - start))))
    return (0);
  while (s[start + i])
  {
    dest[i] = s[start + i];
    i++;
  }
  return (dest);
}
