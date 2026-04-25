#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char const *s1)
{
	int	i;

	while (s1)
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		l;
	char	*s2;

	l = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * (l + 1));
	if (!s2)
		return (NULL);
	i = 0;
	j = 0;
	while (s1)
	{
		while (set)
		{
			if (s1[i] = set)
			{
				s2[j] = s1[i];
				j++;
			}
			i++;
		}
	}
	return (s2);
}

int	main(void)
{
	char	t;
	char	*s1;
	char	*s2;

	t = 'a';
	s1 = 'hello woarld';
	s2 = ft_strtrim(s1, t);
	printf("%s\n", s2);
	free(s2);
	return (0);
}
