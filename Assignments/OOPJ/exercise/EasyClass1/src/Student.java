
public class Student {
	
	String name;
	int roll_no;
	String phone_no;
	String Address;
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Student s1 = new Student();
		
		s1.name = " John";
		s1.roll_no= 2;
		
		System.out.println("Name : "+ s1.name + " RollNo : "+ s1.roll_no);
		
		//Part B
		Student objStud = new Student();
		Student objStud2 = new Student();
		objStud.name = "John";
		objStud.roll_no = 2;
		objStud.phone_no = " 8766607667";
		objStud.Address = "mumbai";
		
		objStud2.name = "Sam";
		objStud2.roll_no = 4;
		objStud2.phone_no = " 99236360547";
		objStud2.Address = "pune";
		
		System.out.println("name : "+ objStud.name + ", Roll No :"+ objStud.roll_no + ", Phone no : "+objStud.phone_no+ ", Address: "+ objStud.Address);
		System.out.println("name : "+ objStud2.name + ", Roll No :"+ objStud2.roll_no + ", Phone no : "+objStud2.phone_no+ ", Address: "+ objStud2.Address);
	}

}
