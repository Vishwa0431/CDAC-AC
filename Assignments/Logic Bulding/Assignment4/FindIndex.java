import java.util.*;
class FindIndex{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter size of array: ");
		int size = sc.nextInt();
		
		Integer[] arr = new Integer[size];
		
		System.out.print("Enter "+ size +" integers :");
		for(int i=0; i<arr.length; i++){
			arr[i] = sc.nextInt();
		}
		System.out.print("Enter the number to search : ");
		int searchNo =sc.nextInt();
		
		int result = Arrays.binarySearch(arr,searchNo );
		
		if(result >= 0){
			System.out.println("The number "+ searchNo + " is found at index : " + result);
		}else
			System.out.println("Not Found" );
	}
}