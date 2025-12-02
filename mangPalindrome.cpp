#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; 
    int *A = new int[n]; 
    for(int i = 0; i < n; i++) 
        cin >> A[i];
    if(n%2==1)
    {
        bool doixung=false;
        for(int i=0; i<(n/2); i++)
        {
            if(A[i]==A[n-1-i]) 
            {
                doixung=true;
            }
            else 
            {
                doixung=false;
            }
        }
        doixung ? cout<<"YES" : cout<<"NO";
    }
    else
    {
        bool doixung=false;
        for(int i=0; i<=(n/2); i++)
        {
            if(A[i]==A[n-1-i]) 
            {
                doixung=true;
            }
            else 
            {
                doixung=false;
            }
        }
        doixung ? cout<<"YES" : cout<<"NO";
    }
}