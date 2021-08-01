#include <iostream>

using namespace std;

void reversearry(int arr[],int start, int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

}

int main()
{
    int arr[]={4,3,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr, n);
    reversearry(arr,0,n-1);
    print(arr,n);
    return 0;
}
