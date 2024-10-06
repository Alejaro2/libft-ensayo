# Variables
LIB = ar rcs          # Comando para crear la biblioteca estática
RM = rm -f            # Comando para eliminar archivos

CC = gcc              # Compilador a utilizar
CCFLAGS = -Wall -Wextra -Werror  # Flags para advertencias

NAME = libft.a        # Nombre de la biblioteca de salida
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_strlcpy.c # Archivos fuente
OBJ = $(SRC:.c=.o)    # Archivos objeto generados a partir de los archivos fuente
INCLUDE = libft.h     # Archivo de encabezado

# Regla por defecto
all: $(NAME)

# Regla para crear la biblioteca
$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)  # Crear la biblioteca estática

# Regla para compilar los archivos .c en .o
%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

# Limpiar archivos objeto
clean:
	$(RM) $(OBJ)

# Limpiar archivos objeto y la biblioteca
fclean: clean
	$(RM) $(NAME)

# Recompilar todo
re: fclean all
