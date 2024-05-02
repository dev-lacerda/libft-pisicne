/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <gferreir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:09:04 by gferreir          #+#    #+#             */
/*   Updated: 2024/04/30 17:48:46 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(*new_node)); 
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*new (main) ta acessando content, como na funcao new_node ta atruibuindo a 
funcao a content, eu consigo receber o valor.
//eh como se os dois tivessem fazendo a mesma coisa, mas um ta atruibuindo algo, 
alem de nao conseguir acessar o valor sem declarar ele na varivel */

/*int main() {
   
    int value = 42;
    t_list *new2 = ft_lstnew(&value);
    
    
    if (new2) {
        printf("Conteúdo do nó: %d\n", *((int *)new2->content));
        free(new2);
    } else {
        printf("Erro ao criar o nó.\n");
    }
    return (0);
}*/
