#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char const *s1, char const *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		i++;
		j++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*s;
	int		i;
	int		j;

	size = ft_strlen(s1, s2);
	s = (char *)malloc(sizeof(char) * (size + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}

int	main(int ac, char **av)
{
	char	*s;

	if (ac != 3)
	{
		printf("error\n");
		return (0);
	}
	s = ft_strjoin(av[1], av[2]);
	printf("%s\n", s);
	free(s);
	return (0);
}
