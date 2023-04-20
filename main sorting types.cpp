#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
template <class T>
void bubbleSort(T a[], long size) {
     long i, j;
     T x;
     for (i = 0; i < size; i++) { // i - номер прохода 
     for (j = size - 1; j > i; j--) { 
     // внутренний цикл прохода
     if (a[j - 1] > a[j]) {
     x = a[j - 1];
     a[j - 1] = a[j];
     a[j] = x;
     }
     }
     }
}
int BinarySearch (int A[], int Lb, int Ub, int Key) {
     int M;
        M = (Lb + Ub)/2;
         if (Key < A[M])
            Ub = M - 1;
         else if (Key > A[M])
            Lb = M + 1;
         else
            return M;
            
        if (Lb <= Ub) {BinarySearch (A, Lb, Ub, Key);}
         
         
         
        // if (Lb > Ub) return -1;
}

int main(){
 srand(time(NULL));
 const long SIZE=10;
 int ar[SIZE];
 int key,ind;
 
 // до сортировки 
 for(int i=0;i<SIZE;i++){
 ar[i]=rand()%100;
 cout<<ar[i]<<"\t";
 }
 cout<<"\n\n"; 
 /* 
 Вызовем алгоритм пузырьковой сортировки, 
 написанный нами ранее.
 Перед двоичным поиском данные нужно отсортировать.
 */
 bubbleSort(ar,10);
 
 // после сортировки 
 for(int i=0;i<SIZE;i++){
 cout<<ar[i]<<"\t";
 }
 
 cout<<"\n\n"; 
 cout<<"Enter any digit:"; 
 cin>>key; 
 ind=BinarySearch(ar,0,SIZE,key); //task1

 cout<<"Index - "<<ind<<"\t"; cout<<"\n\n";
 return 0;
}
