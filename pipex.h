/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:32:37 by amarcos-          #+#    #+#             */
/*   Updated: 2023/10/10 08:47:14 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <string.h>
# include <stdio.h>
# include "Libft/libft.h"

void	first(int *fd, char **argv, char **envp);

void	second(int *fd, char **argv, char **envp);

void	freefiles(char **array);

int		openfile(char *filename, int i);

char	*findpath(char *cmd);

void	execute(char *cmd, char **env);

#endif