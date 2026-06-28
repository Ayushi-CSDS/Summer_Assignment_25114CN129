#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int arr1[] = {1,2,3,4};
    int arr2[] = {2,4,6};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    unordered_set<int> s;

    for(int i=0;i<n1;i++)
        s.insert(arr1[i]);

    for(int i=0;i<n2;i++)
    {
        if(s.count(arr2[i]))
            cout<<arr2[i]<<" ";
    }

    return 0;
}