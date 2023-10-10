/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:59:05 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/12 09:05:49 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*ptr == (unsigned char)c)
		{
			return (ptr);
		}
		i++;
		ptr++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s1;
	int		i;

	i = 'b';
	s1 = "Hola buenos dias";
	printf("Before location: \n");
	printf("s1: %s\n", s1);
	printf("Character to find: %c\n", i);
	printf("After location: %s\n", ft_memchr(s1, i, 17));
}
*/