/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_task.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbenjy <jbenjy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:44:02 by jbenjy            #+#    #+#             */
/*   Updated: 2022/02/10 18:28:35 by jbenjy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lab.hpp"

void    find_int_and_div(std::vector<float> *vec)
{
    std::vector<float>::iterator it = (*vec).begin();
    
    while (it != (*vec).end())
    {
        if (*it == (int)(*it))
            *it /= 2;
        it++;
    }
}

// void    find_right_neg(std::vector<float> vec)
// {
//     int pos = -1;
//     std::vector<float>::iterator it = vec.begin();
    
    
    
// }

void    second_task()
{
    std::vector<float> vec = init_vector_float(N);
    print_vector(vec);
    
    std::cout << "\nDiv 2 all int numbers\n";
    find_int_and_div(&vec);
    std::cout << "After processing:\n";
    print_vector(vec);
    
}