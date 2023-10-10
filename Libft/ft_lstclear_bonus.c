/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 09:50:44 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/09 08:57:20 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_del(void *str)
{
	free(str);
}
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (lst && del)
	{
		while (*lst)
		{
			aux = (*lst)-> next;
			ft_lstdelone(*lst, del);
			*lst = aux;
		}
	}
}
/*
int	main(void)
{
	int		*content;
	t_list	*lst;
	t_list	*aux;
	int		i;

	i = 1;
	content = (int *) malloc(sizeof(int));
	*content = i++;
	lst = ft_lstnew(content);
	aux = lst;
	while (i < 10)
	{
		content = (int *) malloc(sizeof(int));
		*content = i;
		lst->next = ft_lstnew(content);
		lst = lst->next;
		i++;
	}
	lst = aux;
	printf("Lst size: %d\n", ft_lstsize(lst));
	ft_lstclear(&lst, ft_del);
	printf("Lst size: %d\n", ft_lstsize(lst));
}
*/