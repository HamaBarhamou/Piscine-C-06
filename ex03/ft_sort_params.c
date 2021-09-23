/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:20:17 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/23 15:13:28 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
/*void	sort_chaine(char **ch1, char **ch2)
{
	int	i;
	char *ptr;

	i = 0;
	while (*ch1[i] && *ch1[i] == *ch2[i])
		i++;
	if (*ch1[i] > *ch2[i] )
	{
		ptr = *ch1;
		*ch1 = *ch2;
		*ch2 = ptr;
	}
}

void	sort_argv(int *argc, char	*argv[])
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (i < *argc)
	{
		while (j < *argc -1)
		{
			sort_chaine(&argv[j],&argv[j+1]);
			j++;
		}
		j = 0;
		i++;
	}
	
}*/

void	print_arg(int *argc, char	*argv[])
{
	int		i;
	int		taille;
	char	*chaine;

	i = 0;
	taille = 0;
	while (i < *argc)
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

int	main(int argc, char *argv[])
{
	int	i;
	int j;
	int	k;
	char	*ptr;

	i = 0;
	j = 0;
	k = 0;
	//*ptr = NULL;
	while (i < argc)
	{
		while (j < argc -1)
		{
			//sort_chaine(&argv[j],&argv[j+1]);
			k = 0;
			while (argv[j] && argv[j][k] == argv[j+1][k])
			{
				k++;
			}
			if (argv[j][k] > argv[j][k+1])
			{
				*ptr = argv[j][k];
				argv[j][k] = argv[j][k+1];
				argv[j][k+1] = *ptr;
			}
			j++;
		}
		j = 0;
		i++;
	}
	print_arg(&argc,argv);
	return (0);
}
