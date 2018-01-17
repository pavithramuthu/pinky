import java.io.*;
import java.util.*;
import java.lang.*;
public class Space
{
public static void main(String s[])throws Exception
{
Scanner sc=new Scanner(System.in);
String s=sc.nextLine();
char[] c=a.tocharArray();
int count=0;
for(int i=0;i<a.length;i++)
{
if(c[i]!=' ')
count++;
}
int n=a.length()-count;
System.out.println(n);
}
}
