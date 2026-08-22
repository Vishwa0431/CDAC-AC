import java.util.Scanner;
class MultipleOf{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a Number : ");
		int num = sc.nextInt();
		
		for(int i=1; i<=num;i++){
			if(i % 3 == 0){
				System.out.println( i);	
			}
		}
	}


}