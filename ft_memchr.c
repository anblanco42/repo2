/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:48:21 by anblanco          #+#    #+#             */
/*   Updated: 2023/09/20 20:40:31 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void *ft_memchr(const void *s, int c, size_t n)
{
	const char *aux;

	aux = (void *) s;
	while ((n--) > 0)
	{
		if (*aux == c)
		{
			return ((void *) aux);
		}
		aux++;
	}
	return (NULL);
}

#include <stdio.h>
int main()
{
	char str[20] = "hola mundo";
	char c = 'm';
	char *x;

	x = ft_memchr(str, c, 7);
	
	printf("%s", x);
}