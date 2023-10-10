/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:00:22 by amarcos-          #+#    #+#             */
/*   Updated: 2023/09/12 09:42:39 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strndup(const char *str, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	if (n == 0)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (n + 1));
	if (!ptr)
		return (NULL);
	while (i < n)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static	char	**ft_freesplit(char	**split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static	size_t	wordcount(char const *s, char c)
{
	size_t	words;

	words = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		while (*s == c)
		{
			s++;
		}
		if (*s)
			words++;
		while (*s != c && *s)
			s++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	size_t	k;
	size_t	j;
	size_t	i;
	char	**split;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!split)
		return (NULL);
	while (i < wordcount(s, c) && s[k])
	{
		while (s[k] == c)
			k++;
		j = k;
		while (s[k] != c && s[k])
			k++;
		split[i] = ft_strndup(&s[j], k - j);
		if (split[i++] == 0)
			return (ft_freesplit(split));
	}
	split[i] = NULL;
	return (split);
}
/*
int	main(void)
{
	char	*str;
	char	**split;
	char	*save;
	int		i;

	str = "Hola buenos dias";
	i = ' ';
	printf("Before location: \n");
	printf("String: %s\n", str);
	printf("Char to locate: %d\n", i);
	*split = *ft_split(str, i);
	save = *split;
	printf("After location: %s\n", save);
}
*/