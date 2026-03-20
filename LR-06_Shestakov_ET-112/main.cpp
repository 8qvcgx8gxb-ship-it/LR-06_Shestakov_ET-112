//
//  main.cpp
//  LR-06_Shestakov_ET-112
//
//  Created by Alexander on 3/16/26.
//

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
