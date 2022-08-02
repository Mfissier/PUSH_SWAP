/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafissie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:09:50 by mafissie          #+#    #+#             */
/*   Updated: 2022/08/02 13:32:39 by mafissie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <stdlib.h>
# include <stddef.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_stack
{
	struct s_stack	*prev;
	struct s_stack	*next;
	int				data;
	int				pos;
}		t_stack;

void	ft_sort_group_three_a(t_stack **lst);
void	ft_sort_group_three_b(t_stack **lst);
void	ft_sort_group_four(t_stack **a, t_stack **b);
int		ft_previously_tris(t_stack **lst, int size);
void	ft_sort_group_five(t_stack **a, t_stack **b);
void	ft_parse_sort(t_stack **a, t_stack **b, int size);
size_t	ft_len(char **str);
void	ft_double(int *tab, int end, char **str, int ac);
int		*ft_check(char **str, int ac);
void	ft_pb_init_list(t_stack **a, t_stack**b);
void	ft_pb(t_stack **a, t_stack **b);
void	ft_pa_init_list(t_stack **a, t_stack**b);
void	ft_pa(t_stack **a, t_stack **b);
int		ft_exit(void);
void	ft_free(char **str);
int		ft_onearg(char *arg, int **tab);
int		ft_multiarg(char **arg, int ac, int **tab);
int		ft_len_max_bite(int size);
void	ft_radix(t_stack **a, t_stack **b, int size);
void	ft_rra(t_stack **lst);
void	ft_rrb(t_stack **lst);
void	ft_ra(t_stack **lst);
void	ft_rb(t_stack **lst);
void	ft_sa(t_stack **lst);
void	ft_sb(t_stack **lst);
void	ft_freestack(t_stack **a, t_stack **b);
int		ft_pos_stack(int size, int *tab, int i);
void	ft_fillstack(t_stack **a, int size, int *tab);
int		ft_is_list_sort(t_stack **lst);
size_t	ft_strlen(const char *s);
size_t	ft_size(const char *s, char c);
int		ft_atoi(const char *nptr);
int		ft_atoi_free(const char *nptr, char **str);
char	**ft_wordfree(char **tab, int i);
char	*ft_wordtab(const char *s, char c, char **str);
int		ft_wordnbr(char const *s, char c);
char	**ft_split(char const *s, char c);
void	ft_digit(char *s);

#endif
