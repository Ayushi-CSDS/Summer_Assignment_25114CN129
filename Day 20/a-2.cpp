#include <iostream>
using namespace std;

int main()
{
    int A[3][3] = {
        {1,2,3},
        {2,4,5},
        {3,5,6}
    };

    bool symmetric = true;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(A[i][j] != A[j][i])
            {
                symmetric = false;
                break;
            }
        }
    }

    if(symmetric)
        cout << "Matrix is Symmetric";
    else
        cout << "Matrix is Not Symmetric";

    return 0;
}