/*/ Тука ще е интересно, тъй като ще трябва да променя съществуващ код, 
ще го импортирам като zadacha2.hpp - header, който ще има само интерфейс 
и ще го ползват и двата файла (с различни функции). Само защото
ще е интересен опит. Няма разбира се оптимално рещение и малко повече от това което искат
от мен.
/*/

#include <iostream>
#include "headers/calc.hpp"

using namespace::std;

int calc(int a, float b) {
    //определям ги като float, да не загубя реална част.
    float sum = {a + b}; 
    float dif = {a - b};
    float prod = {a*b};

    cout << "A: " << a << "\tB:" << b << "\n";
    cout << "Sum: " << sum << "\n";
    cout << "Difference: " << dif << "\n";
    cout << "Product: " << prod << "\n";
    return 0;
}


int main() {

    int a;
    float b;

    cout << "Input first value int: \n";
    cin >> a;
    cout << "Input second value float: \n";
    cin >> b;

    calc(a, b);

}

