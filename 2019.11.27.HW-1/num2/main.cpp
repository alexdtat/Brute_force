/*�������� ����������� ���������, ��������� ��� ����� ����� n ���������� ������������. � ������������ ��������, ������ ������� - �����������*/

#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int numsize1 = n - (n/2);
    int numsize2 = n/2;

    for (int j = pow (10.0, numsize1-1); j < pow (10.0, numsize1); j++){
        cout << j;
        for (int i = numsize1-numsize2; i < numsize1; i++){
            cout << int(fmod((j/pow(10.0, i)), 10.0));
        };
        cout << '\n';
    };
    return 0;
}

/*������� �������� �����������, �.�. �� ������������� ���� 1/(10^n) ��������� n-������� �����, ������� �� ������� �������� ������������ ���������,
������ ����������� ���������� � ��� ������� => ������ ������� ���� �� �����.*/
