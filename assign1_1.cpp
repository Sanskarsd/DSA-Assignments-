#include<iostream>
using namespace std;
int length(char n[]){
    int i=0,sum=0;
    while(n[i] != '\0'){
        sum++;
        i++;
    }
    cout << "Length : " << sum << endl;
    return sum;
}
void reverse(char n[]){
    char rev[500];
    int j=0;
    int i=length(n)-1;
    while(i>=0){
        rev[j] = n[i];
        j++;
        i--;
    }
    cout << "Reversed String : " <<rev<<endl;
}
void copy(char a[], char b[]){
    int i=0;
    while (a[i] != '\0'){
       b[i] = a[i];
        i++;
    }
    b[i]='\0';
}
void concat(char a[], char b[]){
    int i=0,j=0;
    char result[500];
    while(a[i] != '\0'){
        result[i] = a[i];
        i++;
    }
    result[i] = ' ';
    i++;
    while(b[j]!= '\0'){
        result[i] = b[j];
        j++;
        i++;
    }
    result[i] = '\0';
    cout << "\nConcatination : " << result;
}
int main(){
    char str1[100],str2[100],cpy[100];
    cout << "Enter String 1 : ";
    cin.getline(str1,100);
    cout << "Enter String 2 : ";
    cin.getline(str2,100);
    length(str1);
    length(str2);
    reverse(str1);
    reverse(str2);
    copy(str1,cpy);
    int i=0;
    while (cpy[i] != '\0'){
        cout << cpy[i];
        i++;
    }
    concat(str1,str2);
    return 0;
}
