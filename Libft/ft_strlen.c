/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 08:49:26 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/08 09:12:00 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	*s1;

	s1 = "Hola buenos dias";
	printf("s1: %s\n", s1);
	printf("String length: %zu\n", strlen(0));
	s1 = "Hola buenos dias";
	printf("s1: %s\n", s1);
	printf("String length: %zu\n", ft_strlen(0));
}
*/