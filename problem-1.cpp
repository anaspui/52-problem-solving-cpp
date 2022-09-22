#include<iostream>
using namespace std;

int main(){
    int T;
    cout<<"How many number do you want to check? "<<endl;
    cin>> T;
    int i = 1;
    while(i <= T){
        int num;
        cout<<"Enter a Number: ";
        cin>> num;
        if(num % 2 == 0) cout<<"even"<<endl;
        else cout<<"odd"<<endl;
    i++;
    }
    //check
}
