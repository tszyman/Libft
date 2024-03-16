/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <tszymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:02:56 by tszymans          #+#    #+#             */
/*   Updated: 2024/03/16 15:11:56 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

int main(void)
{
	int		fd;
	char	ch = 'a';

	fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
	ft_putchar_fd(ch, fd);
	close(fd);
}
