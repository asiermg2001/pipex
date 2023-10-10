/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:55:45 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/18 10:04:13 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;
	int		s1len;
	int		s2len;

	if (!s1 && !s2)
		return (NULL);
	i = -1;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (str == NULL)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	i = -1;
	while (s2[++i])
		str[s1len++] = s2[i];
	str[s1len] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hola buenos dias";
	s2 = "Hola buenas tardes";
	printf("Before concatenate: \n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("After concatenate: %s\n", ft_strjoin(s1, s2));
}
*/
