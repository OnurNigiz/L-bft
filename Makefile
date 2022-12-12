list=ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_atoi.c

OBJS = $(list:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

c.o:
	$(GCC) -c $(CFLAGS) $<

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean: 
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean $(NAME)

norm:	
	norminette *.[ch]

.PHONY:	clean fclean all re bonus norm