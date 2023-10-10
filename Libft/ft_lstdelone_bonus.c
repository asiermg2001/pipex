/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 09:37:48 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/09 08:52:32 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	ft_del(void *str)
{
	free(str);
}
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst -> content);
		free(lst);
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
	ft_lstdelone(lst, ft_del);
	printf("After del: %s\n", (char *)lst->content);
}
*/