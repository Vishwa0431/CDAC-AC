
public class ForQue {

	public void odd() {
		System.out.println(" odd numbers : ");
		for(int itemp =0; itemp <= 1000; itemp++) {
			if(itemp % 2 != 0) 
				System.out.print(itemp + " ");
		}
	}
	
	public void Even() {
		System.out.println("Even Numbers : ");
		for(int itemp =0; itemp <= 500; itemp++) {
			if(itemp % 2 == 0) 
				System.out.print(itemp + " ");
		}
	}
	
	public void sevenNo() {
		System.out.println("7th number :");
		for(int itemp =0; itemp <= 200; itemp++) {
			if(itemp % 7 == 0) 
				System.out.print(itemp + " ");
		}
	}
	
	public void pattern1() {
		for(int itemp = 1; itemp <= 5; itemp++) {
			for(int jtemp = 1; jtemp <= itemp; jtemp++) {
				System.out.print("* ");
			}
			System.out.println();
		}
	}
	
	public void Revpattern1() {
		for(int itemp = 1; itemp <= 5; itemp++) {
			for(int jtemp = 5; jtemp >= itemp; jtemp--) {
				System.out.print("* ");
			}
			System.out.println();
		}
	}
	
	public void Numpattern() {
		int num = 1;
		for(int itemp = 1; itemp <= 4; itemp++) {
			for(int jtemp = 1; jtemp <= itemp; jtemp++) {
				System.out.print(num+ " ");
				num++;
			}
			System.out.println();
		}
	}
	public void Numpattern1() {
		for(int itemp = 1; itemp <= 6; itemp++) {
			for(int jtemp = 1; jtemp <= itemp; jtemp++) {
				System.out.print(jtemp + " ");
			}
			System.out.println();
		}
	}
	
	public void RevNumpattern1() {
		for(int itemp = 6; itemp >= 1; itemp--) {
			for(int jtemp = 1; jtemp <= itemp; jtemp++) {
				System.out.print(jtemp + " ");
			}
			System.out.println();
		}
	}
	
}
