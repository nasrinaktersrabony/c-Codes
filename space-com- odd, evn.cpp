#include <iostream>
using namespace std;
int main()
{
    int i, n, even[101];
    cin >> n;
    for(i=0; i < n; i++){
        even[i] = 0;
    }
    for(i=0; i < n; i +=2){
        even[i] = 1;
    }
    if(even[n]){
        cout << "even";
    }
    else{
        cout << "odd";
    }
    return 0;
}
