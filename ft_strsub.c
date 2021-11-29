/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <nsamoilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:24:06 by nsamoilo          #+#    #+#             */
/*   Updated: 2021/11/12 15:52:40 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	s_len;

	s_len = ft_strlen(s);
	new = ft_strnew(len);
	if (new == NULL)
		return (NULL);
	ft_strncpy(new, &(s[start]), len);
	new[len] = '\0';
	return (new);
}
