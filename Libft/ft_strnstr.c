/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:14:33 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/09 09:02:46 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			while (haystack[i + j] == needle[j] && i + j < len)
			{
				if (needle[j + 1] == '\0')
				{
					return ((char *)&haystack[i]);
				}
				j++;
			}
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*haystack;
	char	*needle;
	size_t	len;

	haystack = "Hola buenos dias";
	needle = "buenos";
	len = 16;
	printf("Original string: %s\n", haystack);
	printf("Found string: %s\n", ft_strnstr(0, needle, len));
	printf("Found string: %s\n", strnstr(0, needle, len));
}
*/