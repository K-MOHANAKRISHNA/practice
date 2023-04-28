import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.Scanner;
public class CeaserCipher1
{
	static Scanner sc=new Scanner(System.in);
	static BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	public static void main(String[]args)throws IOException
	{
		System.out.println("enter any string:");
		String str=br.readLine();
		System.out.println("enter the key:");
		int key=sc.nextInt();
		String encrypted=encrypt(str,key);
		System.out.println("Encrypted String is:"+encrypted);
		String decrypted=decrypt(encrypted,key);
		System.out.println("Decrypted String is:"+decrypted);
		System.out.print("\n");
	}
	public static String encrypt(String str,int key)
	{
		String encrypted="";
		for(int i=0;i<str.length();i++)
		{
			int c=str.charAt(i);
			if(Character.isUpperCase(c))
			{
				c=c+(key%26);
				if(c>'Z')
					c=c-26;
			}
			else if(Character.isLowerCase(c))
			{
				c=c+(key%26);
				if(c>'z')
					c=c-26;
			}
			encrypted+=(char)c;
		}
		return encrypted;
		}
			
		public static String decrypt(String str,int key)
		{
			String decrypted="";
		for(int i=0;i<str.length();i++)
		{
			int c=str.charAt(i);
			if(Character.isUpperCase(c))
			{
				c=c-(key%26);
				if(c<'A')
					c=c+26;
			}
			else if(Character.isLowerCase(c))
			{
				c=c-(key%26);
				if(c<'a')
					c=c+26;
			}
			decrypted+=(char)c;
		}
		return decrypted;
} }

output:-
  
 enter any string:
hello
enter the key:
15
Encrypted String is:wtaad
Decrypted String is:hello



import java.security.*; 
import javax.crypto.*; 
import javax.crypto.spec.*;  
import java.io.*; 
public class AES {  
    public static String asHex (byte buf[]) { 
        StringBuffer strbuf = new StringBuffer(buf.length * 2);
        int i; 
        for (i = 0; i < buf.length; i++) {
            if (((int) buf[i] & 0xff) < 0x10)  
                strbuf.append("0");  
            strbuf.append(Long.toString((int) buf[i] & 0xff, 16)); 
        }
        return strbuf.toString(); 
    } 
    public static void main(String[] args) throws Exception {
        String message="AES";
        KeyGenerator kgen = KeyGenerator.getInstance("AES");
        kgen.init(128); 
        SecretKey skey = kgen.generateKey(); 
        byte[] raw = skey.getEncoded();  
        SecretKeySpec skeySpec = new SecretKeySpec(raw, "AES");  
        Cipher cipher= Cipher.getInstance("AES");  
        cipher.init(Cipher.ENCRYPT_MODE, skeySpec);  
        byte[] encrypted = cipher.doFinal((args.length == 0 ? message :args[0]).getBytes());
        System.out.println("encrypted string: " + asHex(encrypted)); 
        cipher.init(Cipher.DECRYPT_MODE, skeySpec);
        byte[] original = cipher.doFinal(encrypted); 
        String originalString = new String(original); 
        System.out.println("Original string: " + originalString + " " + asHex(original));
    }
}

encrypted string: ac9044697b7c69fe1262f1f88f62978a
Original string: AES 414553
