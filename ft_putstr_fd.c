#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	int	i;

	i = ft_strlen(s);
	write(fd, s, i);
}
