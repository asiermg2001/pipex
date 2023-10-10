/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:03:15 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/09 08:49:51 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_inttoarray(char *str, unsigned int number, long int numlen)
{
	while (number > 0)
	{
		str[numlen--] = (number % 10) + 48;
		number = number / 10;
	}
	return (str);
}

static	int	ft_numlen(long int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			numlen;
	long int	number;

	number = n;
	numlen = ft_numlen(n);
	str = (char *)malloc(sizeof(char) * (numlen + 1));
	if (!str)
		return (NULL);
	str[numlen--] = '\0';
	if (number == 0)
		str[0] = '0';
	if (number < 0)
	{
		number = n * -1;
		str[0] = '-';
	}
	else
		number = n;
	str = ft_inttoarray(str, number, numlen);
	return (str);
}
/*
int	main(void)
{
	int	i;

	i = 120;
	printf("Itoa: %s\n", ft_itoa(i));
}
*/