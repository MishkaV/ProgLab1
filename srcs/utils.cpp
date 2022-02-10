/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbenjy <jbenjy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:42:52 by jbenjy            #+#    #+#             */
/*   Updated: 2022/02/10 18:59:33 by jbenjy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lab.hpp"

std::vector<int>    init_vector_int(int capacity)
{
    std::vector<int> vec(capacity);
    std::vector<int>::iterator it = vec.begin();
    
    while (it != vec.end())
    {
        *it = rand() % 100;
        it++;
    }
    return (vec);
}

std::vector<float>    init_vector_float(int capacity)
{
    std::vector<float> vec(capacity);
    std::vector<float>::iterator it = vec.begin();
    
    while (it != vec.end())
    {
        *it = pow(-1, rand() % 2 + 1) * ((float)(rand() % 1000) / (float)(rand() % 100));
        it++;
    }
    return (vec);
}