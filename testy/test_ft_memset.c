/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tszymans <tszymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:17:03 by tszymans          #+#    #+#             */
/*   Updated: 2024/03/06 15:12:13 by tszymans         ###   ########.fr       */
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

	printf("string before original memset: %s \n", str);
	memset(str + 1, '.', 3 * sizeof(char));
	printf("string after original memset: %s \n", str);
	str[0] = 'T';
	str[1] = 'o';
	str[2] = 'm';
	str[3] = 'e';
	str[4] = 'k';
	str[5] = '\0';
	printf("string before my ft_memset: %s \n", str);
	ft_memset(str + 1, '.', 3 * sizeof(char));
	printf("string after my ft_memset: %s \n", str);
}
