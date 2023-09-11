# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 23:09:41 by jareste-          #+#    #+#              #
#    Updated: 2023/09/12 00:37:12 by jareste-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Unnecesary_Violence

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

HEADER = Weapon.h Weapon.hpp HumanA.h HumanA.hpp HumanB.h HumanB.hpp

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


