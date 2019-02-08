# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eebersol <eebersol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 14:30:45 by eebersol          #+#    #+#              #
#    Updated: 2016/11/06 20:23:04 by eebersol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= ft_strace
LIB		= ./libft/libft.a
INC 	=  -I./libft/includes/ -I ./includes/
SRC 	= main.c \
			syscall.c \
			errno_list.c \
			syscalls_list.c \
			signal_list.c \

SRCDIR 	= srcs/
OBJDIR 	= objs/
OBJ 	= $(addprefix $(OBJDIR), $(SRC:.c=.o))

FLAG 	= -Wall -Werror -Wextra

CG 		= \033[92m
CY 		=  \033[93m
CE 		= \033[0m
CB 		= \033[34m

all: header lib $(NAME)

lib : 
	@make -C ./libft/
	@mkdir -p $(OBJDIR)

header:
	@echo "\n";
	@echo "			$(CG)      :::::::::: :::::::::::           :::::::: ::::::::::: :::::::::      :::      ::::::::  ::::::::::   $(CE)";
	@echo "			$(CG)     :+:            :+:              :+:    :+:    :+:     :+:    :+:   :+: :+:   :+:    :+: :+:           $(CE)";
	@echo "			$(CG)    +:+            +:+              +:+           +:+     +:+    +:+  +:+   +:+  +:+        +:+            $(CE)";
	@echo "			$(CG)   :#::+::#       +#+              +#++:++#++    +#+     +#++:++#:  +#++:++#++: +#+        +#++:++#        $(CE)";
	@echo "			$(CG)  +#+            +#+                     +#+    +#+     +#+    +#+ +#+     +#+ +#+        +#+              $(CE)";
	@echo "			$(CG) #+#            #+#              #+#    #+#    #+#     #+#    #+# #+#     #+# #+#    #+# #+#               $(CE)";
	@echo "			$(CG)###            ###    ########## ########     ###     ###    ### ###     ###  ########  ##########         $(CE)";
	@echo "\n";

$(NAME): $(OBJ)
	@gcc $(FLAG) -lm -L libft/ -lft  $(OBJ) $(LIB) $(INC) -o $(NAME)
	@echo "\033[K$(CY)[FT_STRACE] :$(CE) $(CG)Compiling ft_strace$(CE)";


$(OBJ): $(OBJDIR)%.o: $(SRCDIR)%.c
	@echo "\033[K$(CY) - FT_STRACE - $(CE) $(CG)Compiling $<$(CE)\033[1A";
	@gcc $(FLAG) -c $< -o $@ $(INC)

clean: header
	@echo "$(CY)[FT_STRACE] :$(CE) $(CG)Cleaning ft_strace objects$(CE)";
	@make clean -C libft
	@/bin/rm -rf $(OBJ);

fclean: header clean
	@echo "\033[K$(CY)[FT_STRACE] :$(CE) $(CG)Cleaning binairies ...$(CE)";
	@make fclean -C libft
	@/bin/rm -f $(NAME);

re: fclean all

.PHONY: all clean fclean re