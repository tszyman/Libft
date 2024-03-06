/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <tszymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:17:03 by tszymans          #+#    #+#             */
/*   Updated: 2024/03/06 15:17:40 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

int	main(void)
{
	char	str[6];

	str[0] = 'T';
	str[1] = 'o';
	str[2] = 'm';
	str[3] = 'e';
	str[4] = 'k';
	str[5] = '\0';

	printf("string before original bzero: %s \n", str);
	bzero(str + 1, 3 * sizeof(char));
	printf("string after original bzero: %s \n", str);
	printf("string after original bzero: %c \n", str[0]);
	printf("string after original bzero: %c \n", str[1]);
	printf("string after original bzero: %c \n", str[2]);
	printf("string after original bzero: %c \n", str[3]);
	printf("string after original bzero: %c \n", str[4]);
	printf("string after original bzero: %c \n", str[5]);
	str[0] = 'T';
	str[1] = 'o';
	str[2] = 'm';
	str[3] = 'e';
	str[4] = 'k';
	str[5] = '\0';
	printf("string before my ft_bzero: %s \n", str);
	ft_bzero(str + 1, 3 * sizeof(char));
	printf("string after my ft_bzero: %s \n", str);
	printf("string after my ft_bzero: %c \n", str[0]);
	printf("string after my ft_bzero: %c \n", str[1]);
	printf("string after my ft_bzero: %c \n", str[2]);
	printf("string after my ft_bzero: %c \n", str[3]);
	printf("string after my ft_bzero: %c \n", str[4]);
	printf("string after my ft_bzero: %c \n", str[5]);
}
