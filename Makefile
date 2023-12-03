SRCS = ft_printf.c ft_putnbr.c ft_strlen.c ft_putstr.c ft_putchar.c ft_puthexa.c ft_putadress.c ft_print.c \
	ft_unputnbr.c

OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rc

all: ${NAME}

%.o : %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@

${NAME} : ${OBJS}
	${LIBC} ${NAME} ${OBJS}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: clean 
