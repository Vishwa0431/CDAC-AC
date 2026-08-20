import java.util.Scanner;
class SumOfNumber{

	static void SumOfTwoNumbers(int num1, int num2){
		int sum  = num1 + num2;
		System.out.println("Sum of two numbers is : "+sum);	
		}
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number 1 : ");
		int num1 = sc.nextInt();
		System.out.println("Enter number 2 : ");
		int num2 = sc.nextInt();
		
		SumOfTwoNumbers(num1, num2);
	}
}