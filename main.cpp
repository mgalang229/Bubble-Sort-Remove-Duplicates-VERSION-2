#include <iostream>
using namespace std;

void bubbleSort(int a[], int size);
void removeDuplicates(int a[], int b[], int size);
int j = 1;
int main(){
    int arr[100], arr2[100];
    int n;
    
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter " << n << " numbers: ";
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    bubbleSort(arr,n);
    cout << "Bubble Sort: \n";
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }
    removeDuplicates(arr,arr2,n);
    cout << "\nDuplicates Removed: \n";
    for(int i = 1; i < j; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}
void bubbleSort(int a[], int size){
    int temp;
    for(int i = 1; i < size; i++){
        for(int j = 1; j < size-1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
void removeDuplicates(int a[], int b[], int size){
    for(int i = 1; i <= size; i++){
        if(a[i] != a[i+1]){
            b[j] = a[i];
            j++;
        }
    }
}
