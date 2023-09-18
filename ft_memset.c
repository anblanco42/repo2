/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:04:34 by anblanco          #+#    #+#             */
/*   Updated: 2023/09/12 18:08:22 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	while (len--)
	{
		*(char *)b++ = c;
	}
}

/*
#include <stddef.h>
#include <stdio.h>
int main()
{
	char b[] = "hola prro";
	ft_memset(b, '.', 4);
	printf("%s", &b);
}*/