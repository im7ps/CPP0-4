/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 10:29:00 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/13 20:04:25 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Replace.hpp"

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>\n";
        return 1;
    }

    const std::string filename = argv[1];
    const std::string s1 = argv[2];
    const std::string s2 = argv[3];

    std::ifstream infile(filename.c_str());
    if (!infile.is_open()) {
        std::cerr << "Error: could not open file '" << filename << "'\n";
        return 1;
    }

	const std::string output_filename = filename + ".replace";
    std::ofstream outfile(output_filename.c_str());
    if (!outfile.is_open()) {
        std::cerr << "Error: could not open file '" << output_filename << "'\n";
        return 1;
    }

    std::string line;
    while (std::getline(infile, line)) {
        replace_all(line, s1, s2);
        outfile << line << '\n';
    }

    std::cout << "File written to '" << output_filename << "'\n";
    return 0;
}

/*//file exist equal lenght
const std::string filename = "file.txt";
const std::string s1 = "fizz";
const std::string s2 = "buzz"; 

//filename NULL
const std::string filename = "";
const std::string s1 = "fizz";
const std::string s2 = "buzz";

//file does not exist
const std::string filename = "filedonotexist.txt";
const std::string s1 = "fizz";
const std::string s2 = "buzz";

//file exist s2 shorter
const std::string filename = "file.txt";
const std::string s1 = "fizz";
const std::string s2 = "S";*/

/*//file exist s2 longer
const std::string filename = "file.txt";
const std::string s1 = "fizz";
const std::string s2 = "AAAAAAAAAAAAAA";

//file exist s1 has no occurrences
const std::string filename = "file.txt";
const std::string s1 = "aaaaa";
const std::string s2 = "AAAAA";*/
