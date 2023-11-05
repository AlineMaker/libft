/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialves <alialves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:31:09 by alialves          #+#    #+#             */
/*   Updated: 2023/11/05 19:00:35 by alialves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p_s;
	unsigned char	c_n;

	p_s = (unsigned char *)str;
	c_n = (unsigned char)c;
	while (n-- > 0)
	{
		*p_s = c_n;
		p_s++;
	}
	return (str);
}
