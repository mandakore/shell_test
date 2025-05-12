/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readline.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:29:33 by atashiro          #+#    #+#             */
/*   Updated: 2025/05/12 13:30:58 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <readline/readline.h>
# include <readline/history.h>

int main()
{
	char *line = NULL;

	while (1)
	{
		line = readline("> ");
		if (line == NULL || strlen(line) == 0)
		{
			free(line);
			break;
		}
		printf("line is '%s'\n", line);
		add_history(line);
		free(line);
	}
	printf("exit\n");
	return 0;
}
