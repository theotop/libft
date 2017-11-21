#include <libft.h>

int	ft_cntwds(char const *s, char sep)
{
	size_t	t;
	size_t	count;
	int		counted;

	t = 0;
	count = (s[t] == sep || s[t] == '\0') ? 0 : 1;
	counted = count;
	while (s[t])
	{
		while (s[t] && s[t] == sep)
		{
				counted = 0;
				t++;
		}
while (s[t] && s[t] != sep)
		{
			if (counted == 0)
			{
				count++;
				counted = 1;
			}
			t++;
		}
	}
	return (count);
}
