import java.util.*;
class ArraySum{
	public static void main(String[] args){
		Scanner sc =  new Scanner(System.in);
		System.out.println("Enter size of Array: ");
		int n = sc.nextInt();
		int sum =0;
		
		int arr[] = new int[n];
		
		System.out.print("Enter " + n + " integers :");
		for(int i=0; i<arr.length; i++){
			arr[i] = sc.nextInt();
		}
		for(int i=0; i< arr.length; i++){
			sum += arr[i];
		}
		System.out.println("The  sum of all numbers is  :" + sum);
	
	}


}