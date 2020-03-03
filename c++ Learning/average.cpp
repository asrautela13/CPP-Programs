#include <iostream>
using std::cin;
using std::cout;
using std::endl;

typedef double numbers;

int main()
{
    const int count{3};
    numbers num1{}, num2{}, num3{};
    cout << "Enter the 3 numbers: " << endl;
    cin >> num1 >> num2 >> num3;
    cout << "Your numbers are: " << num1 << "," << num2 << "," << num3 << endl;
    double total = (num1 + num2 + num3);
    double average{};
    average = static_cast<double>(total) / count;
    cout << endl;
    cout << "========================================" << endl;
    cout << "Average of three numbers will be: " << average << endl;
    return 0;
}
