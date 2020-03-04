import java.util.Scanner;
public class piramide {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int num = in.nextInt();
    for(int i = 1; i <= num; i ++){
        for(int a = 1;a <= num; a++){
            System.out.print(a);
        }
        System.out.println("");    
    }
  }
}
public class piramide2 