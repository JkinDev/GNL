/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:58:13 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/09/05 18:11:17 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 20
# endif

# ifndef FD_MAX
#  define FD_MAX 256
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>

/**
 * @brief Esta es una función que realiza una tarea específica.
 *
 * Descripción detallada de lo que hace la función y cómo funciona,
 * incluyendo los parámetros que toma y lo que devuelve.
 *
 * @param parametro1 Descripción del primer parámetro.
 * @return Descripción de lo que devuelve la función(si es voidpuedes omitir
 *
 * Más detalles opcionales si es necesario, como excepciones lanzadas o
 * consideraciones especiales.
 */
char	*get_next_line(int fd);

/**
 * @brief Esta es una función que realiza una tarea específica.
 *
 * Descripción detallada de lo que hace la función y cómo funciona,
 * incluyendo los parámetros que toma y lo que devuelve.
 *
 * @param parametro1 Descripción del primer parámetro.
 * @param parametro2 Descripción del segundo parámetro.
 * @return Descripción de lo que devuelve la función(si es voidpuedes omitir
 *
 * Más detalles opcionales si es necesario, como excepciones lanzadas o
 * consideraciones especiales.
 */
char	*ft_strjoin(char *s1, char *s2);

/**
 * @brief Esta es una función que realiza una tarea específica.
 *
 * Descripción detallada de lo que hace la función y cómo funciona,
 * incluyendo los parámetros que toma y lo que devuelve.
 *
 * @param parametro1 Descripción del primer parámetro.
 * @param parametro2 Descripción del segundo parámetro.
 * @return Descripción de lo que devuelve la función(si es voidpuedes omitir
 *
 * Más detalles opcionales si es necesario, como excepciones lanzadas o
 * consideraciones especiales.
 */
size_t	ft_strlen(char *s);

/**
 * @brief Esta es una función que realiza una tarea específica.
 *
 * Descripción detallada de lo que hace la función y cómo funciona,
 * incluyendo los parámetros que toma y lo que devuelve.
 *
 * @param parametro1 Descripción del primer parámetro.
 * @param parametro2 Descripción del segundo parámetro.
 * @return Descripción de lo que devuelve la función(si es voidpuedes omitir
 *
 * Más detalles opcionales si es necesario, como excepciones lanzadas o
 * consideraciones especiales.
 */
char	*ft_strchr(const char *s, int c);

#endif
