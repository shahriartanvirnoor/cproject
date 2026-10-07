import java.util.Scanner;
public class HackerRankOne {
    public static int pow(int base , int n){
        if(n==0){
            return 1;
        }
        return pow(base, n-1)* base;
    }
    public static void main(String args[]){
        int base = 2, n;
        int a, b, eqn;
        Scanner in = new Scanner(System.in);
        a = in.nextInt();

        b = in.nextInt();
        n = in.nextInt();
        eqn = a + b;
        for(int i = 1; i< n; ++i){
            if(i==1){
                System.out.println(eqn + " ");
            }
            eqn = eqn + pow(base, i) * b;
            System.out.println(eqn + " ");
        }
        in.close();



    }
}