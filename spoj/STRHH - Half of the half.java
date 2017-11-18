import java.util.*;
import java.math.*;
import java.io.*;
 
class test{
	public static void main(String[] args){
		Scanner s=new Scanner(System.in);
		
		int t=s.nextInt();
 
		while(t-->0){
			String a=s.next();
 
			for(int i=0;i<a.length()/2;i+=2){
				System.out.print(a.charAt(i));
			}
			System.out.print("\n");
		}
 
	}
} 