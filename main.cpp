#include <iostream>
using namespace std;

int sum (int* p, int size)
{
    int sum;
    for(int i =0; i<size; i++)
    {
        sum += p[i];
    }
    return sum;
}


int main()
{
    int arr[4] = {1,2,3,4};
    int result =sum(arr, 4);
    return 0;
}