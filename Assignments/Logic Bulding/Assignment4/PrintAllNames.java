import java.util.*;
class PrintAllNames{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a Size of Array  : " );
		int size = sc.nextInt();
		
		String names[] = new String[size];
		
		System.out.println("Enter " + size + " names : ");
		for(int i=0; i<names.length; i++){
			names[i]= sc.next();
		}
		System.out.println("Entered names are : ");
		for(String Name :names){
			
			System.out.println(Name);
		}
	
	}


}