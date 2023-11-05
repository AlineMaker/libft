/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialves <alialves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:37:03 by alialves          #+#    #+#             */
/*   Updated: 2023/11/05 18:55:36 by alialves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	tofind;

	p = (unsigned char *)s;
	tofind = (unsigned char)c;
	while (n--)
	{
		if (*p == tofind)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
