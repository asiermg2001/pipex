/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:59:18 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/02 12:11:13 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
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
	s2 = "buenos";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("Diff between strings: %d\n", ft_strncmp(s1, s2, 15));
}
*/