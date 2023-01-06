# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huolivei <huolivei <marvin@42.fr>>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 18:33:41 by huolivei          #+#    #+#              #
#    Updated: 2023/01/06 19:22:30 by huolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server
CLIENT = client
SRCS = server.c
OBJS = $(SRCS:.c=.o)
SRCC = client.c
OBJS_SRCC = $(SRCC:.c=.o)
INC = minitalk.h
LIBFT = libft/libft.a
LIBFT_DIR = libft

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: $(LIBFT) $(SERVER) $(CLIENT)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(SERVER): $(OBJS) $(INC)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(SERVER)

$(CLIENT): $(OBJS_SRCC) $(INC)
	$(CC) $(CFLAGS) $(OBJS_SRCC) $(LIBFT) -o $(CLIENT)

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(OBJS) $(OBJS_SRCC)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(RM) $(SERVER).o $(SERVER) $(CLIENT).o $(CLIENT)

re: fclean all

.PHONY: all, clean, fclean, re
