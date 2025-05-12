/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   access.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:08:06 by atashiro          #+#    #+#             */
/*   Updated: 2025/05/12 14:09:30 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main() 
{
	const char *filename = "../test/example.txt";

	if (access(filename, R_OK) == 0)
		printf("ファイルは読み取り可能です。\n");
	else
		perror("読み取り権限の確認");
	return 0;
}
