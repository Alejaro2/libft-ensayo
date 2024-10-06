/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejaro2 <alejaro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:17:18 by alejaro2          #+#    #+#             */
/*   Updated: 2024/09/27 13:04:09 by alejaro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	int let = 'f';
	int test;

	test = ft_isalpha(let);
	printf("%d\n", test);
	return (0);
}