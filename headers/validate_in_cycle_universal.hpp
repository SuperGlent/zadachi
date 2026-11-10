#pragma once
#include <iostream>
#include <limits>

// Добре е да избягваме "using namespace std;" в хедър файловете, 
// за да не замърсяваме глобалното пространство на други модули, които го включват.
// Затова тук пишем експлицитно std:: - доста хубава забележка)

template<typename T> 
T validate_in_cycle() {
    T value;
    while(!(std::cin >> value)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return value;
}