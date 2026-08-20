import java.util.Scanner;

class SumUsingLoop{
    static void calculateSum(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a Number :");
        int num = sc.nextInt();
        int sum=0;
        for(int i=0; i<= num; i++){
            sum += i;
        }
        System.out.println("sum of numbers is :" +sum);
    }
    public static void main(String[] args) {
        SumUsingLoop.calculateSum();
    }
}