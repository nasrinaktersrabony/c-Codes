//copy all elements of an array to another array

#include<iostream>
using namespace std;

int main()
{
    int array1[30], array2[30], n, i;
    
    
    cin >>n;
    
    cout << "Array1 ";
    //print array1[i]
    for(i=0; i<n; i++){
        cin >> array1[i] ;
    }
    
    // copying all the elements from array1 to array2
    
    for(i=0; i<n; i++){
        array2[i] = array1[i] ;
    }
    
    //print array2[i]
    cout << "Array2 ";
    for(i=0; i<n; i++){
        cout << array2[i] << " " ;
    }
    return 0;
}