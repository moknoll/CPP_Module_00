/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:51:55 by mknoll            #+#    #+#             */
/*   Updated: 2025/12/08 11:18:24 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <vector>
#include <list>

class PMergeMe
{
	private:
		//both Containers for Performance comparison
		std::vector<int> vecContainer;
		std::list<int> listContainer;
	public:
		PMergeMe();
		~PMergeMe();
		PMergeMe(const PMergeMe &other);
		PMergeMe &operator=(const PMergeMe &other);

		void fillContainers(int argc, char *argv[]);
		void printBeforeSort();
		void sortAndPrint();
};

int check_args(int argc, char *argv[]);
#endif