//
//  main.cpp
//  LR-06_Shestakov_ET-112
//
//  Created by Alexander on 3/16/26.
//

#include <iostream>
using namespace std;

int main() {
    int n1 = 0, n2 = 0, nall = 0;
    
    cout << "Введите размер первого массива: ";
    cin >> n1;
    int arr1[n1];
    
    cout << "Введите размер второго массива: ";
    cin >> n2;
    int arr2[n2];
    
    cout << "Через Enter вводите элементы первого массива: ";
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    
    for(int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }
    
    cout << "\nЧерез Enter вводите элементы второго массива:" ;
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    
    for(int i = 0; i < n2; i++) {
        cout << arr2[i] << " ";
    }

    for (int i = 0; i < n1 - 1; i++) {
        for (int j = 0; j < n1 - i - 1; j++) {
            if (arr1[j] > arr1[j + 1]) {
                int swp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = swp;
            }
        }
    }
    
    for (int i = 0; i < n2 - 1; i++) {
        for (int j = 0; j < n2 - i - 1; j++) {
            if (arr2[j] > arr2[j + 1]) {
                int swp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = swp;
            }
        }
    }
    
    nall = n1 + n2;
    int arrall[n1+n2];
    
    for(int i = 0; i < n1; i++) {
        arrall[i] = arr1[i];
    }
    
    for(int i = 0; i < n2; i++) {
        arrall[n1 + i] = arr2[i];
    }
    
    cout << "\n";
    for(int i = 0; i < nall; i++) {
        cout << arrall[i] << " ";
    }
    
    return 0;
}
