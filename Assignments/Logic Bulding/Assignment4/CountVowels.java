import java.util.Scanner;
class CountVowels{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a String :");
		String str = sc.nextLine();
		int vowels = 0;
		
		for(int i=0; i<str.length();i++){
			char ch = str.charAt(i);
			if(ch == 'a' || ch =='e' || ch=='i' || ch=='o' || ch=='u' ||
			ch == 'A' || ch =='E' || ch=='I' || ch=='O' || ch=='U'){
				vowels ++;
			}
		}
		System.out.println("The number of vowels in '"+ str+ "' is : " + vowels);
		
	}
}