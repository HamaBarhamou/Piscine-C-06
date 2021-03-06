/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:10:59 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/23 12:13:54 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char	*argv[])
{
	int		i;
	int		taille;
	char	*chaine;

	i = argc - 1;
	taille = 0;
	while (i > 0)
	{
		chaine = argv[i];
		while (chaine[taille])
			taille++;
		write(1, argv[i], taille);
		write(1, "\n", 1);
		taille = 0;
		i--;
	}
}
