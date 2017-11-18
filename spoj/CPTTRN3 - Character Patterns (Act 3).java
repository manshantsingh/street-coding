import java.util.*;
 
class test{
	public static void main(String[] args){
		Scanner cin=new Scanner(System.in);
 
		int t=cin.nextInt();
 
		while (t-->0) {
			int r=cin.nextInt();
			int c=cin.nextInt();
 
			
			for(int i=0;i<r;i++){
				int a=3;
				while(a-->0){
					for(int j=0;j<c;j++){
						System.out.print(a==2?"***":"*..");
					}
					System.out.println("*");
				}
			}
			for(int i=0;i<c;i++) System.out.print("***");
			System.out.println("*");
		}
	}
} 