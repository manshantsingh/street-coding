import java.util.*;
 
class test{
	public static void main(String[] args){
		Scanner cin=new Scanner(System.in);
 
		int t=cin.nextInt();
 
		while (t-->0) {
			int r=cin.nextInt();
			int c=cin.nextInt();
			int s=cin.nextInt();
 
			
			for(int i=0;i<r;i++){
				int a=0;
				while(a++<=s){
					for(int j=0;j<c;j++){
						System.out.print("*");
						for(int x=0;x<s;x++) System.out.print(a==1?"*":((i+j)%2==0 && x==a-2)?"\\":((i+j)%2==1 && s-x==a-1)?"/":".");
					}
					System.out.println("*");
				}
			}
			for(int i=0;i<c*(s+1);i++) System.out.print("*");
			System.out.println("*");
		}
	}
} 