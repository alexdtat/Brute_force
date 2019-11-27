#include <iostream>
#include <cmath>
using namespace std;

/*Напишите программу находящую первые n составных чисел.
Программа должна работать не более чем за O(n*log log n) шагов.*/

bool is_prime_number (int num){
    if (num == 1) return 0;
    for (int i = 2; i <= sqrt(num); i++){
        if (!(num % i)) return 0;
    };
    return 1;
}

int main()
{
    int n = 0;
    int counter = 0;
    int i = 2;
    cin >> n;
    bool* nat_numbers = new bool [3*n+1];
    for (int k = 2; k < 3*n; k++){
        nat_numbers[k] = 0;
    };
    while (counter < n){
        if (!nat_numbers[i]){
            if (is_prime_number(i)){
                for (int j = i; i*j < 3*n; j++){
                    nat_numbers[i*j] = 1;
                }
            }
        }
        else{
            cout << i << ' ';
            counter++;
        };
        i++;
    };
    return 0;
}
