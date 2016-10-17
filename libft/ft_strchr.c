/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaitre <amaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:11:23 by amaitre           #+#    #+#             */
/*   Updated: 2015/12/02 18:38:06 by amaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s1;
	char	c1;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s) + 1;
	c1 = (char)c;
	s1 = (char*)s;
	while (i <= len && s1[i] != c1)
		i++;
	if ((i - 1) == len)
		return (0);
	else
		return (&s1[i]);
}
