import java.util.Scanner;
class PrintNum{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a Number : ");
		int Num = sc.nextInt();
		
		for(int i=1; i<=Num; i++){
			System.out.println(i);
		}
		
	}


}