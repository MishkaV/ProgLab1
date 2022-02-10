/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_task.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbenjy <jbenjy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:41:31 by jbenjy            #+#    #+#             */
/*   Updated: 2022/02/10 16:53:24 by jbenjy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lab.hpp"

void    first_task()
{
    std::vector<int> vec = init_vector(28);
    std::vector<int>::iterator it = vec.begin();
    
    print_vector(vec);
    std::sort(vec.begin(), vec.end());
    while (it != vec.end())
    {
        if (*it >= 40)
        {
            std:: cout << "\nMinimal scrore of positive number is " << *it << "\n";
            break ;
        }
        it++;
    }
}