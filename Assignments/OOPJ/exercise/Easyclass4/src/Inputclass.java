
public class Inputclass {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		System.out.println("Enter a real no 1: ");
		int real1 = ConsoleInput.getInt();
		
		System.out.println("Enter a imagnary no 1: ");
		int imag1 = ConsoleInput.getInt();
		
		System.out.println("Enter a real no 2: ");
		int real2 = ConsoleInput.getInt();
		
		System.out.println("Enter a imagnary no 2 : ");
		int imag2 = ConsoleInput.getInt();
		
		ComplexNo c1 = new ComplexNo(real1, imag1);
		ComplexNo c2 = new ComplexNo(real2, imag2);
		
		c1.sum(c2);
		c1.Difference(c2);
		c1.Product(c2);
	}

}
