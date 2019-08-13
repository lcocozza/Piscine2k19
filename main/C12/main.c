/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 05:13:45 by lucocozz          #+#    #+#             */
/*   Updated: 2019/07/25 21:38:20 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_print(void *str)
{
	printf("%s\n", (char *)str);
}

int	ft_strcmp(void *vs1, void *vs2)
{
	int i;
	char *s1;
	char *s2;

	i = 0;
	s1 = (char *)vs1;
	s2 = (char *)vs2;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	t_list *list = NULL;
	//t_list *list2 = NULL;
	//t_list *last;
	// t_list *params;
	t_list *list_at;
	//int nb = 0;

	// (void)argc;
	// (void)argv;
	//list = ft_create_elem((void *)strdup("create_elem"));
	//ft_list_push_back(&list, (void *)strdup("push_back"));
	//ft_list_push_front(&list, (void *)strdup("push_front"));
	//ft_print_list(list);
	// nb = ft_list_size(list);
/*	printf("%d\n", nb); */
	// last = ft_list_last(list);
	// ft_print_list(last);
	// params = ft_list_push_strs(argc, argv);
	// ft_print_list(params);
	//ft_list_clear(list, &free);
	//ft_print_list(list);
	//list_at = ft_list_at(list, 4);
	//ft_print_list(list_at);
//	ft_list_reverse(&list);
//	ft_print_list(list);
	//ft_list_foreach(list, &ft_print);
	//ft_list_foreach_if(list, &ft_print, (void *)"create_elem", &ft_strcmp);
	list_at = ft_list_find(list, (void *)"push_front", &ft_strcmp);
	ft_print_list(list_at);
	//ft_list_remove_if(&list, (void *)"push_back", &ft_strcmp, &free);
	//ft_print_list(list);
	//list2 = ft_create_elem((void *)"3");
	//ft_list_push_back(&list2, (void *)"2");
	//ft_list_push_back(&list2, (void *)"1");
/*
** 	ft_list_merge(&list, list2);
** 	ft_print_list(list);
*/
//	ft_list_sort(&list, &ft_strcmp);
	//ft_print_list(list);
	//ft_list_reverse_fun(list);
	//ft_print_list(list);
	//ft_sorted_list_insert(&list, (void *)"aaa", &ft_strcmp);
	//ft_print_list(list);
	// ft_sorted_list_merge(&list, params, &ft_strcmp);
	// ft_print_list(list);

	return 0;
}
