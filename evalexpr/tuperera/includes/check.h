/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/25 11:11:56 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/25 11:11:57 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H

int		ft_checkbrackets(char *str);
int		ft_strlen(char *str);
int		ft_wordcount(char *str);
char	*splitter(char *result, char *str);
char	**ft_split_whitespaces(char *str);

#endif
