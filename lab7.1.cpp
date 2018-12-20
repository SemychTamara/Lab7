#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
#define nMatr 6
#define mMatr 2

void Delete(double matr[][mMatr], int size)
{
  cout<<endl;
  cout<<"Matrix without paired rows:"<<endl;
  double newArr[100];
  int newNum = 0;
  for (int i = 1; i < size; i++)
  {
    if ( i % 2 != 0)
    {
      for (int j = 0; j < mMatr; j++)
      {
         newArr[newNum] = matr[i][j];
         newNum++;
      }
   }
  }
  for (int i = 0; i < newNum; i++){
    cout<<newArr[i]<<" ";
    if (i % 2 == 1) cout<<endl;
  }
}

void Delete(int arr[], int n)
{
  cout<<endl;
  cout<<"Array without elements between '0':"<<endl;
  int newArr[100];
  int newNum = 0;
  for (int i = 0; i < n; i++){
    if (arr[i+1] != 0)
    {
      newArr[newNum] = arr[i];
      newNum++;
    }
    else
      {
    if (i == 0)
    {
      newArr[newNum] = arr[i];
          newNum++;
    }
        else if (arr[i-1] != 0)
        {
          newArr[newNum] = arr[i];
          newNum++;
        }
  }
  }
  for (int i = 0; i < newNum; i++){
    cout<<newArr[i]<<" ";}
}

int  main()
{
  int n;
  int arr[100];
  cout<<"Array:"<<endl;
  cout<<"Enter amount of elements:"<<endl;
  cin>>n;
  cout<<"Enter array:"<<endl;
  for (int i = 0; i < n; i++)
  cin>>arr[i];

  double matrix[nMatr][mMatr];
  cout<<"Your matrix:"<<endl;
  for (int i = 0; i < nMatr; i++){
    for (int j = 0; j < mMatr; j++){
      matrix[i][j] = rand() % 10;
    }
  }
  for (int i = 0; i < nMatr; i++){
    for (int j = 0; j < mMatr; j++){
      cout<<matrix[i][j];
    cout<<" ";
    }
  cout<<endl;
  }
  Delete (arr, n);
  Delete(matrix, nMatr);

}
