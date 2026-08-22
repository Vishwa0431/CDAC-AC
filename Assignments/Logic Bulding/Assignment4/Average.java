import java.util.*;
class Average{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a size of array: ");
		int size  = sc.nextInt();
		int arr[] = new int[size];
		int sum =0;
		
		System.out.print("Enter " + size + " integers :");
		for(int i=0; i<arr.length; i++){
			arr[i] = sc.nextInt();
		}
		
		for(int i=0; i< arr.length; i++){
			sum += arr[i];
		}
		float avg = sum / arr.length;
		System.out.println("The avegrage of the numbers is : "+ avg);
	}
}