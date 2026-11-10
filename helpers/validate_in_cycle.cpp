#include "../headers/validate_in_cycle.hpp"
#include <iostream>

using namespace::std;

// малка функция за валидация на увод, ще въртим в цикъла докато не въведем правилно значение. За изход се натиска ^C
float validate_in_cycle() {
    float b;
    while (!(cin >> b)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //игнорираме всичко до края на строка.
    }
    return b;
}
