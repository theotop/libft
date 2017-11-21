#include <libft.h>

int		ft_cntltr(char const *s, size_t start, char sep)
{
	int	letters;

	letters = 1;
	while (s[start] && s[start] != sep)
	{
		start++;
		letters++;
	}
	return (letters);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	ptr;
	int		wrd;
	size_t	let;
	char	**tab;

	wrd = 0;
	let = 0;
	ptr = 0;
	if (!(tab = malloc(sizeof(char *) * ft_cntwds(s, c) + 1)))
		return (NULL);
	while (wrd < ft_cntwds(s, c))
	{
		while (s[ptr] == c)
				ptr++;
		if (!(tab[wrd] = malloc(sizeof(char) * ft_cntltr(s, ptr, c) + 1)))
			return (NULL);
		while (s[ptr] && s[ptr] != c)
				tab[wrd][let++] = s[ptr++];
		tab[wrd][let] = '\0';
		let = 0;
		wrd++;
	}
	tab[wrd] = NULL;
	return (tab);
}
