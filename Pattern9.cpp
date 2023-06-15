#include<iostream>

using namespace std;

int main()
{

    int n;
    cout<<"Enter n :"<<" ";
    cin>>n;
   
    int count = 1;

    int i = 1;
    while(i<=n){

        int j = 1;
        while(j<=i){
            cout<<count<<" ";
            count = count +1;
            j++;
        }
        cout<<endl;
        i++;

    }

    return 0 ;

    
}