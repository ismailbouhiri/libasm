/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 09:22:38 by ibouhiri          #+#    #+#             */
/*   Updated: 2020/03/08 11:41:14 by ibouhiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

extern char     *ft_strcpy(char *dst, char *src);
extern int		ft_strlen(char *dst);
extern int		ft_strcmp(char *dst, char *src);
extern int		ft_write(int fildes, const void *buf, size_t nbyte);
extern int		ft_read(int fildes, const void *buf, size_t nbyte);
extern char		*ft_strdup(char *dst);
int				main(void)
{
	char	cpy[10];
	char	buff[1025];
	int		fd;
	int		fd2;
	
	fd = open("main.c", O_RDONLY);
	fd2 = open("main.c", O_RDONLY);
	printf("%d\n", ft_write(1, "me\n", 3));
	printf("%zd\n", write(1, "me\n", 3));
	printf("%d\n", ft_read(fd, buff, 1024));
	printf("%zd\n", read(fd2, buff, 1024));
	printf("%s\n", ft_strdup("TestOf" + 1));
	printf("%s\n", strdup("TestOf" + 1));
	printf("%d\n", ft_strcmp("TestOf", "testOf"));
	printf("%d\n", strcmp("TestOf", "testOf"));
	printf("%d\n", ft_strlen("TestOf"));
	printf("%lu\n", strlen("TestOf"));
	printf("%s\n", ft_strcpy(cpy, "Hello"));
	printf("%s\n", strcpy(cpy, "Hello"));
	return (0);
}
