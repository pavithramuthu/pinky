import java.util.Scanner;
public class Pgm36
{
public static void main(String s[])
string test ="Hai ! How are you? ";
count(test);
}
public static void count(String x)
{
char[] ch=x.toCharArray();
int digit=0;
int space=0;
int letter=0;
int other=0;
for(i=0;i<x.length;i++)
{
if(Character.isDigit(ch[i]))
{
digit++;
}
else if(Character.isSpace(ch[i]))
{
space++;
}
else if(Character.isLetter(ch[i]))
{
letter++;
}
else
{
others++;
}
}
System.out.println("Hai!How are you? ");
System.out.println("digit:" +digit);
System.out.println("space:"+space);
System.out.println("letter:"+letter);
System.out.println("other:"+other);
}
}
