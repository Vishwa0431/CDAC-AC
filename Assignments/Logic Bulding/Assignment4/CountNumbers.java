import java.util.*;
class CountNumbers{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter size of Array : ");
		int size = sc.nextInt();
		int positive =0;
		int negative=0;
		
		int arr[] = new int[size];
		System.out.print("Enter " + size +" integers :");
		for(int i=0; i<arr.length; i++){
			arr[i] = sc.nextInt();
		}
		
		for(int i=0; i< arr.length;i++){
			if(arr[i]>= 0){
				positive++;
			}else{
				negative++;
			}
		}
		System.out.println("Positive numbers :"+positive);
		System.out.println("Negative numbers :"+negative);

	}
}