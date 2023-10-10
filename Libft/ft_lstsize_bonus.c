/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:19:48 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/09 08:39:02 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	*str;
	t_list	*lst;
	t_list	*node;
	t_list	*node2;

	str = ft_strdup("Hola buenos dias");
	lst = 0;
	node = ft_lstnew(str);
	node2 = ft_lstnew(str);
	ft_lstadd_front(&lst, node);
	printf("Lst size: %d\n", ft_lstsize(lst));
	ft_lstadd_front(&lst, node2);
	printf("Lst size: %d\n", ft_lstsize(lst));
}
*/