//rotate matrix 90 degree
#include<iostream>
using namespace std;
int main()
{
    int p,q;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>p>>q;
    int arr[p][q];
    cout<<"Enter the elements in the array"<<endl;
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>arr[i][j];  
        }
    }
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<=q;j++)
        {
            cout<<arr[i][j]<<" ";   
        }
        cout<<endl;
    }
    cout<<"\nAfter Rotating: "<<endl;
    for(int j=0;j<q;j++)
    {
        for(int i=p-1;i>=0;i--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
