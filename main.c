/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 09:22:38 by ibouhiri          #+#    #+#             */
/*   Updated: 2020/02/05 22:56:00 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

extern char  *ft_strcpy(char *dst, char *src);
extern int ft_strlen(char *dst);
extern int ft_strcmp(char *dst, char *src);
extern int ft_write(int fildes, const void *buf, size_t nbyte);
extern int ft_read(int fildes, const void *buf, size_t nbyte);
extern char  *ft_strdup(char *dst);
int main(void)
{
    char s[10];
    printf("%d\n", ft_strcmp("\xff\xff", "\xff"));
    return (0);
}