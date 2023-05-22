/*
Nama: Edsel Rivenda Saputra
NIM: A11.2022.14305
Kelompok: 4207
Matkul: Algoritma Dan Pemrograman
*/

#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {

  for (int step = 0; step < size; ++step) {
      
    for (int i = 0; i < size - step; ++i) {

      if (array[i] > array[i + 1]) {

        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}


void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {1 ,5, 3, 5, 4};
  int arr[] = {3 ,2, 3, 1, 4};
  
  int size = sizeof(data) / sizeof(data[0]);
  int sizear = sizeof(arr) / sizeof(arr[0]);
  
  bubbleSort(data, size);
  insertionSort(arr, sizear);
  
  cout << "Sorted Array in Ascending Order:\n";  
  cout << "This one's Bubble Sort: \n"; 
  printArray(data, size);
  cout << "This one's Insertion Sort: \n";
  printArray(arr, sizear);
}