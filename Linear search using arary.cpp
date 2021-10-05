#include<iostream>
using namespace std;

int main()
{
    int i, value, pos=-1, num[] = {10, 2, 15, 20, 35, 46, 85};
    
    cin >> value;
    
    for(i=0; i<7; i++){
        if(value==num[i]){
            pos = i+1;
            break;
        }
        
    }
    if(pos == -1){
            cout << "Not found" << endl;
        }
        else{
            cout << "found " << value << endl;
        }
    
    
    return 0;
}