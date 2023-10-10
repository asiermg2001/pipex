/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:08:46 by amarcos-          #+#    #+#             */
/*   Updated: 2023/10/10 09:06:40 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char **envp)
{
	int		fd[2];
	pid_t	pipex;

	if (argc != 5)
	{
		ft_putstr_fd("./pipex infile cmd cmd outfile\n", 2);
		exit(0);
	}
	if (pipe(fd) == -1)
		exit(-1);
	pipex = fork();
	if (pipex == -1)
		exit(-1);
	if (!pipex)
		first(fd, argv, envp);
	second(fd, argv, envp);
}
