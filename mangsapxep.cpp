#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; 
    int *A = new int[n]; 
    for(int i = 0; i < n; i++) 
        cin >> A[i];
    for(int i=0; i<n-1; i++)
    {
        if(A[i]>A[i+1])
        {
            int temp;
            temp = A[i];
            A[i] = A[i+1];
            A[i+1] = temp;
            i=-1;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<< A[i]<<"\t";
    }
}