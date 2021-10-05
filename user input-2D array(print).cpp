//How to take input from user in printing 2D aaray

#include<iostream>
using namespace std;

int main()
{
    int i, j, A[3][4];
    
    cout << "Enter the elements " << endl;
    
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            cout << "A ["<<i<<"]["<<j<<"] = ";
            cin >> A[i][j];
        }
        cout << endl;
    }
    
    cout << "Arrays: ";
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    
    
    
    return 0;
}