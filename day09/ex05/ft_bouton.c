/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 23:44:23 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/16 23:50:47 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_bouton(int i, int j, int k)
{
	if ((i < j && j < k) || (k < j && j < i))
		return (j);
	else if ((j < i && i < k) || (k < i && i < k))
		return (i);
	else if ((i < k && k < j) || (j < k && k < i))
		return (k);
	else
		return (i);
}
