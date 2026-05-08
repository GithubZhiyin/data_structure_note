#include <iostream>
using namespace std;


int array_1{
  int arr1[5];
  int arr2[5] = {1, 2, 3, 4, 5};
  int arr3[] = {1, 2, 3};
  int arr4[5] = {0};

  int matrix[3][4];
  return 0; 
}


int dyna_array{
  int size = 10;
  int * dynamicArr = new int[size];
  delete[] dynamicArr;

  int rows = 3, cols = 4;
  int** dynamicMatrix = new int*[rows];
  for (int i = 0; i < rows; i++){
    dynamicMatrix[i] = new int*[rows];
    
  }
  
}


