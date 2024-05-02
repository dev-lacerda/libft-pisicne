/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <gferreir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:58:03 by gferreir          #+#    #+#             */
/*   Updated: 2024/04/22 14:34:20 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isset(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	len;
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	end = len;
	while (s1[start] && ft_isset(set, s1[start]))
		start++;
	if (start == len)
		return (ft_strdup(""));
	while (end > start && ft_isset(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}
