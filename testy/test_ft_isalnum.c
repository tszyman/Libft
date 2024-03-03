/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:15:37 by tomek             #+#    #+#             */
/*   Updated: 2024/03/03 20:25:28 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"

int	main(void)
{
	printf("********** ft_isalnum **********\n");
	printf("Original isalnum for 3: %d\n", isalnum(3));
	printf("My v. ft_isalnum for 3: %d\n", ft_isalnum(3));
	printf("Original isalnum for 50 (ASCII 2): %d\n", isalnum(50));
	printf("My v. ft_isalnum for 50 (ASCII 2): %d\n", ft_isalnum(50));
	printf("Original isalnum for 84 (ASCII 'T'): %d\n", isalnum(84));
	printf("My v. ft_isalnum for 84 (ASCII 'T'): %d\n", ft_isalnum(84));
	printf("Original isalnum for null : %d\n", isalnum(0));
	printf("My v. ft_isalnum for null : %d\n", ft_isalnum(0));
}
