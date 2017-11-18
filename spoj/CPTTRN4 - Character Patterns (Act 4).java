import java.util.*;
 
class test{
	public static void main(String[] args){
		Scanner cin=new Scanner(System.in);
 
		int t=cin.nextInt();
 
		while (t-->0) {
			int r=cin.nextInt();
			int c=cin.nextInt();
			int h=cin.nextInt()+1;
			int w=cin.nextInt();
 
			
			for(int i=0;i<r;i++){
				int a=h;
				while(a-->0){
					for(int j=0;j<c;j++){
						System.out.print("*");
						for(int x=0;x<w;x++) System.out.print(a==h-1?"*":".");
					}
					System.out.println("*");
				}
			}
			for(int i=0;i<c*(w+1);i++) System.out.print("*");
			System.out.println("*");
		}
	}
} 