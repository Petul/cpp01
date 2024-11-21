# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 15:33:17 by pleander          #+#    #+#              #
#    Updated: 2024/11/21 15:33:28 by pleander         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := harlFilter
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++11 -g
SOURCES := main.cpp Harl.cpp

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
