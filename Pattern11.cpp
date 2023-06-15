#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter n :"<<" ";
    cin>>n;

    int i = 1;

    while(i<=n){
        int j = 1;

        while(j<=i){
            cout<<i-j+1<<" ";
            j++;

        }
        cout<<endl;
        i++;
        
    }

/*
int n ;
    cout<<"Enter n:"<<" ";
    cin>>n;

    int value;

    int i = 1;

    while(i<=n){
        int j = 1;
        value = i;

        while(j<=i){
            cout<< value <<" ";
            value = value -1;
            j++;
        }
        cout<<endl;
        i++;

    
    }
*/
    
}