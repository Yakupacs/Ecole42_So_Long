/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:27:24 by yacis             #+#    #+#             */
/*   Updated: 2022/11/14 15:27:26 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
	{
		if (!s1 && !s2)
			return (ft_strdup(""));
		if (!s1)
			return (ft_strdup(s2));
		return (ft_strdup(s1));
	}
	i = -1;
	j = -1;
	newstr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!newstr)
		return (0);
	while (s1[++i])
		newstr[i] = s1[i];
	while (s2[++j])
		if (s2[j] != 13)
			newstr[i++] = s2[j];
	newstr[i] = '\0';
	free(s1);
	return (newstr);
}
