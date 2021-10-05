//How to take input from user in printing 2D aaray

#include<iostream>
using namespace std;

int main()
{
    int i, j, A[3][4], B[3][4];
    
    cout << "Enter the elements " << endl;
    //scanning A matrix
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            cout << "A["<<i<<"]["<<j<<"] = ";
            cin >> A[i][j];
        }
        cout << endl;
    }
    //printing A matrix
    cout << "A =";
    for(i=0; i<3; i++){
        cout << "\t";
        for(j=0; j<4; j++){
            
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    
    //scanning B matrix
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            cout << "B["<<i<<"]["<<j<<"] = ";
            cin >> B[i][j];
        }
        cout << endl;
    }
    //printing B matrix
    cout << "B =";
    for(i=0; i<3; i++){
        cout << "\t";
        for(j=0; j<4; j++){
            
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    
    
    
    return 0;
}