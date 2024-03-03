/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:15:37 by tomek             #+#    #+#             */
/*   Updated: 2024/03/03 20:35:43 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	main(void)
{
	printf("********** ft_strlen **********\n");
	printf("Original strlen for 'tomek': %lu\n", strlen("tomek"));
	printf("My v. ft_strlen for 'tomek': %d\n", ft_strlen("tomek"));
	printf("Original strlen for '': %lu\n", strlen(""));
	printf("My v. ft_strlen for '': %d\n", ft_strlen(""));
	printf("Original strlen for '123': %lu\n", strlen("123"));
	printf("My v. ft_strlen for '123': %d\n", ft_strlen("123"));
}
