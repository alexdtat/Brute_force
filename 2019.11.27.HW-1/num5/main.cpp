#include <iostream>
#include <cmath>
using namespace std;

/*Напишите программу, находящую все простые числа Ченя не превосходящие n. Программа должна работать не более чем за O(n*log log n) шагов.*/

int main()
{
    int n = 0;
    int p = 2;
    cin >> n;
    short int* nat_numbers = new short int [n+2];
    for (int k = 0; k < n + 2; k++){
        nat_numbers[k] = 0;
    };
    nat_numbers[0] = 1;
    nat_numbers[1] = 1;
    for (int i = 2; i < n + 2; i++){
        if (nat_numbers[i] == 0){
            for (int j = 2; i*j < n+2; j++){
                nat_numbers[i*j] = j;
            }
        }
    };

    while (p <= n + 2){
        if ((nat_numbers[p] != 0) && (nat_numbers[p-2] == 0) && (nat_numbers[p/nat_numbers[p]] == 0)){
            cout << p - 2 << ' ';
        };

        if ((nat_numbers[p] == 0) && (nat_numbers[p-2] == 0)){
            cout << p - 2 << ' ';
        };
        p++;
    }
    return 0;
}
