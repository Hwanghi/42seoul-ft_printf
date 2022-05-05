#include "libft.h"

static int	nbr_len(int n)
{
	int				len;
	unsigned int	tmp;

	len = 1;
	if (n < 0)
	{
		tmp = -1 * n;
		len++;
	}
	else
		tmp = n;
	while (tmp > 9)
	{
		len++;
		tmp /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	tmp;

	len = nbr_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		tmp = -1 * n;
	else
		tmp = n;
	while (--len > -1)
	{
		str[len] = tmp % 10 + '0';
		tmp /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
