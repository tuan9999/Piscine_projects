/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ex02.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/12 13:09:17 by tjans         #+#    #+#                 */
/*   Updated: 2019/08/13 17:55:36 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

void	test(char *dest, char *src, unsigned int n)
{
	printf("%s:\nft_strncpy: %s\nstrncpy: %s\n", dest, ft_strncpy(dest, src, n), strncpy(dest, src, n));
	printf((ft_strncpy(dest, src, n) == strncpy(dest, src, n)) ? "\033[1;32mOK\033[0m" : "\033[1;31mFAIL\033[0m");
	printf("\n---\n");
}

int		main(void)
{
	char str[1];
	char str1[10];
	char str2[15];
	char str3[50];
	char str4[100];

	test(str1, "qdnxvchcZlRSDfLfrYjZWpFRVwUSEIcqgXB", 1);
	test(str2, "qdnxvchcZlRSDfLfrYjZWpFRVwUSEIcqgXB", 2);
	test(str3, "qdnxvchcZlRSDfLfrYjZWpFRVwUSEIcqgXB", 3);
	test(str4, "qdnxvchcZlRSDfLfrYjZWpFRVwUSEIcqgXB", 4);
	test(str, "       glwumEfTsXGptb", 30);
	test(str1, "glwumEfTsXGptb      ", 500);
	test(str2, "glwumE   fTsXGptb", 12);
	test(str3, "glwumEfTsXGp   tb", 917);
	test(str4, "glwumE   fTsXGptb", 546);

	return (0);
}
