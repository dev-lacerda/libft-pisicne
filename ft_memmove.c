/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <gferreir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:09:57 by gferreir          #+#    #+#             */
/*   Updated: 2024/04/24 18:41:04 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*src_ptr;
	char		*dest_ptr;
	int			i;

	if (dest == NULL || src == NULL)
		return (NULL);
	src_ptr = (const char *)src;
	dest_ptr = (char *)dest;
	if (dest_ptr > src_ptr)
	{
		i = n - 1;
		while (i >= 0)
		{
			dest_ptr[i] = src_ptr[i];
			i--;
		}
		return (dest);
	}
	i = 0;
	while (i < (int)n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
