/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcos- <amarcos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:38:30 by amarcos-          #+#    #+#             */
/*   Updated: 2023/10/10 09:32:32 by amarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	openfile(char *filename, int i)
{
	int	file;

	if (i == 0)
		file = open(filename, O_RDONLY, 0777);
	if (i == 1)
		file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (i == -1)
		exit (0);
	return (file);
}

void	execute(char *cmd, char **env)
{
	char	**newcmd;
	char	*path;

	newcmd = ft_split(cmd, ' ');
	path = findpath(newcmd[0]);
	if (execve(path, newcmd, env) == -1)
	{
		ft_putstr_fd("pipex command not found: ", 2);
		ft_putendl_fd(newcmd[0], 2);
		freefiles(newcmd);
		exit(0);
	}
}

char	*findpath(char *cmd)
{
	int		i;
	char	*execute;
	char	**path;
	char	*partpath;
	char	**newcmd;

	i = -1;
	path = ft_split(getenv("PATH"), ':');
	newcmd = ft_split(cmd, ' ');
	while (path[++i])
	{
		partpath = ft_strjoin(path[i], "/");
		execute = ft_strjoin(partpath, newcmd[0]);
		free(partpath);
		if (access(execute, F_OK | X_OK) == 0)
		{
			freefiles(newcmd);
			return (execute);
		}
		free(execute);
	}
	freefiles(path);
	freefiles(newcmd);
	return (cmd);
}
