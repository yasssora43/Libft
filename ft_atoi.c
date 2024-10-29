/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhindou <ykhindou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:58:23 by ykhindou          #+#    #+#             */
/*   Updated: 2024/10/29 12:14:08 by ykhindou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	spaces(const char *str, int *index)
{
	int	sign;
	int	i;

	sign = 1;
	i = *index;
	while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*index = i;
	return (sign);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = spaces(str, &i);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			n = n * 10;
			n += str[i] - '0';
			i++;
		}
		else
			break ;
	}
	return (sign * n);
}
