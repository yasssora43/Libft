/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhindou <ykhindou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:19:27 by ykhindou          #+#    #+#             */
/*   Updated: 2024/10/29 12:18:57 by ykhindou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == (void *) 0 && src == (void *) 0)
		return (NULL);
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
