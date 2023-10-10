/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:39:36 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/12 08:59:35 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = b;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	b1[15];

	printf("String: %s\n", b1);
	printf("Char to write: %c\n", '*');
	printf("After location: %s\n", ft_memset(b1, 42, 14));
}
*/