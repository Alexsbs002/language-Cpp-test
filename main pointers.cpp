/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void replacer(int arr[],int SIZE){//меняет четное и нечетное//task1
    int* ptr = arr;
    int temp;
    for(int i = 0;i<SIZE-1;i=i+2){
        
        temp = *(ptr + i);
        *(ptr + i)=*(ptr + i+1);
        *(ptr + i+1)=temp;
    }
    for(int i=0;i<SIZE;i++){
        cout<<arr[i]<<" ";
    }
}
    
int sort(int a1[],int a,int b1[], int b){//task2222
    int SIZE=a+b;
    int res[SIZE];
    int *pa;
    pa = &res[0];
    for(int i = 0;i<SIZE;i++){
        for(int j=0;j<a;j++){
            *(pa+j)=*(a1 +j);
        }
        for(int e=0;e<b;e++){
            *(pa +a+e)=*(b1+e);
        }
    }
    
     long i, j;
     int temp;
     for(i=0; i<SIZE; i++){ // i - номер прохода 
         for(j=SIZE-1; j>i; j--){ // внутренний цикл
             // прохода
             if(*(pa+j-1)>*(pa+j)){
                 temp=*(pa+j-1);
                 *(pa+j-1)=*(pa+j);
                 *(pa+j)=temp;
             }
         }
     }
    
    
    for(int i = 0;i<SIZE;i++){
        cout<<res[i]<<" ";
    }
    return res[a+b];
}//стортировка пузырьком с указателем

template <class T,class D>//задаем темплейты для Т и Д
void GlobalChange( T *a, D *b){
    T temp;
    temp = *b;
    *b = *a;
    *a = temp;
}


void task31(int a1[],int a,int b1[], int b);
void task32(int a1[],int a,int b1[], int b);

int main()
{
    int SIZE = 6;
    int arr1[SIZE]={0,1,2,3,4,5};
    int arr2[SIZE]={4,5,6,7,8,9};
    //replacer(arr1,SIZE);//меняет четное и нечетное
    //sort(arr1,SIZE,arr2,SIZE);//массив это указатель поэтому он меняется глобально из функции - слить массивы и отсортировать
    
    // int a = 5,b=-6;//замена а и б 
    // cout<<"a = "<<a<<" b = "<<b<<endl;
    
    // GlobalChange(&a,&b);// меняет местами а и б глобально через темплейт
    // cout<<"now a = "<<a<<" and b = "<<b<<endl;
    
    task32(arr1,SIZE,arr2,SIZE);
    return 0;
}

void task31(int a1[],int a,int b1[], int b){
    int SIZE=a+b;
    int res[SIZE];
    int *pa;
    pa = &res[0];
    for(int i = 0;i<SIZE;i++){
        for(int j=0;j<a;j++){
            *(pa+j)=*(a1 +j);
        }
        for(int e=0;e<b;e++){
            *(pa +a+e)=*(b1+e);
        }
    }
    

    for(int i = 0;i<SIZE;i++){
        cout<<res[i]<<" ";
    }
}

void task32(int a1[],int a,int b1[], int b){
    int SIZE=a+b;
    int res[SIZE];
    int *pa;
    pa = &res[0];
    for(int i = 0;i<SIZE;i++){
        for(int j=0;j<a;j++){
            *(pa+j)=*(a1 +j);
        }
        for(int e=0;e<b;e++){
            *(pa +a+e)=*(b1+e);
        }
    }
   for(int i = 0;i<SIZE;i++){
        if((*pa+i)==(*pa+i+1)){
            cout<<(*pa+i)<<" ";
        }
    }
    
    
    
}


