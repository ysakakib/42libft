# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yusakaki <yusakaki@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/02 17:00:33 by yusakaki          #+#    #+#              #
#    Updated: 2026/05/02 17:00:54 by yusakaki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	philo

cc		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

SRCS	=	main.c \
			init.c \
			utils.c \
			routine.c
