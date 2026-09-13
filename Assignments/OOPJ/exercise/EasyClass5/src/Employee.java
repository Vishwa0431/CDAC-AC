
public class Employee {
	String name ;
	int Year;
	String Address;
	
	Employee(String name , int Year, String Address){
		this.name = name;
		this.Year = Year;
		this.Address = Address;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Employee E1 = new Employee("Robert", 1994, "64C- WallsStreat");
		Employee E2 = new Employee("Sam", 2000, "68D- WallsStreat");
		Employee E3 = new Employee("John", 1999, "26B- WallsStreat");
		
		System.out.println("Name  \t year \t  Address");
		System.out.println(E1.name +" \t"+ E1.Year + " \t" + E1.Address);
		System.out.println(E2.name +" \t"+ E2.Year + " \t" + E2.Address);
		System.out.println(E3.name +" \t"+ E3.Year + " \t" + E3.Address);
	}

}
