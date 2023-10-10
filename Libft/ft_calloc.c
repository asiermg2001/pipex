/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:18:48 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/05 09:03:15 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == 0)
	{
		return (ptr);
	}
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
int	main(void)
{
	printf("ft_alloc: %i\n", (int)ft_calloc(5, 5));
	printf("calloc: %i\n", (int)calloc(5, 5));
}
*/