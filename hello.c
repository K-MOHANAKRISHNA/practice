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


import java.util.*;
import javax.crypto.BadPaddingException;
import javax.crypto.Cipher;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.KeyGenerator;
import javax.crypto.NoSuchPaddingException;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import java.io.*;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.security.spec.InvalidKeySpecException;
class Main{
    public static void main(String[] args) throws IOException, NoSuchAlgorithmException, InvalidKeyException,    InvalidKeySpecException, NoSuchPaddingException, IllegalBlockSizeException, BadPaddingException {
        String  message="DES";
        byte[] myMessage =message.getBytes();
        KeyGenerator Mygenerator = KeyGenerator.getInstance("DES");
        SecretKey myDesKey = Mygenerator.generateKey();
        Cipher myCipher = Cipher.getInstance("DES");
        myCipher.init(Cipher.ENCRYPT_MODE, myDesKey);
        byte[] myEncryptedBytes=myCipher.doFinal(myMessage);
        myCipher.init(Cipher.DECRYPT_MODE, myDesKey);
        byte[] myDecryptedBytes=myCipher.doFinal(myEncryptedBytes);
        String encrypteddata=new String(myEncryptedBytes);
        String decrypteddata=new String(myDecryptedBytes);
        System.out.println("Message : "+ message);
        System.out.println("Encrypted - "+ encrypteddata);
        System.out.println("Decrypted Message - "+ decrypteddata);
    }
}

output:-
Message : DES
Encrypted - �ݞ�qQ�
Decrypted Message - DES

