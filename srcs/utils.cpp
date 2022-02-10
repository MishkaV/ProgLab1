/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbenjy <jbenjy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:42:52 by jbenjy            #+#    #+#             */
/*   Updated: 2022/02/10 16:43:05 by jbenjy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lab.hpp"

std::vector<int>    init_vector(int capacity)
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

void    print_vector(std::vector<int> vec)
{
    std::vector<int>::iterator it = vec.begin();

    std::cout << "\nVector: ";  
    while (it != vec.end())
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << "\n";
}