/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:10:28 by amarcos-          #+#    #+#             */
/*   Updated: 2023/05/12 09:13:37 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static	void	*ft_f(unsigned int i, char *str)
{
	while (str)
	{
		*str++ = i;
	}
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			f (i, &s[i]);
			i++;
		}
	}
}
/* 
int	main(void)
{
	char	*str;
	int		i;

	str = "Hola buenas tardes";
	i = 5;
	printf("El contenido del nodo es: %s\n", str);
	ft_striteri(str, ft_f(i, str));
	printf("El contenido del nodo es: %s\n", str);
}
 */