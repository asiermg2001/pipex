/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:40:05 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/12 10:04:52 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_getstart(char const *s1, char const *set)
{
	int	len;
	int	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr (set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static	int	ft_getend(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (ft_strchr (set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		s1len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	s1len = ft_strlen(s1);
	end = s1len - 1;
	start = ft_getstart(s1, set);
	end = ft_getend(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy (str, (s1 + start), (end - start + 1));
	return (str);
}
/*
int	main(void)
{
	char	*str;
	char	*set;

	str = "Hola buenos dias";
	set = "Hs";
	printf("Original string: %s\n", str);
	printf("Trimmed string: %s\n", ft_strtrim(str, set));
}
*/