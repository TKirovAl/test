#include <iostream>

using namespace std;

int main()
{
    int number_one, number_two;
    cin >> number_one >> number_two; 

    if (number_one > number_two)
    {
        cout << number_one;
    }
    else
    {
        cout << number_two;
    }

    return 0;
}
