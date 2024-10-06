/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 10:21:25 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 10:21:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d; 
    unsigned char *s;
    size_t i;

    d = (unsigned char *)dst;
    s = (unsigned char *)src;

    if (dst == src || n == 0)
    {
        return(dst);
    }

    i = 0;

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return(dst);

}

int main(void)
{
    char dest[20];
    char src[] = "holamundo";

    ft_memcpy(dest, src, sizeof(src));

    printf("copiado: %s\n", dest);
}