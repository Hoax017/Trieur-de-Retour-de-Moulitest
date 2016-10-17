/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaitre <amaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:23:53 by amaitre           #+#    #+#             */
/*   Updated: 2015/12/01 13:30:04 by amaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *s2;

	s2 = (char*)malloc((ft_strlen(s) + 1) * sizeof(char));
	ft_strcpy(s2, s);
	return (s2);
}
