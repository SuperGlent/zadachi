#include <iostream>
#include <vector>


using namespace std;

// Тука вече ще ползваме вектора, тъй като не можем да върнем масив като резултат на функция.
// Причина: масива, създаден вътре във функция, ще се размества в стек, което ще доведе 
// до негово унищожаване след изпълнение на функция и undefined behavior.
vector<int> create_vector() {
    int num;
    vector<int> differed_nums;
    cout << "Input your 6 value int in one string \n";
    cin >> num;
    for (int i=0; i<6; i++) {
        int n = num % 10; //Получаваме остатъка от делението, който всъщност е първото число отдясно
        differed_nums.push_back(n);
        num = num / 10; // Намаляме самото число с това което сме вече взели.
    }
    return differed_nums;
}


int sum(vector<int> n){
    int sum = 0; //Тук се оърках, не инициализирах веднага и получих боклук в паметта.
    for (int i : n) {
        sum += i;
    }
    return sum;
}

int main() {
    vector<int> vec = create_vector(); // Създаваме вектор от числа
    int sum_;
    sum_ = sum(vec); //сумираме го.
    cout << "Sum of your input differd integers is: \t" << sum_;
    return 0;
}