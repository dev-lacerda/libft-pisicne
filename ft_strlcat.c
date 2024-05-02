/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <gferreir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:37:36 by gferreir          #+#    #+#             */
/*   Updated: 2024/04/29 18:05:38 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= size)
		dest_len = size;
	if (dest_len == size)
		return (src_len + size);
	if (src_len < size - dest_len - 1)
	{
		ft_memcpy(dest + dest_len, src, src_len + 1);
	}
	else
	{
		ft_memcpy(dest + dest_len, src, size - dest_len - 1);
		dest[size - 1] = '\0'; 
	}
	return (src_len + dest_len);
}
