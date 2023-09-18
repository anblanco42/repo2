/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:22:37 by anblanco          #+#    #+#             */
/*   Updated: 2023/09/16 20:23:53 by anblanco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memmove(void *dst, const void *src, size_t len)
{
	int i;

	i =0;
	while (len--)
	{
		void *aux;

		aux[i] = src[i];
	}
}
