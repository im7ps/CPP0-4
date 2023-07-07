/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:50:17 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/13 19:51:15 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <string>

void replace_all(std::string& str, const std::string& old_str, const std::string& new_str) {

    std::string result;
    std::size_t start_pos = 0;
    if (old_str.empty()) {
        return;
    }

    std::size_t count = 0;
    std::size_t pos = 0;
    while ((pos = str.find(old_str, pos)) != std::string::npos) {
        ++count;
        pos += old_str.length();
    }
	
	std::size_t new_size;
	new_size = str.length() + (new_str.length() - old_str.length()) * count;
    result.reserve(new_size);

    while (start_pos < str.size()) {
        pos = str.find(old_str, start_pos);
        if (pos == std::string::npos) {
            result.append(str, start_pos, std::string::npos);
            break;
        }
        result.append(str, start_pos, pos - start_pos);
        result.append(new_str);
        start_pos = pos + old_str.size();
    }
    str.swap(result);
}