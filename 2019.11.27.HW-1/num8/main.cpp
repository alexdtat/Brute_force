#include <iostream>
#include <cmath>
using namespace std;

/*Напишите функцию вычисляющую праймориал числа. Программа должна работать не более чем за O(n*log log n) шагов.
Вики про праймориал*/


bool is_prime_number (int num){
    if (num == 1) return 0;
    for (int i = 2; i <= sqrt(num); i++){
        if (!(num % i)) return 0;
    };
    return 1;
}

int main()
{
    int primorial = 1;
    int n = 0;
    int i = 2;
    cin >> n;
    bool* nat_numbers = new bool [3*n+1];
    for (int k = 2; k < 3*n; k++){
        nat_numbers[k] = 0;
    };
    while (i <= n){
        if (!nat_numbers[i]){
            if (is_prime_number(i)){
                primorial *= i;
                for (int j = i; i*j < 3*n; j++){
                    nat_numbers[i*j] = 1;
                }
            }
        }
        i++;
    };
    cout << primorial;
    return 0;
}
