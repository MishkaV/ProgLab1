/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lab.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbenjy <jbenjy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:06:58 by jbenjy            #+#    #+#             */
/*   Updated: 2022/02/10 17:00:56 by jbenjy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LAB_HPP
# define LAB_HPP

# include <vector>
# include <iostream>
# include <assert.h>
# include <ctime>

std::vector<int>    init_vector(int capacity);
void                print_vector(std::vector<int> vec);

void                first_task();
void                second_task(); 

#endif