/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaitre <amaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 13:18:29 by amaitre           #+#    #+#             */
/*   Updated: 2015/12/21 21:55:54 by amaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	int		neg;
	char	*alpha;

	len = ft_intlen(n) + 1;
	i = 0;
	neg = 0;
	alpha = (char *)ft_memalloc(len);
	if (n == -2147483648)
		ft_strcpy(alpha, "-2147483648\0");
	else if (n != 0)
	{
		if (n < 0 && (n *= -1) && (neg = 1))
			len -= 1;
		while (--len > 0 && (alpha[i++] = (n % 10) + '0'))
			n /= 10;
		if (neg == 1)
			alpha[i++] = '-';
		alpha[i] = '\0';
		return (ft_strrev(alpha));
	}
	else
		ft_strcpy(alpha, "0\0");
	return (alpha);
}
