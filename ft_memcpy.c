/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:30:49 by anblanco          #+#    #+#             */
/*   Updated: 2023/09/16 20:23:41 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	while ((n--) != 0)
	{
		*((char *)dst + 1) = *((char *)src + 1);
	}
}
