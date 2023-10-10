/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:32:25 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/09 08:35:14 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new ->next = *lst;
		*lst = new;
	}
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*node;
	t_list	*newnode;
	char	*str;

	lst = 0;
	str = ft_strdup("Hola buenos dias");
	node = ft_lstnew(str);
	newnode = ft_lstnew(str);
	printf("New list: %s\n", (char *)lst);
	ft_lstadd_front(&lst, node);
	printf("After add: %s\n", (char *)lst->content);
}
*/