/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrus-gar <jrus-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:36:07 by jrus-gar          #+#    #+#             */
/*   Updated: 2023/09/05 18:10:54 by jrus-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*join_lines(char *line1, char *line2)
{
	char	*concatenated;

	if (!line1)
	{
		line1 = malloc(1);
		if (!line1)
		{
			return (NULL);
		}
		line1[0] = '\0';
	}
	concatenated = ft_strjoin(line1, line2);
	free(line1);
	return (concatenated);
}

/*Se utiliza para extraer una línea de texto*/
char	*ft_get_line(char *stack_lines)
{
	char	*line;
	size_t	i;

	if (!stack_lines || !*stack_lines)
		return (NULL);
	i = 0;
	while (stack_lines[i] != '\n' && stack_lines[i] != '\0')
		i++;
	if (stack_lines[i] == '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (stack_lines[i] != '\n' && stack_lines[i] != '\0')
	{
		line[i] = stack_lines[i];
		i++;
	}
	if (stack_lines[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

/*Se utiliza para actualizar stack_lines después de haber extraído una
línea de texto */

char	*refresh_stack(char *stack_lines)
{
	char	*nextline;
	char	*rest;
	int		i;

	i = 0;
	rest = ft_strchr(stack_lines, '\n');
	if (!rest)
	{
		free(stack_lines);
		return (NULL);
	}
	rest++;
	nextline = malloc(sizeof(char) * (ft_strlen(rest) + 1));
	if (!nextline)
		return (NULL);
	while (*rest != '\0')
	{
		nextline[i] = *rest;
		i++;
		rest++;
	}
	nextline[i] = '\0';
	free(stack_lines);
	return (nextline);
}

char	*get_next_line(int fd)
{
	static char	*stack_lines;
	char		temp[BUFFER_SIZE + 1];
	char		*line;
	ssize_t		btread;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	btread = 1;
	while (btread > 0)
	{
		btread = read(fd, temp, BUFFER_SIZE);
		if (btread < 0)
			return (free(stack_lines), stack_lines = NULL, NULL);
		temp[btread] = '\0';
		stack_lines = join_lines(stack_lines, temp);
		if (!stack_lines)
			return (NULL);
		if (ft_strchr(stack_lines, '\n'))
			break ;
	}
	line = ft_get_line(stack_lines);
	stack_lines = refresh_stack(stack_lines);
	return (line);
}

// int	main(void)
// {
// 	int		fd;
// 	char	*line;

// 	fd = open("test.txt", O_RDONLY);
// 	line = get_next_line(fd);
// 	printf("%s", line);
// 	free(line);
// 	line = get_next_line(fd);
// 	printf("%s", line);
// 	free(line);
// 	line = get_next_line(fd);
// 	printf("%s", line);
// 	free(line);
// 	line = get_next_line(fd);
// 	printf("%s", line);
// 	free(line);
// 	line = get_next_line(fd);
// 	printf("%s", line);
// 	free(line);
// 	return (0);
// }
