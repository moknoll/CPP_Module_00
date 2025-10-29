/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:49:58 by mknoll            #+#    #+#             */
/*   Updated: 2025/10/29 17:04:42 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedIsForLosers.hpp"

void createTestFile(const std::string &filename, const std::string &content)
{
    std::ofstream out(filename.c_str());
    if (!out)
    {
        std::cerr << RED << "Error creating test file: " << filename << RESET << std::endl;
        return;
    }
    out << content;
    out.close();
}

int main()
{
    // Test 1
    createTestFile("test1.txt", "Hello world!");
    sedIsForLosers("test1.txt", "world", "there");
    std::cout << "[Test 1] Should produce: Hello there!\n";

    // Test 2 
    createTestFile("test2.txt", "foo bar foo bar foo");
    sedIsForLosers("test2.txt", "foo", "baz");
    std::cout << "[Test 2] Should produce: baz bar baz bar baz\n";

    // Test 3 
    createTestFile("test3.txt", "abc\n123\nabc\n456");
    sedIsForLosers("test3.txt", "abc", "XYZ");
    std::cout << "[Test 3] Should produce:\nXYZ\n123\nXYZ\n456\n";

    // Test 4
    createTestFile("test4.txt", "this text does not change");
    sedIsForLosers("test4.txt", "foo", "bar");
    std::cout << "[Test 4] Should remain identical\n";

    // Test 5 
    createTestFile("test5.txt", "no replacement should happen");
	std::cout << "[Test 5] Should print an error about empty s1\n";
    sedIsForLosers("test5.txt", "", "xxx");
    

    return 0;
}
