/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <gferreir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:01:16 by gferreir          #+#    #+#             */
/*   Updated: 2024/04/20 18:50:39 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		ch;
	size_t				i;

	str = (const unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (n > 0)
	{
		if (str[i] == ch)
			return ((char *)(str + i));
		i++;
		n--;
	}
	return (NULL);
}

/*int main () {
   const char str[] = "Hello, world!";
   const char ch = 'o';
   char *ret;

   ret = ft_memchr(str, ch, 4);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/
