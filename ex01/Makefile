# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 03:33:21 by jareste-          #+#    #+#              #
#    Updated: 2023/09/11 19:16:30 by jareste-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

HEADER = Zombie.h Zombie.hpp

CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address

%.o: %.cpp Makefile ${HEADER}
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
