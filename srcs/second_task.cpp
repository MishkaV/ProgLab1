/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_task.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbenjy <jbenjy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:44:02 by jbenjy            #+#    #+#             */
/*   Updated: 2022/02/10 18:57:30 by jbenjy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lab.hpp"

static void	find_int_and_div(std::vector<float> *vec)
{
	std::vector<float>::iterator it = vec->begin();
	
	while (it != vec->end())
	{
		if (*it == (int)(*it))
			*it /= 2;
		it++;
	}
}

static void	find_right_neg(std::vector<float> vec)
{
	int pos = -1;
	int count = 1;
	std::vector<float>::iterator it = vec.begin();
	   
	while (it != vec.end())
	{
		if (*it < 0)
			pos = count;
		it++;
		count++;
	}

	if (pos == -1)
		std::cout << "\nThere is no negative numbers\n";
	else
		std::cout << "\nPosition of right negative number is " << pos << "\n";
}

static void	insert_zero(std::vector<float> *vec)
{
	std::vector<float>::iterator it = vec->begin();
	std::vector<float>::iterator it_next;

	for (std::vector<float>::size_type i = 0; i < vec->size(); i++)
		if (*it == 0)
		{
			it_next = it + 1;
			vec->erase(it);
			vec->insert(vec->begin(), 0);
			it = it_next;
		}
		else
			it++;
}

void    second_task()
{
	std::vector<float> vec = init_vector_float(N);
	print_vector(vec);
	
	std::cout << "\nDiv 2 all int numbers\n";
	find_int_and_div(&vec);
	std::cout << "After processing:\n";
	print_vector(vec);

	find_right_neg(vec);

	std::cout << "\nInsert zero at the begining\n";
	insert_zero(&vec);
	print_vector(vec);
}