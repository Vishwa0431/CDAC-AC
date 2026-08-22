import java.util.*;
class Sorting{

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a size of array: ");
		int size = sc.nextInt();
		int sorted= 0;
		
		int arr[] = new int[size];
		
		System.out.print("Enter " + size +" integers: ");
		for(int i=0; i< arr.length; i++){
			arr[i] = sc.nextInt();
		}
		Arrays.sort(arr);
		
		System.out.print("Sorted array : " );
		for(int i=0; i< arr.length; i++){
			System.out.print(arr[i] + " ");
		}
	}
}