
public class Working {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		complex[] arr = new complex[5];
		 	
		for(int itemp=0; itemp<5; itemp++) {
			arr[itemp] = new complex();
			
			System.out.println("Enter a number 1 : ");
			int num1 = ConsoleInput.getInt();
			
			System.out.println("Enter a number 2 : ");
			int num2 = ConsoleInput.getInt();
			
			arr[itemp].setNum1(num1);
			arr[itemp].setNum2(num2);
		}

		System.out.println("Result of complex : ");
		for(int itemp=0; itemp < 5; itemp++) {
			System.out.print(arr[itemp].getNum1() + " * " + arr[itemp].getNum2() + " = " + arr[itemp].complexNumber() + "  ");
		}
	}

}
