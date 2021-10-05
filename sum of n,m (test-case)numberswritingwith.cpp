#include<iostream>
using namespace std;

int main()
{
    int z, t;
    cin >> t;
    for(z=1; z<=t; z++){
        int n, m, x, y;
        cin >> n >> m;
        
        x = (m* (m+1))/2;
        y = (n* (n-1))/2;
        
        cout  << "Case " << z << ": " << x-y << endl;
    }
    
    return 0;
}