/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpluta <jpluta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 12:38:48 by jpluta            #+#    #+#             */
/*   Updated: 2025/09/06 18:38:14 by jpluta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"
#include "libft/get_next_line/get_next_line.h"

typedef struct	s_data
{
	char	*path_to_the_north_texture;
	char	*path_to_the_south_texture;
	char	*path_to_the_west_texture;
	char	*path_to_the_east_texture;
	char	*F;
	char	*C;
	char	**map;
}					t_data;

t_data	init_t_data(void)
{
	t_data	temp_data;
	
	temp_data.path_to_the_north_texture = NULL;
	temp_data.path_to_the_south_texture = NULL;
	temp_data.path_to_the_west_texture = NULL;
	temp_data.path_to_the_east_texture = NULL;
	temp_data.F = NULL;
	temp_data.C = NULL;
	temp_data.map = NULL;
	return (temp_data);
}

typedef struct	s_valid_file_data
{
	int NO_path_to_the_north_texture;
	int SO_path_to_the_south_texture;
	int WE_path_to_the_west_texture;
	int EA_path_to_the_east_texture;
	int F;
	int	C;
	int	map;
}					t_valid_file_data;

t_valid_file_data	init_valid_file_data(void)
{
	t_valid_file_data	default_data;

	default_data.NO_path_to_the_north_texture = 0;
	default_data.SO_path_to_the_south_texture = 0;
	default_data.WE_path_to_the_west_texture = 0;
	default_data.EA_path_to_the_east_texture = 0;
	default_data.F = 0;
	default_data.C = 0;
	default_data.map = 0;
	return (default_data);
}

/* main.c */
int		is_file_name_valid(char *file_name);

/* parsing/parse_file_data.c */
int		check_and_process_file(char *file, t_data *data);
void	process_line(char *line, t_data *data);
void	extract_data(char *line, t_data *data, int *i);
char	*skip_empty_spaces(char *line, int *i);