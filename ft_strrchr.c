/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:37:29 by anblanco          #+#    #+#             */
/*   Updated: 2023/09/16 18:29:02 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i != 0)
	{
		if (s[i] == c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	const char s[] = "hlatravez";
	printf ("%s\n", ft_strrchr(s, 'o'));
	printf ("%s", strrchr(s, 'o'));
}*/