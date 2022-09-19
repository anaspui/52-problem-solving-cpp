#include<iostream>
using namespace std;
int main(){
    int T;
    cout<<"How many number do you want to check? "<<endl;
    cin>> T;
    int i = 1;
    while(i <= T){
        string inputNum;
        cout<<"Enter a inputNumber: ";
        cin>> inputNum;
        int lastDig = inputNum[inputNum.length() - 1];
        if(lastDig % 2 == 0) cout<<"even"<<endl;
        else cout<<"odd"<<endl;
    i++;
    }
}