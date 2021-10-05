#include<iostream>
using namespace std;

int main()
{
    int t;
    
    cin >> t;
    
    while(t--){
        cout << t;
        int n,m,x,y;
        cin >> n >> m;
        x = (m*(m+1))/2;
        y = (n*(n-1))/2;
        
        cout << x-y << endl;
    }
}