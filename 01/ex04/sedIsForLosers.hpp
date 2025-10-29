/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sedIsForLosers.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:49:53 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/29 16:29:01 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDISFORLOSERS_HPP
#define SEDISFORLOSERS_HPP

#include <iostream>
#include <string>
#include <fstream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"

void sedIsForLosers(std::string filename, std::string s1, std::string s2);

#endif