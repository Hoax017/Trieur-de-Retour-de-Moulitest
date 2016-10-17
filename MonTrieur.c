#include <libft.h>
#include <get_next_line.h>
#include <stdio.h>
#include <limits.h>

void	ft_tabdel(t_tab *tab)
{
	size_t	i;

	i = 0;
	//while (*tab && *(tab[i]) != NULL)
	//	free(*(tab[i++]));
}

t_tab	ft_joinstrtotab(t_tab tab, char *str, int ifre)
{
	t_tab 	newtab;
	size_t	len;
	int		i;
	int		istr;

	len = 0;
	istr = 0;
	i = -1;
	len = ft_tablen(tab, 0);
	if(str)
	{
		istr = 1;
		len++;
	}
	newtab = (t_tab)malloc(sizeof(char *) * len + 1);
	newtab[len] = NULL;
	while (++i < (len - istr))
		newtab[i] = ft_strdup(tab[i]);
	if(istr)
		newtab[i] = ft_strdup(str);
	if(tab && (ifre == 1 || ifre == 3))
		ft_tabdel(&tab);
	if(istr && (ifre == 2 || ifre == 3))
		ft_strdel(&str);
	return (newtab);
}


int ft_coutbonus(t_tab tab)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while(tab[i] != NULL)
	{
		if (!ft_strncmp("bonus", &tab[i][14], 5))
			nb++;
		i++;
	}

	return (nb);
}

int main(int argc, char const *argv[])
{
	char 	*line;
	int		fd;
	int		i;
	int		i2;
	int		petit;
	int		lpetit;
	int		next;
	t_tab	tab;
	size_t	len;
	t_tab	newtab;

	tab = NULL;
	fd = 0;
	if (argc >= 2)
		fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		if (ft_strstr(line, ">>>>") && !ft_strstr(line, "Result") && !ft_strstr(line, "Tests for"))
			tab = ft_joinstrtotab(tab, line, 1);
	}

	len = ft_tablen(tab, 0);
	newtab = (t_tab)malloc(sizeof(char *) * len + 1);
	newtab[len] = NULL;
	petit = -1;
	i2 = 0;
	lpetit = 0;
	i2 = 0;
	while (i2 < (len - ft_coutbonus(tab)))
	{
		petit += 2;
		i = 0;
		next = lpetit;
		while (tab[i] != NULL)
		{
			if (ft_atoi(&tab[i][14]) < petit && ft_strncmp("bonus", &tab[i][14], 5) && ft_strncmp("KO", tab[i], 2))
			{
				petit = ft_atoi(&tab[i][14]);
				lpetit = i;
			}
			i++;
		}
		if (next != lpetit)
		{
			newtab[i2] = ft_strdup(tab[lpetit]);
			ft_strcpy(tab[lpetit], "KO");
			i2++;
		}
		else
			petit++;
	}
	next = 0;
	petit = -1;
	lpetit = 0;
	while (i2 < len)
	{
		petit += 2;
		i = 0;
		next = lpetit;
		while (tab[i] != NULL)
		{
			if (!ft_strncmp("bonus", &tab[i][14], 5) && ft_atoi(&tab[i][20]) < petit && ft_strncmp("KO", tab[i], 2))
			{
				petit = ft_atoi(&tab[i][20]);
				lpetit = i;
			}
			i++;
		}
		if (next != lpetit)
		{
			newtab[i2] = ft_strdup(tab[lpetit]);
			ft_strcpy(tab[lpetit], "KO");
			i2++;
		}
		else
			petit++;
	}
	ft_show_tab(newtab, -1, 0, 0);
	i = 0;
	while (newtab[i])
		free (newtab[i++]);
	i = 0;
	while (tab[i])
		free (tab[i++]);
	return 0;
}