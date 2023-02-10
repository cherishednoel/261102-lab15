#include <iostream>
using namespace std;

template <typename T>
void swap(T arr[],int ind,int indmin) {
    T temp = arr[ind];
    arr[ind] = arr[indmin];
    arr[indmin] = temp;
}

template <typename T>
void selectionSort(T arr[],int N) {
    for(int i = 0; i < N; i++) {
        int indmin = i;
        for(int j = i + 1; j < N; j++) {
            if(arr[j] < arr[indmin]) {
                indmin = j;
            }
        }
        swap(arr,i,indmin);
    }
}

int main() {
    srand(time(0));
    int arr[10];
    for(int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    selectionSort(arr,10);
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}