/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:18:29 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/04 10:40:17 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hola buenos dias";
	s2 = "Hola buenos noches";
	printf("Before compare: \n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("Diff between strings: \n%d", ft_memcmp(s2, s1, 17));
}
*/