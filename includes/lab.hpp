/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lab.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbenjy <jbenjy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:06:58 by jbenjy            #+#    #+#             */
/*   Updated: 2022/02/10 17:57:32 by jbenjy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LAB_HPP
# define LAB_HPP

# include <vector>
# include <iostream>
# include <assert.h>
# include <ctime>

std::vector<int>    init_vector_int(int capacity);
std::vector<float>    init_vector_float(int capacity);

void                first_task();
void                second_task(); 

template <typename T>
void    print_vector(std::vector<T> vec)
{
    typename std::vector<T>::iterator it = vec.begin();

    std::cout << "\nVector: ";  
    while (it != vec.end())
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << "\n";
}

#endif