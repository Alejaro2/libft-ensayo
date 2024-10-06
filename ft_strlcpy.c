/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:16:29 by marvin            #+#    #+#             */
/*   Updated: 2024/09/27 13:16:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;

    while (src[j] != '\0')
    {
        j++;
    }

    if(dstsize > 0)
    {
        while (i < dstsize - 1 && src[i] != '\0')
        {
            dst[i] = src[i];
            i++; 
        }
        dst[i] = '\0';
        
    }
    return (j);
}

int main (void)
{
    char src[] = "holamundo";
    char dst[20];

    ft_strlcpy(dst, src, sizeof(dst));

    printf("resultado %s", dst);
}