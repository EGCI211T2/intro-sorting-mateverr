#include <iostream>
#include <iomanip>
using namespace std;

void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort(int *a,int N)
{

    for ( int i=0; i<N-1; i++)
    {
        // for ascending order
        if (a[i] > a[i+1]) 
            swap(a[i], a[i+1]);
    }
    
}

void display(int *a,int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << setw(3) << a[i];
        // cout << endl;
    }
}


