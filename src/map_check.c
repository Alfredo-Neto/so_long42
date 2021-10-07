#include "so_long.h"

// static int has_valid_walls(char **map, t_map *m)
// {
//     int  i;
//     int  j;

//     while (map[m->map_col_size])
//         m->map_col_size++;
//     m->map_col_size--;
//     m->map_row_size = ft_strlen(*map) - 1;
//     i = 0;
//     while(map[i])
//     {
//         j = 0;
//         while(map[i][j])
//         {   
//             if (map[0][j] != '1' || 
//                 map[i][0] != '1' || map[i][m->map_row_size] != '1'
//                 || map[m->map_col_size][j] != '1')
//                     return (0);
//             j++;
//         }
//         i++;
//     }
//     return (1);
// }

// static int has_valid_chars(char **map)
// {
//     int  i;
//     int  j;

//     i = 0;
//     while(map[i])
//     {
//         j = 0;
//         while(map[i][j])
//         {   
//            if (map[i][j] != '1' && map[i][j] != '0' 
//             && map[i][j] != 'P' && map[i][j] != 'C' 
//             && map[i][j] != 'E')
//                 return (0);
//             j++;
//         }
//         i++;
//     }
//     return (1);
// }

static int has_minimum_chars(char **map, t_map *m)
{
    int  i;
	int  j;

    i = 0;
    while(map[i])
    {
       j = 0;
       while (map[i][j])
       {
			if(map[i][j] == 'P')
				m->player++;
			if(map[i][j] == 'C')
				m->collectible++;
			if(map[i][j] == 'E')
				m->exit++;
			if (m->collectible > 0 
				&& m->exit > 0 && m->player > 0)
            return (1);
        j++;
       }
     i++;
    }
    return (0);
}

int is_valid_map(char **map)
{
    t_map m;
    // if (has_valid_walls(map) && has_valid_chars() 
    //     && has_minimum_chars() && is_rectangular() && has_valid_extension())
    //     return (1);

	map_check_init(&m);
    if (has_minimum_chars(map, &m))
        return (1);
    return (0);
}