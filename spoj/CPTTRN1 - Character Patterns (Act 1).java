import java.util.*;
 
class test {
	public static void main(String[] args){
		Scanner s=new Scanner(System.in);
 
		int t=s.nextInt();
		while(t-->0){
			int r=s.nextInt();
			int c=s.nextInt();
 
			int[][] arr=new int[r][c];
 
			for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					System.out.print((i+j)%2==0?"*":".");
				}
				System.out.println();
			}
		}
	}
} 