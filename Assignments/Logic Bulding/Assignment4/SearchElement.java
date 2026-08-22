import java.util.*;
class SearchElement{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter size of Array : ");
		int size = sc.nextInt();
		
		Integer arr[] = new Integer[size];
		
		System.out.print("Enter " + size + " integers : ");
		for(int i=0; i< arr.length; i++){
			arr[i] = sc.nextInt();
		}
		
		System.out.print("Enter the number to Search : ");
		int searchNo = sc.nextInt();
		
		if(Arrays.asList(arr).contains(searchNo)){
				System.out.println("Found");
			}
		else
			System.out.println("Not Found");
	}
}