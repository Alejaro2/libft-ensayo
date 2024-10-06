/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 07:09:31 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 07:09:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_bzero(void *s, size_t len)
{
    unsigned char *p;
    size_t i;

    p = (unsigned char *)s;
    i = 0;

    while (i < len)
    {
        p[i] = 0;
        i++;
    }

}

int main (void)
{
    char p[20] = "hola";

    ft_bzero(p, sizeof(p));
    printf("resultado final: %s", p);
    
}