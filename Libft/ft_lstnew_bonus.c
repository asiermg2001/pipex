/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:58:04 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/09 08:40:54 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(*list));
	if (!list)
	{
		return (NULL);
	}
	list -> content = content;
	list -> next = NULL;
	return (list);
}
/*
int	main(void)
{
	char	*str;
	t_list	*lst;

	str = "Hola buenas";
	lst = ft_lstnew(str);
	printf("New list: %s\n", lst->content);
}
*/