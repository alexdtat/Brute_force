#include <iostream>
#include <cmath>
using namespace std;

/*Напишите функцию вычисляющую праймориал числа. Программа должна работать не более чем за O(n*log log n) шагов.
Вики про праймориал*/


int main()
{
    int primorial = 1;
    int n = 0;
    int i = 2;
    cin >> n;
    bool* nat_numbers = new bool [3*n+1];
    for (int k = 0; k < 3*n; k++){
        nat_numbers[k] = 0;
    };
    nat_numbers[0] = 1;
    nat_numbers[1] = 1;
    while (i <= n){
        if (!nat_numbers[i]){
                primorial *= i;
                for (int j = i; i*j < 3*n; j++){
                    nat_numbers[i*j] = 1;
                }
        }
        i++;
    };
    cout << primorial;
    return 0;
}
