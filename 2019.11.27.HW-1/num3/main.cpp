#include <iostream>
#include <cmath>
using namespace std;

/*Напишите программу находящую первые n составных чисел.
Программа должна работать не более чем за O(n*log log n) шагов.*/


int main()
{
    int n = 0;
    int counter = 0;
    int i = 2;
    cin >> n;
    bool* nat_numbers = new bool [2*n+3];
    for (int k = 2; k < 2*n+2; k++){
        nat_numbers[k] = 0;
    };
    nat_numbers[0] = 1;
    nat_numbers[1] = 1;
    while (counter < n){
        if (!nat_numbers[i]){
            for (int j = i; i*j < 2*n+2; j++){
                nat_numbers[i*j] = 1;
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
