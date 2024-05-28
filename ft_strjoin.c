#include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t i;

    if (s != NULL)
    {
        i = 0;
        while (s[i] != 0)
        {
            i++;
        }
        return (i);
    }
    return (0);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*new_str;
	size_t	i;
	size_t	len_s2;

	len_s2 = ft_strlen(s2);
	len = ft_strlen(s1) + len_s2;
	if (len == 0)
	{
		return (NULL);
	}
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (new_str ==NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ft_strlen(s1))
	{
		new_str[i] = s1[i];
		i++;
	}
	while (i < len)
	{
		new_str[i] = s2[len_s2 - (len - i)];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

int	main(void)
{
	char const s1[] = "12345";
	char const s2[] = "6789";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}