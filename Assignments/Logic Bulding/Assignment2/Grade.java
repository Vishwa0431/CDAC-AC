class Grade{
	public static void main(String[] args){
		int Math =  80;
		int Science = 85;
		int History = 90;
		int Marks= (Math + Science+ History)/ 3;
		
		System.out.println("Average Marks: "+ Marks);
		if(Marks >= 90){
			System.out.println("Grade : A");	
		}else if(Marks>= 70 && Marks <= 89){
			System.out.println("Grade : B");
		}else if(Marks >= 50 && Marks <= 69){
			System.out.println("Grade : C");
		}else if(Marks>=30 && Marks <= 49){
			System.out.println("Grade : D");
		}else
			System.out.println("Fail");
	}
}