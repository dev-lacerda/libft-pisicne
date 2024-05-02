/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <gferreir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:15:32 by gferreir          #+#    #+#             */
/*   Updated: 2024/04/30 16:06:32 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_malloc(const char *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_strtok(s, c) + 1));
	if (!result)
		return (NULL);
	return (result);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**result;

	i = 0;
	k = 0;
	result = ft_malloc(s, c);
	while (s[k])
	{
		while (s[k] == c)
			k++;
		if (s[k])
		{
			j = k;
			while (s[j] && s[j] != c)
				j++;
			result[i++] = ft_substr(s, k, j - k);
			if (!result[i])
				return (NULL);
			k = j;
		}
	}
	result[i] = NULL;
	return (result);
}
