SRC = main.c
SRC += syscall.c
SRC += strjoin.c
SRC += errno.c
SRC += syscalls_list.c
SRC += signal.c


LIB				= ./libft/libft.a
NAME = ft_strace
SRCDIR = srcs/
OBJDIR = objs/
OBJ = $(addprefix $(OBJDIR), $(SRC:.c=.o))


# FLAG = -Wall -Werror -Wextra
CG = \033[92m
CY =  \033[93m
CE = \033[0m
CB = \033[34m
INC =  -I./libft/includes/   -I ./includes/

all: start $(NAME)


$(NAME): $(OBJ)
	@make -C ./libft/
	@gcc $(FLAG) -lm -L libft/ -lft  $(OBJ)  $(LIB) $(INC) -o $(NAME)
	@echo "\033[K$(CY)[FT_STRACE] :$(CE) $(CG)Compiling ft_strace$(CE)";


start:
	@echo "\n";
	@echo "			$(CG)      :::::::::: :::::::::::           :::::::: ::::::::::: :::::::::      :::      ::::::::  ::::::::::   $(CE)";
	@echo "			$(CG)     :+:            :+:              :+:    :+:    :+:     :+:    :+:   :+: :+:   :+:    :+: :+:           $(CE)";
	@echo "			$(CG)    +:+            +:+              +:+           +:+     +:+    +:+  +:+   +:+  +:+        +:+            $(CE)";
	@echo "			$(CG)   :#::+::#       +#+              +#++:++#++    +#+     +#++:++#:  +#++:++#++: +#+        +#++:++#        $(CE)";
	@echo "			$(CG)  +#+            +#+                     +#+    +#+     +#+    +#+ +#+     +#+ +#+        +#+              $(CE)";
	@echo "			$(CG) #+#            #+#              #+#    #+#    #+#     #+#    #+# #+#     #+# #+#    #+# #+#               $(CE)";
	@echo "			$(CG)###            ###    ########## ########     ###     ###    ### ###     ###  ########  ##########         $(CE)";
	@echo "\n";

$(OBJ): $(OBJDIR)%.o: $(SRCDIR)%.c
	@echo "\033[K$(CY)[FT_STRACE] :$(CE) $(CG)Compiling $<$(CE)\033[1A";
	@gcc $(FLAG) -c $< -o $@ $(INC)

clean: start
	@echo "$(CY)[FT_STRACE] :$(CE) $(CG)Cleaning ft_strace objects$(CE)";
	@make clean -C libft
	@/bin/rm -rf $(OBJ);

fclean: start clean
	@echo "\033[K$(CY)[FT_STRACE] :$(CE) $(CG)Cleaning binairies ...$(CE)";
	@make fclean -C libft
	@/bin/rm -f $(NAME);

re: fclean all

.PHONY: all clean fclean re