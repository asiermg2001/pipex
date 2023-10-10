/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:01:32 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/08 10:47:20 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static	void	ft_f(void *content)
{
	*(int *)content += *(int *)content;
}
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst -> next;
		}
	}
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
	ft_lstiter(lst, &ft_f);
	printf("El contenido del nodo es: %d\n", *(int *)lst->content);
}
*/