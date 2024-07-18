#include <iostream>
using namespace std;
// write a program that rearranges the following data: 
//  13, 24,100, 9, 56
//   77, 34,89,98,65
//   47,58, 33, 28, 45
//   18, 14, 16, 52, 49


void SelectionSort (int *const, const int);
void Swap (int * const, int * const);



int main() {

const int arraySize = 20;
  int a [arraySize] = {13, 24,100, 9, 56,77,34,89,98,65,47,58, 33, 28, 45, 18, 14, 16, 52, 49 };

  SelectionSort (a, arraySize);

  cout << "Data in ascending order\n";
  
  
  for (int i = 0; i < arraySize; i++) 
    cout << "\n" << a[i];

  
}

void SelectionSort(int * const array, const int size) {

  
  int smallest;
  
  for (int i{0}; i<size; i++ ){

    smallest = i;

    for (int j =i+1 ; j < size ; j++) {
      
    if (array[j] < array[smallest]) {
      smallest = j;
    }
      
    }
    Swap (&array[ i ], & array [smallest] );
  }
}

void Swap (int * const p1, int * const p2){
  int temp =*p1;
  *p1=*p2;
  *p2=temp;
}