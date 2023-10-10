/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 09:58:57 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/04 09:45:36 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (c >= 256)
	{
		c -= 256;
	}
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}
/*
int	main(void)
{
	char	*str;
	int		i;

	str = "Hola buenos dias";
	i = 'a';
	printf("Before location: \n");
	printf("String: %s\n", str);
	printf("Char to locate: %d\n", i);
	printf("After location: %s\n", ft_strchr(str, i));
}
*/