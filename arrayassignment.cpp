#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[]={1,2,3,4,5};
    int max;
    max=arr[0];
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<max;   
}
