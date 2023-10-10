/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 09:13:33 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/09 08:34:42 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (lst && new)
	{
		if (*lst)
		{
			aux = ft_lstlast(*lst);
			aux -> next = new;
		}
		else
			*lst = new;
	}
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*node;
	char	*str;

	lst = 0;
	str = ft_strdup("Hola buenos dias");
	node = ft_lstnew(str);
	printf("New list: %s\n", (char *)lst);
	ft_lstadd_back(&lst, node);
	printf("After add: %s\n", (char *)lst->content);
}
*/