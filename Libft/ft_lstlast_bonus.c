/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 08:51:07 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/09 08:36:14 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list	*lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (!lst ->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/* 
int	main(void)
{
	int		*content;
	t_list	*lst;
	t_list	*aux;
	t_list	*last;
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
	last = ft_lstlast(lst);
	printf("El ultimo nodo es: %d\n", *(int *)last->content);
}
 */