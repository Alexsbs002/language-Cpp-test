/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

    //  1 Линейный перебор = самый простой обычный цикл
    
    //  2 сортировка выбором
    // 
    // template <class T>
    // void selectSort(T a[], long size){ 
    //  long i, j, k;
    //  T x;
    //  // i - номер текущего шага
    //  for(i=0; i<size; i++) { 
    //  k=i;
    //  x=a[i];
    //  // цикл выбора наименьшего элемента 
    //  for(j=i+1; j<size; j++)
    //  if(a[j]<x){
    //  k=j;
    //  x=a[j];
    //  // k - индекс наименьшего элемента
    //  }
    //  if(k!=i){
    //  a[k]=a[i];
    //  a[i]=x;
    //  // меняем местами наименьший с a[i]
    //  }
    //  }
    // }
    // int main(){
    //  srand(time(NULL));
    //  const long SIZE=10;
    //  int ar[SIZE];
    //  // до сортировки 
    //  for(int i=0; i<SIZE; i++){
    //  ar[i]=rand()%100;
    //  cout<<ar[i]<<"\t";
    //  }
    //  cout<<"\n\n";
    //  selectSort(ar,SIZE);
    //  // после сортировки
    //  for(int i=0; i<SIZE; i++){
    //  cout<<ar[i]<<"\t";
    //  }
    //  cout<<"\n\n";
    //  return 0;
    // }

    //  3 сортировка пузырьком = соседние эл-ты, просто. надежно. но долго. можно модифицировать.
    // template <class T>
    // void bubbleSort(T a[], long size){ 
    //  long i, j;
    //  T x;
    //  for(i=0; i<size; i++){ // i - номер прохода 
    //      for(j=size-1; j>i; j--){ // внутренний цикл
    //          // прохода
    //          if(a[j-1]>a[j]){
    //              x=a[j-1];
    //              a[j-1]=a[j];
    //              a[j]=x;
    //          }
    //      }
    //  }
    // }
    //     int main(){
    //  srand(time(NULL));
    //  const long SIZE=10;
    //  int ar[SIZE];
    //  // до сортировки
    //  for(int i=0; i<SIZE; i++){
    //  ar[i] = rand()%100;
    //  cout<<ar[i]<<"\t";
    //  }
    //  cout<<"\n\n";
    //  bubbleSort(ar, SIZE);
    //  // после сортировки 
    //  for(int i=0; i<SIZE; i++){
    //  cout<<ar[i]<<"\t";
    //  }
    //  cout<<"\n\n";
    //  return 0;
    // }
    //  4 сортировка вставками = две части, отсортированная и нет, в первую вставляем по элементу из второй, самый быстрый
    
    // task 111
    
    //function task 111
    template <class T>//function task 111
    void bubbleSort(T a[], long size, int key=1){ 
     long i, j;
     T x;
     
     if(key==1){
             for(i=0; i<size; i++){ // i - номер прохода 
             for(j=size-1; j>i; j--){ // внутренний цикл
                 // прохода
                 if(a[j-1]>a[j]){
                     x=a[j-1];
                     a[j-1]=a[j];
                     a[j]=x;
                 }
             }
         }
     }
     if(key==0){
             for(i=0; i<size; i++){ // i - номер прохода 
             for(j=size-1; j>i; j--){ // внутренний цикл
                 // прохода
                 if(a[j-1]<a[j]){
                     x=a[j-1];
                     a[j-1]=a[j];
                     a[j]=x;
                 }
             }
         }
     }
     
     if(key!=0&&key!=1) cout<<"\nKey error 505 out of range";

    }//function task 111
    //function task 111
    
    //function task 2
    template <class T>//function task 2
    void task2Sort(T a[], long size){//function task 2
    long i, j;
    T x;
    
    int min=0,leftBorder,rightBorder;
    for(int i = 0;i<size;i++){
        if(a[i]<min){
            leftBorder=i;break;
        }
    }
    for(int i = size-1;i>0;i--){
        if(a[i]<min){
            rightBorder=i;break;
        }
    }
    cout<<endl<<rightBorder<<endl<<leftBorder<<endl;
    
        for(i=leftBorder+1; i<rightBorder; i++){ // i - номер прохода  сортировка между двух границ!
            for(j=rightBorder-1; j>i; j--){ // внутренний цикл
                 // прохода
                    
                        
                    if(a[j-1]>a[j]){
                    x=a[j-1];
                    a[j-1]=a[j];
                    a[j]=x;
                    
                
                }
            }
        }
     
    }//function task 2
    //function task 2
    
    
    
    
    
    //function task 3
        template <class T>//function task 3
   T task3Sort(T a[], long size){//function task 3
    long i, j;
    T x;

    
    
    int dim;
    
    for(i=0; i<size; i++){ // i - номер прохода  сортировка между двух границ!
        for(j=size-2; j>i; j--){ // внутренний цикл
                 // прохода
                    dim = rand()%2;
                    if(dim==0){
                        x=a[j-1];
                        a[j-1]=a[j];
                        a[j]=x;
                    }
                    if(dim==1){
                        x=a[j+1];
                        a[j+1]=a[j];
                        a[j]=x;
                    }
                    
            }
        }
     return a[size];
    }//function task 3
    
    
    
    template <class T>//function task 3
  int task3key(T a[], long size){//function task 3    
        int key;
        key = 5+rand()%15;cout<<endl<<"key is: "<<key<<endl;
        for(int i = 0;i<size;i++){
            if(a[i]==key){
                key=i;break;
            }
        }
        cout<<endl<<"key pos is: "<<key<<endl;
        return key;
    }
   //task3search!!!!!!!!!!!!!!!!!!!!!!!!!
   
   
   
   
   
   
       //function task 3
    template <class T>//function task 3
    void task33(T a[], long size, int key){//function task 3
    long i, j;
    T x;

    
        for(i=0; i<key; i++){ // i - номер прохода  сортировка между двух границ!
            for(j=key-1; j>i; j--){ // внутренний цикл
                 // прохода
                    
                    if(a[j-1]<a[j]){
                    x=a[j-1];
                    a[j-1]=a[j];
                    a[j]=x; 
                    
                    
                
                }
            }
        }
        for(i=key+1; i<size; i++){ // i - номер прохода  сортировка между двух границ!
            for(j=size-1; j>i; j--){ // внутренний цикл
                 // прохода
                    
                        
                    
                    if(a[j-1]>a[j]){
                    x=a[j-1];
                    a[j-1]=a[j];
                    a[j]=x;
                    
                
                }
            }
        }
     
    }//function task 3
    // !!!!!!!!!!!!!!!!!!!!!!
int main(){
    
     srand(time(NULL));
     
     const long SIZE=20;
     int ar[SIZE];
     // до сортировки
    //  for(int i=0; i<SIZE; i++){
    //      ar[i] = 1+rand()%20;
    //      cout<<ar[i]<<"\t";
    //      }
     for(int i=0; i<SIZE; i++){
         ar[i] = i+1;
         cout<<ar[i]<<"\t";
         }         
    // // task 11111 = 
    //  cout<<"\n\n";
    // //  cout<<"\nenter sort key 1 up-down or 0 down-up = 1";
    //  int key;
    // //  cin>>key;
    // cout<<"\nbubble sort: \n";
    //  bubbleSort(ar, SIZE, 1);
    //  // после сортировки 
    //      for(int i=0; i<SIZE; i++){
    //      cout<<ar[i]<<"\t";
    //      }
    //  cout<<"\n\n";
     // task 11111 = 
     
    // task 22222 = 
    // task2Sort(ar, SIZE);//сортировка между двух границ 
    // cout<<"\ntask2 sort: \n";
    //  // после сортировки 
    //      for(int i=0; i<SIZE; i++){
    //      cout<<ar[i]<<"\t";
    //      }
    //  cout<<"\n\n";
    // task 22222 = 
    
    
    // task 333333
    int key;
    
    ar[SIZE]=task3Sort(ar, SIZE);//сортировка между двух границ 
    cout<<"\ntask3 default: \n";
     // после сортировки 
         for(int i=0; i<SIZE; i++){
         cout<<ar[i]<<"\t";
         }
     cout<<"\n\n";
     key = task3key(ar, SIZE);
     cout<<"\ntask3 MIXED: \n";
     
     task33(ar, SIZE, key);
      // после сортировки 
         for(int i=0; i<SIZE; i++){
         cout<<ar[i]<<"\t";
         }
     cout<<"\n\n";
    // task 333333
    
     return 0;
    }


