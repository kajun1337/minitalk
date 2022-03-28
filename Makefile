# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/26 10:25:45 by muhozkan          #+#    #+#              #
#    Updated: 2022/03/28 23:34:14 by muhozkan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
CLIENT = $(CC) $(CFLAGS) client.c $(shell find ./mini_libft/ -type f -name "*.c") client_main.c -o client
SERVER = $(CC) $(CFLAGS) server.c $(shell find ./mini_libft/ -type f -name "*.c") server_main.c -o server
NAME_CL = client
NAME_SV = server
all: $(NAME_CL) $(NAME_SV)
$(NAME_CL):
	$(CLIENT)
$(NAME_SV):
	$(SERVER)
clean:
	rm -rf client server
fclean: clean
re: clean all
.PHONY: all clean fclean re