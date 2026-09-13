
public class ArrInput {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayQue objArr = new ArrayQue();
		
		int arr1[] =  {10, 20, 30, 40, 50};
		System.out.println("Enter a size of the array : ");
		int size = ConsoleInput.getInt();
		
		int arr[] = new int[size];
		
		System.out.println("Enter a elements of Array : ");
		for(int itemp=0; itemp < size; itemp++) {
			arr[itemp] = ConsoleInput.getInt();
		}
		
		System.out.print("Original Array : ");
		for(int itemp = 0; itemp < size; itemp++) {
			System.out.print(arr[itemp] + " ");
		}
		
		ArrayQue.sortArray(arr);
		System.out.println();
		System.out.print(" Sorted Array : ");
		for(int temp =0; temp < size; temp++) {
			System.out.print(arr[temp] + " ");
		}
		
		System.out.println();
		ArrayQue.sumArray(arr);
		
		System.out.println();
		ArrayQue.AvgArray(arr);
		
		System.out.println();
		ArrayQue.cpoyArray(arr1);
		
		System.out.println();
		ArrayQue.MaxArray(arr);
		
		System.out.println();
		ArrayQue.reverseArray(arr);
	
		System.out.println();
		ArrayQue.findDuplicate(arr);
		
		System.out.println();
		ArrayQue.twoArr();
	}
	

}
