# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-kabb <mel-kabb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/27 12:53:42 by mel-kabb          #+#    #+#              #
#    Updated: 2024/02/27 14:20:54 by mel-kabb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 
SRC = main.cpp Span.cpp
RM = rm -rf

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all