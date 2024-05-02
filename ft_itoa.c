/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <gferreir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:43:36 by gferreir          #+#    #+#             */
/*   Updated: 2024/05/02 17:45:09 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*ret;
	int		len;
	int		is_negative;

	if (n == -2147483648)
		return (strdup("-2147483648"));
	len = ft_numlen(ft_abs(n), 10);
	is_negative = ft_isnegative(n);
	n = ft_abs(n);
	if (is_negative)
		len++;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ret[len] = '\0';
	if (is_negative)
		ret[0] = '-';
	while (--len >= is_negative)
	{
		ret[len] = '0' + (n % 10);
		n /= 10;
	}
	return (ret);
}

/*char	*convert_to_string(long long n, int len, int is_negative)
{
	char	*ret;
	int		i;

	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ret[len] = '\0';
	i = len - 1;
	if (is_negative)
	{
		ret[0] = '-';
		n *= -1;
	}
	while (i >= is_negative)
	{
		ret[i--] = '0' + (n % 10);
		n /= 10;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	int		len;
	int		is_negative;
	int		temp;

	temp = ft_abs(n);
	len = ft_numlen(temp, 10);
	is_negative = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0 && len++)
		is_negative = 1;
	return (convert_to_string((long long)n, len, is_negative));
}*/
