//2)arrayoperation
#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int i;
    int arr[10];
    cout<<"enter the no. \n";
    for( int i=0;i<=9;i++)
    cin>>arr[i];
    int  n=sizeof(arr)/sizeof(arr[0]);
    cout<<"sorted array:"<<endl;
    sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        cout<<endl;
        if(n<2){
            cout<<"array must have at least two elements to find second largest and second smallest. \n";
        }
        else{
            cout<<"second smallest element: "<<arr[1]<<endl;
            cout<<"second largest element:  "<<arr[n-2]<<endl;
        }
    
    cout<<"the reverse of array is\n";
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    }
