# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbollach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/23 17:45:44 by mbollach          #+#    #+#              #
#    Updated: 2016/11/24 17:01:57 by mbollach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(NAME).c
	gcc -c -Wall -Wextra -Werror $(NAME).c

clean:
	rm -rf $(NAME).o

fclean: clean
	rm -rf $(NAME)

re: fclean all
