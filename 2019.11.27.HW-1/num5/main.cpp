#include <iostream>
#include <cmath>
using namespace std;

/*Напишите программу, находящую все простые числа Ченя не превосходящие n. Программа должна работать не более чем за O(n*log log n) шагов.*/

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
    int p = 2;
    cin >> n;
    short int* nat_numbers = new short int [n*n+1];
    for (int k = 2; k < n*n; k++){
        nat_numbers[k] = 0;
    };
    nat_numbers[0] = 1;
    nat_numbers[1] = 1;
    for (int i = 2; i < n*n; i++){
        if (nat_numbers[i] == 0){
            if (is_prime_number(i)){
                for (int j = 2; i*j < 4*n; j++){
                    if (is_prime_number(j)) nat_numbers[i*j] = -1;
                    else nat_numbers [i*j] = 1;
                }
            }
        }
    };
    for (int k = 0; k < n*n; k++){
        cout << k << '=' << nat_numbers[k] << '\n';
}
    while (counter <= n){
        if ((nat_numbers[p] == -1) && (nat_numbers[p-2] == 0)){
            cout << p - 2 << ' ';
            counter++;
        };

        if ((nat_numbers[p] == 0) && (nat_numbers[p-2] == 0) && (n-counter >= 0)){
            cout << p - 2 << ' ';
            counter++;
        };
        p++;
    }
    return 0;
}
