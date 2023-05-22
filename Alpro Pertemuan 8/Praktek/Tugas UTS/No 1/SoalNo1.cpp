/*
Nama: Edsel Rivenda Saputra
NIM: A11.2022.14305
Kelompok: 4207
Matkul: Algoritma Dan Pemrograman
*/

#include <iostream>
using namespace std;

bool isOdd(int num);
void minEven(int arr[], int len);
void printArr(int arr[], int len);

int main()
{
    int arr[] = {6, 7, 4, 3, 2};

    int len = sizeof(arr) / sizeof(int);

    printArr(arr, len);
    minEven(arr, len);

    return 0;
}

bool isOdd(int num)
{
    return num % 2 != 0;
}

void minEven(int arr[], int len)
{
    int minIndex = 0;

    for (int i = 0; i < len; i++)
    {
        if (!isOdd(arr[i]) && arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }

    cout << "Angka Genap Terkecil : " << arr[minIndex] << endl;
    cout << "Berada di index ke- : " << minIndex << endl;
}

void printArr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}   