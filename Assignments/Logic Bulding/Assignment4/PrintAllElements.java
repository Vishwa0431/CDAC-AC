import java.util.*;
class PrintAllElements{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a size of array : ");
		int n = sc.nextInt();
		
		int arr[] = new int[n];
		
		System.out.print("Enter "+ n + " integers :");
		for(int i=0; i<arr.length; i++){
			arr[i] = sc.nextInt();
		}
		
		for(int num : arr){
				System.out.print(num + " ");
			
		}
	}
}