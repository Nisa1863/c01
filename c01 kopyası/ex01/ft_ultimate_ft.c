/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozdal <nozdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 09:28:37 by nozdal            #+#    #+#             */
/*   Updated: 2023/09/06 16:04:26 by nozdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_ft(int	*********nbr)
{
	*********nbr = 42;
}
int	main()
{
	int	a;
	int	*nbr8;
	int	**nbr7;
	int	***nbr6;
	int	****nbr5;
	int	*****nbr4;
	int	******nbr3;
	int	*******nbr2;
	int	********nbr1;

	a = 81;
	int	nbr = a;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1;
	ft_ultimate_ft (nbr);
	printf("%d", &a);
}
