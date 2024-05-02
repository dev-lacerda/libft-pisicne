/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <gferreir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:00:08 by gferreir          #+#    #+#             */
/*   Updated: 2024/04/29 17:02:00 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strtok(const char *s, char c)
{
	size_t	ret;

	ret = 0;
		while (*s)
	{
		if (*s != c)
	{
		ret++;
			while (*s && *s != c)
			s++;
		}
		else
			s++;
	}
	return (ret);
}
