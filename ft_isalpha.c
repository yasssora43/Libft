/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhindou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:55:31 by ykhindou          #+#    #+#             */
/*   Updated: 2024/10/29 09:34:50 by ykhindou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
/*
void test_ft_isalpha()
{
	void run_test(char c, int expected)
	{
		int result = ft_isalpha(c);
		if (result == expected)
		{
			printf("Test passed: ft_isalpha('%c') \
			=> %d (expected %d)\n", c, result, expected);
		}else{
			printf("Test failed: ft_isalpha('%c') => 
			%d (expected %d)\n", c, result, expected);
		}
	}

	run_test('a', 1);
	run_test('Z', 1);
	run_test('b', 1);
	run_test('Y', 1);
	run_test('3', 0);
	run_test(' ', 0);
	run_test('!', 0);
	run_test('@', 0);
	run_test('[', 0);
	run_test('\n', 0);
	run_test('\t', 0);
	run_test(83, 1);
	run_test('\0', 0);
	run_test('`', 0);
	run_test(255, 0);
	run_test(128, 0);
	run_test('\x7F', 0);
}

int main()
{
	test_ft_isalpha();
	return (0);
}*/
