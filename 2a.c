2nd


#include<stdio.h>
#include<string.h>
int main(){
    char s1[20]="Hello world",res[20];
    int i,len;
    len=strlen(s1);
   // printf("%d",len);
    for(int i=0;i<len;i++){
        res[i]=s1[i]&127;
        printf("%c",res[i]);
    }
    printf("\n");
    for(int i=0;i<len;i++){
        res[i]=s1[i]|127;
        printf("%c",res[i]);
    }
    printf("\n");
    for(int i=0;i<len;i++){
        res[i]=s1[i]^127;
        printf("%c",res[i]);
    }
    printf("\n");
}

output:-
?????
hello world 
???? ??????

import java.util.*;
import java.io.*;
public class SubstitutionCipher
{
    static Scanner sc=new Scanner(System.in);
    static BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
    public static void main(String args[])throws IOException
    {
        String a="abcdefghijklmnopqrstuvwxyz";
        String b="zyxwvutsrqponmlkjihgfedcba";
        System.out.println("Enter any string:");
        String str=br.readLine();
        String decrypt="";
        char c;
        for(int i=0;i<str.length();i++)
        {
            c=str.charAt(i);
            int j=a.indexOf(c);
            decrypt=decrypt+b.charAt(j);
        }
        System.out.println("The encrypted data is :"+decrypt);
    }
}



Enter any string:
helloworld
The encrypted data is :svooldliow
