/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:15:37 by tomek             #+#    #+#             */
/*   Updated: 2024/03/04 12:05:39 by tszymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"

int	main(void)
{
	printf("********** ft_isdigit **********\n");
	printf("Original isdigit for 3: %d\n", isdigit(3));
	printf("My v. ft_isdigit for 3: %d\n", ft_isdigit(3));
	printf("Original isdigit for 50 (ASCII 2): %d\n", isdigit(50));
	printf("My v. ft_isdigit for 50 (ASCII 2): %d\n", ft_isdigit(50));
	printf("Original isdigit for 84 (ASCII 'T'): %d\n", isdigit(84));
	printf("My v. ft_isdigit for 84 (ASCII 'T'): %d\n", ft_isdigit(84));
	printf("Original isdigit for null : %d\n", isdigit(0));
	printf("My v. ft_isdigit for null : %d\n", ft_isdigit(0));
}
