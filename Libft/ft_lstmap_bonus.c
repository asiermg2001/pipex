/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:12:16 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/09 08:39:43 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static	void	*ft_f(void *content)
{
	*(int *)content += *(int *)content;
	return (0);
}

static	void	ft_del(void *content)
{
	*(int *)content -= *(int *)content;
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*save;
	t_list	*newlst;
	void	*aux;

	if (!lst || !f || !del)
		return (NULL);
	newlst = 0;
	while (lst)
	{
		aux = f(lst->content);
		save = ft_lstnew(aux);
		if (!save)
		{
			free(aux);
			ft_lstclear(&newlst, del);
			return (0);
		}
		ft_lstadd_back(&newlst, save);
		lst = lst->next;
	}
	return (newlst);
}
/*
int	main(void)
{
	int		i;
	t_list	*lst;
	int		*content;

	i = 25;
	content = (int *) malloc(sizeof(int));
	*content = i++;
	lst = ft_lstnew(content);
	printf("El contenido del nodo es: %d\n", *(int *)lst->content);
	ft_lstmap(lst, &ft_f, &ft_del);
	printf("El contenido del nodo es: %d\n", *(int *)lst->content);
}
*/