#include <assert.h>

#define SIZE 3  

_BitInt(100000) arr[SIZE];  

void selectionSort() {
    _BitInt(100000) i, j, minIdx, temp;
    
    for (i = 0; i < SIZE - 1; i++) {
        minIdx = i;
        
        for (j = i + 1; j < SIZE; j++) {
            if (arr[j] > arr[minIdx]) {  //problem
                minIdx = j;
            }
        }
        
        
        temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    _BitInt(100000) i;
    
   
    arr[0] = 99999999;
    arr[1] = 88888888;
    arr[2] = 77777777;
    
    selectionSort();
    
 
    for (i = 0; i < SIZE - 1; i++) {
        assert(arr[i] <= arr[i + 1]);  
    }
    
    return 0;
}
