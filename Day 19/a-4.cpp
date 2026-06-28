#include <iostream>
using namespace std;

int main()
{
    int A[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int primary = 0, secondary = 0;

    for(int i=0;i<3;i++)
    {
        primary += A[i][i];
        secondary += A[i][3-i-1];
    }

    cout << "Primary Diagonal Sum = " << primary << endl;
    cout << "Secondary Diagonal Sum = " << secondary;

    return 0;
}