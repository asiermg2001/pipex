/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:18:32 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/12 08:44:23 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s1;
	char	*s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	if (!dst && !src)
		return (0);
	while (n)
	{
		*s1 = *s2;
		n--;
		s2++;
		s1++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	*s1;
	char	s2[17];

	s1 = "Hola buenos dias";
	printf("Before copy: \n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("After copy: \n");
	ft_memcpy(s2, s1, 17);
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
}
*/