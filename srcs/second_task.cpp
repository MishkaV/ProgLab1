/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_task.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbenjy <jbenjy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:44:02 by jbenjy            #+#    #+#             */
/*   Updated: 2022/02/10 21:40:33 by jbenjy           ###   ########.fr       */
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

static std::vector<float>::iterator	find_first_max(std::vector<float> *vec)
{
	std::vector<float>::iterator max;
	std::vector<float>::iterator it = vec->begin();

	max = std::max_element(vec->begin(), vec->end());
	while (it != vec->end())
	{
		if (it == max)
			return (it);	
		it++;
	}
	return (it);
}

static std::vector<float>::iterator	find_last_min_pos(std::vector<float> *vec, int *isNormal)
{
	float last = -1;
	std::vector<float>::iterator it_last = vec->begin();
	std::vector<float>::iterator it = vec->begin();

	while (it != vec->end())
	{
		if (*it > 0)
		{
			if (last == -1)
			{
				last = *it;
				it_last = it;
			}
			else if (*it < last)
			{
				last = *it;
				it_last = it;
			}
		}
		it++;
	}
	
	if (last == -1)
	{
		std::cout << "\nThere is no positive numbers\n";	
		*isNormal = 0; 
	}
	return (it_last);
}

static void	find_arithmetic_mean(std::vector<float> *vec)
{
	int isNormal = 1;
	int count = 0;
	float sum = 0;

	if (is_descending(*vec, find_first_max(vec)))
	{
		std::vector<float>::iterator it = find_last_min_pos(vec, &isNormal);
		if (isNormal)
		{
			it++;
			while (it != vec->end())
			{
				count++;
				sum += *it;
				it++;
			}
			
			if (count)
				std::cout << "\nArithmetic mean is " << sum / (float)count << "\n";
		}
	}
	else
		std::cout << "\nElements before first max is not descending\n";
}

static void erase_in_range(std::vector<float> *vec, float a, float b)
{
	std::vector<float>::iterator it = vec->begin();
	std::vector<float>::iterator it_next = vec->begin();
	
	if (a >= b)
		return ;
		
	for (std::vector<float>::size_type i = 0; i < vec->size(); i++)
		if (*it >= a && *it <= b)
		{
			it_next = it + 1;
			vec->erase(it);
			it = it_next;
		}
		else
			it++;
}

static std::vector<float> sort_second_half(std::vector<float> vec)
{
	float num;
	
	for (unsigned long i = vec.size() / 2; i < vec.size() - 1; i++)
		for(unsigned long j = i + 1; j < vec.size(); j++)
			if (vec[i] <= vec[j])
			{
				num = vec[i];
				vec[i] = vec[j];
				vec[j] = num;	
			}
	return (vec);
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

	find_arithmetic_mean(&vec);
	
	std::cout << "\nErase in range\n";
	erase_in_range(&vec, A, B);
	print_vector(vec);

	std::cout << "\nSort second part\n";
	vec = sort_second_half(vec);
	print_vector(vec);
}