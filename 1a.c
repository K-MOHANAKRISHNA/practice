//1st program

#include<stdio.h>
#include<string.h>
int main(){
    char s1[20]="Hello world",res[20];
    int i,len;
    len=strlen(s1);
    printf("%d",len);
    for(int i=0;i<len;i++){
        res[i]=s1[i]^0;
        printf("%c",res[i]);
    }
    printf("\n");
}
/*
//output:-
Hello world

*/
