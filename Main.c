/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchennia <pchennia@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:49:38 by pchennia          #+#    #+#             */
/*   Updated: 2023/11/28 13:51:15 by pchennia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int    main(void)
{
    ft_printf("(ft) %c \n", '0');
    printf("(std) %c \n", '0');
    ft_printf("(ft)Number(u): %u\n(ft)Number(u): %u\n", 2147483647, -10);
    printf("(std)Number(u): %u\n(std)Number(u): %u\n", 2147483647, -10);
    ft_printf("(ft)%i %%%c %i%%\n", 0x52, 'a', -50);
    printf("(std)%i %%%c %i%%\n", 0x52, 'a', -50);
    ft_printf("(ft)%x, %X\n", 3500, -3500);
    printf("(std)%x, %X\n", 3500, -3500);
    ft_printf("(ft)%p, %p \n", "aaaaaa", NULL);
    printf("(std)%p, %p \n", "aaaaaa", NULL);
    ft_printf("\n(ft)%%%%%%%%%d, %%%s\n", INT_MIN, "string%%%");
    printf("\n(std)%%%%%%%%%d, %%%s\n", INT_MIN, "string%%%");
    //ft_printf("%s%w (ft)\n", "aaaaaa"); // works without compiler flags
    //printf("%s%w (std)\n", "aaaaaa"); // works without compiler flags
    return (0);
}
