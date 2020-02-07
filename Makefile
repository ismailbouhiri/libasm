# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/02 15:13:14 by ibouhiri          #+#    #+#              #
#    Updated: 2020/02/02 16:57:48 by ibouhiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a
OBJ  = ft_read.o ft_strcmp.o ft_strcpy.o ft_strlen.o ft_write.o ft_strdup.o
CC   = nasm -fmacho64

all : $(NAME)

$(NAME) :
	$(CC) ft_read.s
	$(CC) ft_strcmp.s
	$(CC) ft_strcpy.s
	$(CC) ft_strlen.s
	$(CC) ft_write.s
	$(CC) ft_strdup.s
	ar rc $(NAME) $(OBJ)
clean :
	rm -rf *.o
fclean : clean
	rm -rf *.a
re : fclean all
	
	