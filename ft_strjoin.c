/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emansoor <emansoor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:10:59 by emansoor          #+#    #+#             */
/*   Updated: 2024/10/20 14:18:16 by emansoor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
allocates and returns a new string resulted from a concatenation of "s1"
and "s2"
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*jointstr;
	size_t	index1;
	size_t	index2;
	size_t	totlen;

	if (s1)
	{
		totlen = ft_strlen(s1) + ft_strlen(s2);
		jointstr = (char *)malloc(sizeof(char) * (totlen + 1));
		if (jointstr)
		{
			index1 = ft_strlcpy(jointstr, s1, ft_strlen(s1) + 1);
			index2 = 0;
			while (s2[index2] != '\0')
			{
				jointstr[index1] = s2[index2];
				index1++;
				index2++;
			}
			jointstr[index1] = '\0';
			return (jointstr);
		}
	}
	return (NULL);
}
