/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:49:25 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/09 12:58:41 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	i;
	size_t	j;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	j = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	j = destlen;
	if (size == 0 || size <= destlen)
		return (size + srclen);
	while (src[i] && i < size - destlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (destlen + srclen);
}
/*
int	main(void)
{
	char	s1[10];
	char	*s2;

	s2 = "Hola buenas tardes";
	printf("Before concatenate: \n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("After concatenate: \n");
	ft_strlcat(s1, s2, 9);
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
}
*/