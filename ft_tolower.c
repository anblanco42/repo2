/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:32:47 by anblanco          #+#    #+#             */
/*   Updated: 2023/09/15 18:36:19 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	printf ("%d\n", ft_tolower('A'));
	printf ("%d", tolower('A'));
}*/