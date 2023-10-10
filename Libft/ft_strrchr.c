/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:09:17 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/08 09:10:24 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;

	aux = NULL;
	while (c >= 256)
		c -= 256;
	while (*s != '\0')
	{
		if (*s == c)
		{
			aux = (char *)s;
		}
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (aux);
}
/*
int	main(void)
{
	char	*str;
	int		i;

	str = "Hola buenos dias";
	i = 'b';
	printf("Original string: %s\n", str);
	printf("Trimmed string: %s\n", strrchr(str, i));
	str = "Hola buenos dias";
	printf("Original string: %s\n", str);
	printf("Trimmed string: %s\n", ft_strrchr(str, i));
}
*/