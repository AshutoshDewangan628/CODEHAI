#include <iostream>

using namespace std;

int main()
{
    int k,n;
    cin>>k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
            cin>>arr[i];

    }
    int a,b,c;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }

        }



    }
    for(int i=0;i<n;i++){
        a=arr[0]-k;
        b=arr[n-1]+k;
        c=b-a;
        cout<<c;
    }



    return 0;
}
