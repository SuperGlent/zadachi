#include <iostream>
#include "headers/validate_in_cycle_universal.hpp"


// Това няма да го правя по-сложно) Даже и двете задачи по цена на една.
using namespace std;

int main() {
    int first_int, second_int;
    cout << "Input first int: \n";
    first_int = validate_in_cycle<int>();
    cout << "Input second int: \n";
    second_int = validate_in_cycle<int>();
    if (first_int < second_int) {
        cout << "First integer: " << first_int << " is smaller than second: " << second_int;
    }
    else if (first_int > second_int) {
        cout << "First integer: " << first_int << " is bigger than second: " << second_int;
    }
    else {
        cout << "First integer: " << first_int << " is equal to the second: " << second_int;
    }
    return 0;
}