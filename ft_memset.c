/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhindou <ykhindou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:22:46 by ykhindou          #+#    #+#             */
/*   Updated: 2024/10/29 10:57:29 by ykhindou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*buffer;

	buffer = (unsigned char *)s;
	while (n > 0)
	{
		*buffer++ = (unsigned char)c;
		n--;
	}
	return (s);
}
