/*�������� ����������� ���������, ��������� ��� ����� ����� n ���������� ������������. � ������������ ��������, ������ ������� - �����������*/

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

/*������� �������� �����������, �.�. �� ������������� ���� 1/(10^n) ��������� n-������� �����, ������� �� ������� �������� ������������ ���������,
������ ����������� ���������� � ��� ������� => ������ ������� ���� �� �����. ������������ ������� ���������� � �������.*/
