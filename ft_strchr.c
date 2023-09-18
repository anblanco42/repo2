/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:55:23 by anblanco          #+#    #+#             */
/*   Updated: 2023/09/16 18:15:23 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i); 
		}
		i++;
	}
}

/*
#include <string.h>
int main()
{
	const char s[] = "hola";
	printf ("%s\n", ft_strchr(s, 'o'));
	printf ("%s", strchr(s, 'o'));
}*/