#include <iostream>

void sort(int arr[], int size);

int main(){
    int numbers[] = {8,1,4,2,6,3,9,5,7};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    sort(numbers,size);
    for (int number : numbers){
        std::cout << number;
    }

    return 0;
}

void sort(int arr[],int size){
    int temp;
    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}