import java.util.*;
class test{
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        while(s.hasNextLine()){
            System.out.println((s.nextLine().toLowerCase().contains("problem")?"yes":"no"));
        }
    }
}