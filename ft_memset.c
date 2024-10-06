/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 05:25:19 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 05:25:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *p;
    size_t i;

    i = 0;
    p = (unsigned char *)b;

    while(i < len)
    {
        p[i] = (unsigned char)c;
        i++;
    }
    return (b);
    
}

int main(void)
{
    char mem [20];
    int c = 41;
    size_t len = 10;

    char *res = ft_memset(mem, c, len);

    mem[len] = '\0';

    printf("resultado: %s", res);
    

}