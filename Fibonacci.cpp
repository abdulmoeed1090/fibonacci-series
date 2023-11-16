// This is a simple c++ program to print fibonacci series till the entered number
#include <iostream>
using namespace std;

// fibonacci series printing function
void fibonacci(int number, int first = 0, int second = 1, int next = 0)
{
    for (int i = 1; i <= number; i++)
    {
        cout << first << endl;
        next = first + second;
        first = second;
        second = next;
    }
}

// main function
int main()
{
    int number, first = 0, second = 1, next = 0;
    cout << "Enter the number of terms of fibonacci series you want to display:";
    cin >> number;
    fibonacci(number);
}