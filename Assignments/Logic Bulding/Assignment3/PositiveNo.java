
import java.util.Scanner;

class PositiveNo{
    static void PositiveNumber(){
        Scanner sc = new Scanner(System.in);
        int num;

        do { 
            System.out.println("Enter a Positive number : ");
            num = sc.nextInt();
            if(num>0){
                System.out.println("You Entered a Positive number :" + num);
            }
        } while (num < 1);
    }
    public static void main(String[] args) {

        PositiveNo.PositiveNumber();
    }
}