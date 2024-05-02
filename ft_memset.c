/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <gferreir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:30:52 by gferreir          #+#    #+#             */
/*   Updated: 2024/04/18 10:49:39 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t	i;

	if (!ptr)
		return (NULL);
	i = 0;
	while (num > i)
	{
		*(unsigned char *)(ptr + i) = (unsigned char)value;
		i++;
	}
	return (ptr);
}
