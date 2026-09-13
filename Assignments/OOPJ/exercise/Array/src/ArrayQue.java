public class ArrayQue{
	
	static void sortArray(int[] arr){
		
		for(int itemp=0; itemp<arr.length - 1; itemp++) {
			for(int jtemp=itemp + 1; jtemp < arr.length; jtemp++) {
				if(arr[itemp] > arr[jtemp]) {
					int temp = arr[itemp];
					arr[itemp] = arr[jtemp];
					arr[jtemp] = temp;
				}
			}
		}
	}
	static void sumArray(int[] arr) {
		int sum=0;
		for(int temp = 0; temp< arr.length; temp++) {
			sum += arr[temp];
		}
		System.out.println("sum of array elemet is : " + sum);
	}
		
	static void AvgArray(int[] arr) {
		int sum = 0;
		for(int temp = 0; temp< arr.length; temp++) {
			sum += arr[temp];
		}
		double avg = sum / arr.length;
		System.out.println("The Average of the array is : " + avg );
	}
	
	static void cpoyArray(int[] arr1) {
		int copy[] = new int[arr1.length];
		for(int temp = 0; temp< arr1.length; temp++) {
			copy[temp]= arr1[temp];
		}
		System.out.print("Copy Array : ");
		for(int itemp=0; itemp< copy.length; itemp++) {
			System.out.print(copy[itemp] + " ");
		}
	}
	
	static void MaxArray(int[] arr) {
		int Min = arr[0];
		int Max = 0;
		for(int temp = 0; temp< arr.length; temp++) {
			if(arr[temp] > Max) {
				Max = arr[temp];
			}
			if(arr[temp] < Min) {
				Min = temp;
			}
		}
		System.out.println("The Max element of the array is : " + Max + " Minimum is : "+ Min );
	}
	
	static void reverseArray(int[] arr) {
		for(int itemp = arr.length -1 ;itemp >=0; itemp--) {
			System.out.print(arr[itemp]+ " ");
		}
	}
	static void findDuplicate(int[] arr) {
		for(int itemp=0; itemp < arr.length; itemp++) {
			for(int jtemp=itemp+1 ; jtemp <arr.length; jtemp++) {
				if(arr[itemp] == arr[jtemp]) 
					System.out.println("Duplicate no : "+ arr[itemp]);
			}
			
		}
	}
	
	static void twoArr() {
		System.out.println("Common elemnts : ");
		int arr2[] = {12, 3 ,5 ,6 ,7};
		int arr3[] = {1, 4, 6, 2, 5};
		for(int item=0; item<arr2.length; item++) {
			for(int jtem=0; jtem<arr3.length; jtem++) {
				if(arr2[item] == arr3[jtem]) {
					System.out.print(arr2[item] + " ");
					break;
				}
			}
		}
	}
	
}
