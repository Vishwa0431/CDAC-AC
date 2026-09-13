import java.util.Scanner;
public class ProhramInput {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		PrimeMembers pobj = new PrimeMembers();
		
		System.out.println("Enter a Name : ");
		pobj.setName(ConsoleInput.getString());
		
		System.out.println("Enter a age : ");
		pobj.setAge(ConsoleInput.getInt()); 
		
		System.out.println("Enter a Phone number");
		pobj.setPhoneNo(ConsoleInput.getString());
		
		System.out.println("Enter the Address : ");
		pobj.setAddress(ConsoleInput.getString());
		
		System.out.println("Enter a Salary : ");
		pobj.setSalary(ConsoleInput.getFloat());
		
		System.out.println("Enter a joining year : ");
		 pobj.setJoiningYear(ConsoleInput.getInt()); 
		
		System.out.println("Enter a Joining Fees : ");
		pobj.setJoinFess(ConsoleInput.getInt());
		
		System.out.println("Is Active (true/false): ");
		pobj.setActive(sc.nextBoolean());
		
		System.out.println("\n----- Member Details -----");
	        pobj.display();
	        
	    System.out.println("\n----- Salary -----");
	        pobj.printSalary();
	}

}
