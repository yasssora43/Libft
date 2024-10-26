/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhindou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 08:56:55 by ykhindou          #+#    #+#             */
/*   Updated: 2024/10/26 21:43:36 by ykhindou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (big == NULL || len == 0 || little == NULL)
		return (NULL);
	i = 0;
	if (little[0] == '\0')
		return (char *)(big);
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] && (i + j) < len)
		{
			if(big[i + j] == little[j])
				j++;
			else
				break;
		}
		if (little[j] == '\0')
			return (char *)(big + i);
		i++;
	}
	return (NULL);
}
