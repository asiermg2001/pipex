/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   child.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 08:46:37 by amarcos-          #+#    #+#             */
/*   Updated: 2023/10/09 09:24:55 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	first(int *fd, char **argv, char **envp)
{
	int	newfd;

	newfd = openfile(argv[1], 0);
	dup2(newfd, 0);
	dup2(fd[1], 1);
	close(fd[0]);
	execute(argv[2], envp);
}

void	second(int *fd, char **argv, char **envp)
{
	int	newfd;

	newfd = openfile(argv[4], 1);
	dup2(newfd, 1);
	dup2(fd[0], 0);
	close(fd[1]);
	execute(argv[3], envp);
}
