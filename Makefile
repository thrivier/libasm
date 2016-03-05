NAME = libasm.a
TEST = test
CAT = ft_cat
INCLUDES=-Iincludes
LIBS = -L . -lasm

UNAME := $(shell uname -s)
ifeq ($(UNAME), Linux)
FLAG = -f elf64
CMD_CP = nasm
else
FLAG = -f macho64
CMD_CP = ~/.brew/Cellar/nasm/2.11.08_1/bin/nasm
endif

DIR_SRC = srcs
DIR_OBJ = objs
DIR_INCLUDES = includes/
DIR_OTHER = ./
SRC = $(shell find $(DIR_SRC) -type f)
OBJ = $(patsubst $(DIR_SRC)/%,$(DIR_OBJ)/%, $(SRC:.s=.o))

all: $(NAME)
test:
	gcc -g main.c -o $(TEST) $(LIBS) $(INCLUDES)
cat:
	gcc -g ft_cat.c -o $(CAT) $(LIBS) $(INCLUDES)
$(DIR_OBJ)/%.o: $(DIR_SRC)/%.s
	@mkdir -p $(dir $@)
	$(CMD_CP) $(FLAG) $< -o $@
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -rf $(DIR_OBJ)
fclean: clean
	rm -f $(NAME) $(TEST) $(CAT)
re: fclean all
.PHONY : all clean fclean re test
