#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=arr[n-1];
    for(int i=0;i<n-1;i++){
        cout<<arr.append(x);
    }

    return 0;
}
