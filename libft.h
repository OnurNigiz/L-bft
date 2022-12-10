#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalpha(int str);
int		ft_isalnum(int str);
int		ft_isdigit(int str);
int		ft_isascii(int str);
int		ft_isprint(int str);
size_t	ft_strlen(const char *str);
int		ft_toupper(int str);
int		ft_tolower(int str);
int	ft_atoi(const char *str)

#endif