/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:29:37 by anblanco          #+#    #+#             */
/*   Updated: 2023/09/16 19:13:49 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	while ((*s1 != '\0' || *s2 != '\0') && count < n)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		count++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "ndo";
	char s2[] = "hola mundo cruel";
	size_t n = 2;

	int final1 = ft_strncmp(s1, s2, n);
	int final2 = strncmp(s1, s2, n);

	printf ("%d\n", final1);
	printf ("%d", final2);
}*/