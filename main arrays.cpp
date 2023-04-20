/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void square(int mas[][2], int a){
    int max=-1;
    for(int i =0;i<a;i++){
        for(int j=0;j<a;j++){
            
            mas[i][j]=i;
            cout <<mas[i][j]<< "\t";
            if(i==j){
                if(mas[i][j]>=max){
                    max=mas[i][j];
                }
            }
        }cout<<endl;
    }cout<<endl;
        
    cout<<endl<<endl<<max<<" = is max on main diagonal";
}
void square(double mas[][2], int a){
    double max=-1.1;
    for(int i =0;i<a;i++){
        for(int j=0;j<a;j++){
            mas[i][j]=j;
            cout <<mas[i][j]<< "\t";
            if(i==j){
                if(mas[i][j]>=max){
                    max=mas[i][j];
                }
            }
        }cout<<endl;
    }cout<<endl;
    
    
        
    cout<<endl<<endl<<max<<" = is max on main diagonal";
}

void square(char mas[][2], int a){
    char max=-1;
    char num = '0';
    for(int i =0;i<a;i++){
        for(int j=0;j<a;j++){
            
            mas[i][j]=num;
            cout <<mas[i][j]<< "\t";
            if(i==j){
                if(mas[i][j]>=max){
                    max=mas[i][j];
                }
            }
            num++;
        }cout<<endl;
    }cout<<endl;
    
    
        
    cout<<endl<<endl<<max<<" = is max on main diagonal";
}

int main()
{
    
    int a = 4;
    int mas2[5][2];
    
    square(mas2,a);
    
    return 0;
}
