/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:19:00 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/12 08:48:21 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (len--)
		{
			s1[len] = s2[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (s1);
}
/*
int	main(void)
{
	char	*s1;
	char	s2[17];

	s1 = "Hola buenos dias";
	printf("Before move: \n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("After move: \n");
	ft_memmove(s2, s1, 17);
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
}
*/