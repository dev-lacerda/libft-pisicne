/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <gferreir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:25:21 by gferreir          #+#    #+#             */
/*   Updated: 2024/04/22 18:26:30 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	if (!s)
		return (NULL);
	ret = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ret)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = 0;
	return (ret);
}

/*char example_function(unsigned int index, char c) {
    
    return c + index;
}

int main() {
    char str[] = "aaaaaaa";

    char *result = ft_strmapi(str, example_function);

    if (result == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        return 1;
    }

    printf("String original: %s\n", str);
    printf("String resultante: %s\n", result);
    free(result);

    return 0;
}*/
