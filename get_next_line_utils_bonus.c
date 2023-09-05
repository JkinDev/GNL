/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:57:31 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/08/22 18:06:50 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

/*Concatena dos cadenas de carácteres y devuelve una nueva cadena*/
char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr;
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	ptr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (ptr == NULL)
		return (0);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[x] != '\0')
	{
		ptr[i + x] = s2[x];
		x++;
	}
	ptr[i + x] = '\0';
	return (ptr);
}

/*Determina la longitud de una cadena de carácteres*/
size_t	ft_strlen(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*Busca la primera aparición de una carácter específico en una cadena y
devuelve un puntero a la ubicación de ese carácter*/
char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return ((char *)&s[i]);
}
