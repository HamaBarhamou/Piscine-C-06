/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:39:53 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/23 16:59:43 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char	*argv[])
{
	int		i;
	int		taille;
	char	*chaine;

	i = 1;
	taille = 0;
	while (i < argc)
	{
		chaine = argv[i];
		while (chaine[taille])
			taille++;
		write(1, argv[i], taille);
		write(1, "\n", 1);
		taille = 0;
		i++;
	}
}
