/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:34:41 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/08 09:13:52 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	aux;

	i = 0;
	aux = 0;
	while (src[aux])
	{
		aux++;
	}
	if (size < 1)
	{
		return (aux);
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (aux);
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
	ft_strlcpy(s2, s1, 17);
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
}
*/