/*Напишите эффективную программу, находящую все числа длины n являющиеся палиндромами. В комментариях напишите, почему перебор - эффективный*/

#include <iostream>

using namespace std;

int f (int a, int b){
    if (!b) return 1;
    int bufa = a;
    while (b > 1){
        if (b%2 == 0){
            b = b >> 1;
            a *= bufa;
        }
        else{
            b--;
            a *= bufa;
        };
    };
    return a;
}

int main()
{
    int n;
    cin >> n;
    int numsize1 = n - (n/2);
    int numsize2 = n/2;

    for (int j = f (10, numsize1-1); j < f (10, numsize1); j++){
        cout << j;
        for (int i = numsize1-numsize2; i < numsize1; i++){
            cout << (j/f(10, i)) % 10;
        };
        cout << '\n';
    };
    return 0;
}

/*перебор является эффективным, т.к. мы рассматриваем лишь 1/(10^n) возможных n-значных чисел, каждому из которых заведомо соотвествует палиндром,
причём соотвествие однозначно в обе стороны => больше случаев быть не может. Используется быстрое возведение в степень.*/
