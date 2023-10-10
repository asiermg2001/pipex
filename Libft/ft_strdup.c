/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:57:09 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/08 09:25:51 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*ptr;
	int		i;

	i = 0;
	size = 0;
	while (s1[size])
	{
		size++;
	}
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	*str;

	str = "Hola buenos dias";
	printf("Before strdup: \n");
	printf("s1: %s\n", str);
	printf("After strdup: %s\n", ft_strdup(str));
}
*/