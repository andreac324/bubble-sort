//
//  bubbleSort.cpp
//  bubble sort
//
//  Created by Andrea d Cazares on 10/7/24.
//
#include <iostream>
#include "./bubbleSort.hpp"

void bubbleSort(int arr[],int n){
    //before
    std::cout<< "before pass"<<endl;
    for (int i=0; i<n;i++){
        
        std::cout << arr[i]<<" " ;
    }
    std::cout<<std::endl;
    for (int i= 0; i< n -1;i++){
        bool swapped = false;
        for (int j = 0; j<n -i -1;j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr [j] = arr[j+1];
                arr [j+1] = temp;
                swapped = true;
            }
        }
        std::cout<< "after pass "<<":"<<std::endl;//prints passes
        for (int l=0; l<n; l++){
            std::cout<< arr[l]<< " ";
        }
        std:: cout << std:: endl;
        if (!swapped){
            std:: cout<< "array is sorted"<<std::endl;
            break; //already sorted
        }
    }
}
