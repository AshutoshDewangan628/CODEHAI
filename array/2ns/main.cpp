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
    int mx=-1;
    int mn=99999;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
    }
    cout<<mx<<endl;
    cout<<mn<<endl;




    return 0;
}
