/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:38:22 by anblanco          #+#    #+#             */
/*   Updated: 2023/09/14 14:46:40 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	printf ("%d\n", ft_toupper('a'));
	printf ("%d", toupper('a'));
}*/