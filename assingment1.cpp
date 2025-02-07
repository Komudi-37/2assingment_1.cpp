//number manupulation and prime no. 
#include<iostream>
using namespace std;
int prime(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void findfactor(int num){
    cout << "Factors of " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0)
            cout << i << " ";
    }
    cout << endl;
}

int next_prime(int num)
{
    num++;
    while(!prime(num))
    {
        num++;
    }
    return num;
}
int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    if(prime(n))
        {
            cout<<"It is a prime number"<<endl;
            cout<<next_prime(n)<<endl;
        }
        else
        {
            cout<<"It is not a prime number"<<endl;
            findfactor(n);
        }
        return 0;
}
