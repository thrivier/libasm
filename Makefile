NAME = libft.a
TEST = test
CMD_CP = nasm
INCLUDES=-Iincludes
LIBS = -L . -lft

ifdef __LINUX__
FLAG = -f elf64
else
FLAG = -f macho64
endif

DIR_SRC = srcs
DIR_OBJ = objs
DIR_INCLUDES = includes/
DIR_OTHER = ./
SRC = $(shell find $(DIR_SRC) -type f)
OBJ = $(patsubst $(DIR_SRC)/%,$(DIR_OBJ)/%, $(SRC:.s=.o))

all: $(NAME)
test:
	gcc main.c -o $(TEST) $(LIBS) $(INCLUDES)
$(DIR_OBJ)/%.o: $(DIR_SRC)/%.s
	@mkdir -p $(dir $@)
	$(CMD_CP) $(FLAG) $< -o $@
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -rf $(DIR_OBJ)
fclean: clean
	rm -f $(NAME) $(TEST)
re: fclean all
.PHONY : all clean fclean re test
