# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 19:50:50 by jareste-          #+#    #+#              #
#    Updated: 2023/09/11 20:00:30 by jareste-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain

SRCS = main.cpp

#HEADER = 

CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address

%.o: %.cpp Makefile
		@${CC} ${CFLAGS} -c $< -o $@

OBJS = ${SRCS:.cpp=.o}

all:
		@$(MAKE) ${NAME} --no-print-directory

${NAME}:: ${OBJS}
	@${CC} $(CFLAGS) $(OBJS) -o ${NAME}
	@echo "EVERYTHING DONE✌️   "


clean:
			@${RM} ${OBJS}
			@echo "OBJECTS REMOVED😭   "

fclean: clean
			@${RM} ${OBJS} ${NAME}
			@echo "EVERYTHING REMOVED😭 "

re:
			@$(MAKE) fclean --no-print-directory
			@$(MAKE) all --no-print-directory

.PHONY: all clean fclean re

