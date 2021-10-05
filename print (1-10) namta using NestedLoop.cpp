#include<iostream>
using namespace std;

int main()
{
    int i, x;
    
    for(x=1; x<=10; x++){
        
        for(i=1; i<=10; i++)
        {
            cout << x << " * " << i << " = " << x*i << endl;
        }
    }
    
    
    return 0;
}