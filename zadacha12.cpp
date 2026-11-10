#include <iostream>
#include "headers/validate_in_cycle_universal.hpp"
using namespace std;

// тука обаче ще направим малко по-интересно - няма до боравим с хиляда if/else 
// ще направя списък, ще го сортирам и ще изведа максимално, минимално (или са равни)
int main() {
    int tuple[3];
    cout << "Input first int: \n";
    tuple[0] = validate_in_cycle<int>();
    cout << "Input second int: \n";
    tuple[1] = validate_in_cycle<int>();
    cout << "Input third int: \n";
    tuple[2] = validate_in_cycle<int>();

    
    return 0;
}