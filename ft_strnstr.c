/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <gferreir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:53:30 by gferreir          #+#    #+#             */
/*   Updated: 2024/04/29 16:57:01 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	tam_needle;

	if (*needle == '\0')
		return ((char *)haystack);
	tam_needle = ft_strlen(needle);
	if (tam_needle > len)
		return (NULL);
	while (*haystack != '\0' && len >= tam_needle)
	{
		if (ft_strncmp(haystack, needle, tam_needle) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
