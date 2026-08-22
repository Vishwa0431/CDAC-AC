import java.util.*;
class FindLargest{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the size of Array :");
		int size  =sc.nextInt();
		int Large[] = new int[size];
		int max=0;
		
		System.out.print("Enter "+ size + " integers :"); 
		for(int i=0; i<Large.length;i++){
			Large[i] = sc.nextInt();
		}
		
		for(int i=0; i<Large.length;i++){
			if(max < Large[i]){
				max = Large[i];
			}
		}
		System.out.println("The Largest element is : " + max);
		
	
	}

}