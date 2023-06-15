#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter n :"<<" ";
    cin>>n;

    int i =1;

    while(i<=n){

        int j = i;
        while(j<=n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}