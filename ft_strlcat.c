/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhindou <ykhindou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:12:33 by ykhindou          #+#    #+#             */
/*   Updated: 2024/10/29 11:46:00 by ykhindou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	s_len;
	unsigned int	d_len;

	s_len = 0;
	while (src[s_len])
		s_len++;
	d_len = 0;
	while (dst[d_len])
		d_len++;
	if (size <= d_len)
		return (size + s_len);
	i = 0;
	while (src[i] != '\0' && (d_len + i) < (size - 1))
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}
