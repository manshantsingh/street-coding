import java.util.*;
 
class test{
	public static void main(String[] args){
		Scanner cin=new Scanner(System.in);
 
		int t=cin.nextInt();
 
		while (t-->0) {
			int r=cin.nextInt();
			int c=cin.nextInt();
 
			for(int i=0;i<r;i++){
				for (int j=0;j<c;j++){
					if(i==0||i==r-1||j==0||j==c-1) System.out.print('*');
					else System.out.print('.');
				}
				System.out.println();
			}
		}
	}
} 