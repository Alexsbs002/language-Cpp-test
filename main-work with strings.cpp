#include <cstring>
#include <algorithm> 
#include<iostream>
#include<string>
using namespace std;
// сложение строк
void stringCombine(){
    char dest[50] = "Learning C++ is fun";
    char src[50] = " and easy";

    strcat(dest, src);
    
    cout << dest ;
}
// ищет символ в строке
void stringComplex(){
    
    char str[] = "Programming is easy.";
    char ch = 'r';
    
    if (strchr(str, ch))
        cout << ch << " is present \"" << str << "\"";
    else
        cout << ch << " is not present \"" << str << "\"";
}
// найти длину строки
void stringLen(){
    
    char str1[] = "This a string";
    char str2[] = "This is another string";
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    cout << "Length of str1 = " << len1 << endl;
    cout << "Length of str2 = " << len2 << endl;
    if (len1 > len2)
        cout << "str1 is longer than str2";
    else if (len1 < len2)
        cout << "str2 is longer than str1";
    else
        cout << "str1 and str2 are of equal length";
}

void replacer(char str[], char ch,char cc){
    for(int i = 0; i < strlen(str);i++){
        
        if(str[i]==ch){
            str[i]=cc;
        }
    }
    cout<<str;
}

void counter(char str[]){
    int letterCount=0;
    int numberCount=0;
    int symbolCount=0;
    
    for(int i=0;i<strlen(str);i++){
        
        if(isalpha(str[i])){
            ++letterCount;
        }
        else if(isdigit(str[i])){
            ++numberCount;
        }
        else ++symbolCount;
    }
    cout<<endl<<"num of letters is = "<<letterCount;
    cout<<endl<<"num of numbers is = "<<numberCount;
    cout<<endl<<"num of symbols is = "<<symbolCount;
}

// void wordCount(char str[]){
//     int count=1;
    
//     for(int i = 0; i < strlen(str);i++){
        
//         if((str[i]==' ') || (str[i]=='/0' )){
//             ++count;
//         }
//     }
//     cout<<count;
// }

void isPalindrom(char str[]){
    
    
    
    
    
    char test[strlen(str)];
    int count = strlen(str)-1;
    for(int j=0;j<strlen(str);j++){
        cout<<str[j];
        test[j]=str[count];
        count-=1;
    }
    cout<<endl;
    int pol = -1;
    for(int i=0;i<strlen(str);i++){
        cout<<test[i];
        if(test[i]!=str[i]){
            pol=1;
        }
        
    }
    if(pol==1){
        cout<<"\nit is not a polyndrom";
    }
    else if (pol ==-1){
        cout<<"\nit is polyndrom";
    }

}

void enterlen(){
    char str[20];
    
    int size = 5;
    
    for(int i=0;i<size;i++){
        cin>>str[i];
    }
    int c1=0;int c2=0;
    for(int j=0;j<20;j++){
        if(isalpha(str[j])){
            ++c1;
        }
        else if(isdigit(str[j])){
            ++c1;
        }
        else ++c2;
    }
    
    cout<<endl<<" str size = "<< c1;
    cout<<endl<<" free space = "<< c2;
}

void part(char str[], int a,int b){
    int len = abs(a-b)+1;
    char res[len];
    int count = 0;
    for(int i = 0;i<strlen(str);i++){
        if((i>=a) && (i<=b) ){
            res[count]=str[i];count+=1;
        }
    }
    for(int i=0;i<len;i++){
        cout<<res[i];
    }
}

void remov(char str[], int a,int b){
    
    int count = 0;
    char test[strlen(str)];
    for(int i = 0;i<strlen(str);i++){
        if((i>=a) && (i<=b) ){
            str[i]=' ';
        }
        else test[count]= str[i];count++;
    }
    for(int i=0;i<strlen(str);i++){
        cout<<test[i];
    }
}

void findLet(char str[],char ch){
    int last = -1;
    for(int i = 0;i<strlen(str);i++){
        if(str[i]==ch){
           last = i + 1; 
        }
    }
    cout<<last<<" ";
}
int main()
{
    // task 1
    // char str[] = "Programming is easy.";
    // char ch = ' ';
    // char cc = '\t';
    // replacer(str, ch, cc);
    
    // task 2
    // char str[] = "A12+++";
    // counter(str);
    
    // task 3 
    // char str[] = "11 22 33 44";
    // wordCount(str);
    
    // task 4 
    
    // char str[] = "opefepo";
    // isPalindrom(str);
    
    // task 11
    
    // enterlen();
    
    // task 22
    
    // int m = 2;
    // int n = 5;
    
    // char str[] = "abcdefgh";
    // part(str,m,n);
    
    // task 33
    // int m = 2;
    // int n = 5;
    // char str[] = "abcdefgh";
    // remov(str,m,n);
    
    // task 44
    
    char str[] = "abcdefghc";
    char ch = 'c';
    
    findLet(str,ch);
    
    
    return 0;

}
