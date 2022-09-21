#include <iostream>
using namespace std;

int main()
{
    for (int i = 1000; i > 0; i--)
    {
        for (int j = 0; j < 5; j++)
        {
            if(j == 5){
                j = 0;
                i++;
                cout << i-- << "\t" << i-- << "\t" << i-- << "\t" << i-- << "\t" << i-- << "\t" << endl;
            }
            else cout << i-- << "\t" << i-- << "\t" << i-- << "\t" << i-- << "\t" << i-- << "\t" << endl;
        }
    }
}