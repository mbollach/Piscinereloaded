# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbollach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/23 19:01:09 by mbollach          #+#    #+#              #
#    Updated: 2016/11/24 13:38:33 by mbollach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifconfig | grep ether | cut -c 8- | cut -c -17
