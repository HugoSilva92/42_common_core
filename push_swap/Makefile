# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huolivei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 11:29:16 by huolivei          #+#    #+#              #
#    Updated: 2022/12/16 18:12:14 by huolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker
SRCS = mandatory/main.c mandatory/cost.c mandatory/initialize.c \
	mandatory/input_check.c mandatory/input_utils.c \
	mandatory/move_stack.c mandatory/push.c mandatory/push_swap_utils.c \
	mandatory/reverse_rotate.c mandatory/rotate.c mandatory/sort.c \
	mandatory/swap.c mandatory/position.c
OBJS = $(SRCS:.c=.o)
BONUS = bonus/main_bonus.c bonus/cost.c bonus/initialize.c \
	bonus/input_check.c bonus/input_utils.c \
	bonus/move_stack.c bonus/push.c bonus/push_swap_utils.c \
	bonus/reverse_rotate.c bonus/rotate.c bonus/sort.c \
	bonus/swap.c bonus/position.c bonus/get_next_line.c \
	bonus/get_next_line_utils.c
OBJS_BONUS = $(BONUS: .c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

bonus: $(NAME_BONUS)

$(NAME_BONUS): $(OBJS_BONUS)
	$(CC) $(CFLAGS) $(OBJS_BONUS) -o $(NAME_BONUS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME).c $(NAME) $(NAME_BONUS).c $(NAME_BONUS)

re: fclean all

.PHONY: all, clean, fclean, re

