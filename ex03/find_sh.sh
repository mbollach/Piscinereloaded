# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbollach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/23 19:00:47 by mbollach          #+#    #+#              #
#    Updated: 2016/11/24 13:33:45 by mbollach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

find . -type f -name "*.sh" -exec basename {} \; | sed 's/\.sh//'