/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lab.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbenjy <jbenjy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:06:58 by jbenjy            #+#    #+#             */
/*   Updated: 2022/02/10 19:50:27 by jbenjy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LAB_HPP
# define LAB_HPP

# define N 5
# define A 0.0f
# define B 5.0f
# include <vector>
# include <iostream>
# include <assert.h>
# include <ctime>
# include <math.h>

std::vector<int>    init_vector_int(int capacity);
std::vector<float>    init_vector_float(int capacity);

void                first_task();
void                second_task(); 

template <typename T>
void    print_vector(std::vector<T> vec)
{
    typename std::vector<T>::iterator it = vec.begin();

    std::cout << "Vector: ";  
    while (it != vec.end())
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << "\n";
}

template <typename T>
bool    is_descending(std::vector<T> vec, typename std::vector<T>::iterator end)
{
	typename std::vector<T>::iterator it = vec.begin();

    while (*(it + 1) != *end && *(it + 1) != *vec.end())
    {
		if (*it <= *(it + 1))
			return (false);
        it++;
    }
	return (true);
}

#endif