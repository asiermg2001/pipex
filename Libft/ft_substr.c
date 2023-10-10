/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:29:09 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/12 09:13:00 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int			i;
	size_t					j;
	char					*substring;
	size_t					size;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	i = 0;
	j = 0;
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			substring[j++] = s[i];
		i++;
	}
	substring[j] = '\0';
	return (substring);
}
/*
int	main(void)
{
	char	*str;

	str = "Hola buenos dias";
	printf("Original string: %s\n", str);
	printf("Substring: %s\n", ft_substr(str, 3, 15));
}
*/