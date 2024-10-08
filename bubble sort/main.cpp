
#include <iostream>
#include "./bubbleSort.hpp"
using namespace std;
int main (){
    int arr[] = {0,1,7,4,9,3};
    int n = sizeof(arr)/sizeof(arr[0]);//arr size
    
    
   
    
    bubbleSort(arr, n);
    
   
    return 0;
}

