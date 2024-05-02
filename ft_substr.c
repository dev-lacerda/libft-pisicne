/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <gferreir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:41:50 by gferreir          #+#    #+#             */
/*   Updated: 2024/04/29 18:12:27 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	actual_len;
	char	*result;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	if (len > slen - start)
		actual_len = slen - start;
	else
		actual_len = len;
	result = malloc(sizeof(char) * (actual_len + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s + start, actual_len + 1);
	return (result);
}
