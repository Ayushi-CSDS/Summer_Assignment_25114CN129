#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {1,2,2,3,3,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int> freq;

    for(int i=0;i<n;i++)
        freq[arr[i]]++;

    int maxFreq = 0;
    int element = arr[0];

    for(auto x : freq)
    {
        if(x.second > maxFreq)
        {
            maxFreq = x.second;
            element = x.first;
        }
    }

    cout<<"Maximum Frequency Element = "<<element<<endl;
    cout<<"Frequency = "<<maxFreq;

    return 0;
}