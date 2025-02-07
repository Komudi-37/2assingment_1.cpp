//3) string manupulation
#include<iostream>
#include<cctype>
using namespace std;
int is_palindrome( string str){
    int left=0,right=str.length() -1;
    while(left<right){
        while(left<right && str[left]==' ')left++;
        while(left<right && str[right]==' ')right--;
        if(tolower(str[left])!=tolower(str[right])){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
int main(){
     string str;
     cout<<"enter a string:";
     getline(cin,str);
     if(is_palindrome(str)==1){
        cout<<"the string is a palindrome!"<<endl;
     }
     else{
        cout<<"the string is not a palindrome."<<endl;
     }
     return 0;
}
