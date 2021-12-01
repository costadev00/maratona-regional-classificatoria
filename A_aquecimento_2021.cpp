#include <iostream>
using namespace std;

int main()
{
    int A, C;
    cin >> C >> A;

    if (A % (C - 1) == 0)
    {
        cout << A / (C - 1) << endl;
    }
    else
    {
        cout << A / (C - 1) + 1 << endl;
    }
}