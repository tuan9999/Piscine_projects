/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pointers.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/19 16:57:26 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/19 16:57:26 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(int argc, char **argv)
{
	if(argc)
	printf("Originals values\n\n");
	printf("argv = %p\n\n", argv);
	printf("**argv = %c\n\n", **argv);
	printf("*argv = %s\n\n", *argv);
	argv++;
	printf("used argv++\n\n");
	printf("argv = %p\n\n", argv);
	printf("**argv = %c\n\n", **argv);
	printf("*argv = %s\n\n", *argv);
	(*argv)++;
	printf("used *argv++\n\n");
	printf("argv = %p\n\n", argv);
	printf("**argv = %c\n\n", **argv);
	printf("*argv = %s\n\n", *argv);
	argv++;
	printf("argv = %p\n\n", argv);
	printf("**argv = %c\n\n", **argv);
	printf("*argv = %s\n\n", *argv);
	argv++;
	printf("used argv++\n\n");
	printf("argv = %p\n\n", argv);
	printf("**argv = %c\n\n", **argv);
	printf("*argv = %s\n\n", *argv);
	(*argv)++;
	printf("used *argv++\n\n");
	printf("argv = %p\n\n", argv);
	printf("**argv = %c\n\n", **argv);
	printf("*argv = %s\n\n", *argv);
	argv--;
	printf("used argv--\n\n");
	printf("argv = %p\n\n", argv);
	printf("**argv = %c\n\n", **argv);
	printf("*argv = %s\n\n", *argv);
	(*argv)--;
	printf("used *argv--\n\n");
	printf("argv = %p\n\n", argv);
	printf("**argv = %c\n\n", **argv);
	printf("*argv = %s\n\n", *argv);
	argv--;
	printf("argv = %p\n\n", argv);
	printf("**argv = %c\n\n", **argv);
	printf("*argv = %s\n\n", *argv);
	argv--;
	printf("used argv--\n\n");
	printf("argv = %p\n\n", argv);
	printf("**argv = %c\n\n", **argv);
	printf("*argv = %s\n\n", *argv);
	(*argv)--;
	printf("used *argv--\n\n");
	printf("argv = %p\n\n", argv);
	printf("**argv = %c\n\n", **argv);
	printf("*argv = %s\n\n", *argv);

}