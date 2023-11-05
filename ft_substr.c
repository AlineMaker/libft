/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alialves <alialves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:02:36 by alialves          #+#    #+#             */
/*   Updated: 2023/11/05 19:30:28 by alialves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*memory;

	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len >= s_len)
		len = (s_len - (size_t)start);
	memory = ft_calloc((len + 1), sizeof(char));
	if (memory == NULL)
		return (NULL);
	while (i < len && s[start + i])
	{
		memory[i] = s[start + i];
		i++;
	}
	return (memory);
}
