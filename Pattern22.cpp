#include<iostream>

using namespace std;

int main(){

    int n ;
    cout<<"Enter n:"<<" ";
    cin>>n;

    int i = 1;

    while(i<=n){
        //Space print karo

        int space = i - 1;
        while(space){
            cout<<" ";
            space--;
        }

        //Star print karo

        int j = n;

        while(i<=j){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;

    }

    return 0;

}