/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <tszymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:51:25 by tszymans          #+#    #+#             */
/*   Updated: 2024/03/13 20:41:40 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	char	*s;
	char	*s_beg;
	size_t	s1_len;
	size_t	s_len;

	s = (char *)s1;
	s1_len = ft_strlen(s);
	if (*set == '\0')
		return (s);
	while (*set)
	{
		while (*s == *set && s < s1 + s1_len)
		{
			s++;
		}
		set++;
	}
	s_beg = s;
	s_len = ft_strlen(s);
	s = (char *)s1 + s1_len;
	while (*set)
	{
		while (*s == *set && s > s_beg)
		{
			s--;
		}
		set++;
	}
	s_len = s - s_beg;
	trim = (char *)calloc((s_len + 1), sizeof(char));
	if (!trim)
		return (0);
	ft_strlcpy(trim, s_beg, s_len + 1);
	return (trim);
}
