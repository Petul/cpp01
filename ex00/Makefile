# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 12:57:11 by pleander          #+#    #+#              #
#    Updated: 2024/11/18 19:11:19 by pleander         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := zombie
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++11 -g
SOURCES := src/Zombie.cpp src/newZombie.cpp src/randomChump.cpp src/main.cpp

OBJECTS := $(SOURCES:.cpp=.o)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJECTS)
		$(CXX) $(OBJECTS) -I ./include -o $(NAME)

%.o: %.cpp
		$(CXX) $(CXXFLAGS) -I ./include -c $< -o $@

.PHONY: clean
clean:
		rm -f $(OBJECTS)

.PHONY: fclean
fclean: clean
		rm -f $(NAME)

.PHONY: re
re: fclean all
