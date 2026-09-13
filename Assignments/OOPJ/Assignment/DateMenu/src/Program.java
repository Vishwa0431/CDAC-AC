
public class Program {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Date objDate = new Date();
		
		System.out.println("Enter a Choice : ");
		int choice = ConsoleInput.getInt();
		while(choice <= 7) {
			
			System.out.println("choice 1 = Set Date ");
			System.out.println("choice 2 = Add Days ");
			System.out.println("choice 3 = Add Months ");
			System.out.println("choice 4 = Add Years ");
			System.out.println("choice 5 = Display ");
			System.out.println("choice 6 = Compare Dates ");
			System.out.println("choice 7 = Exit ");
			System.out.println("--------------------------");
			
			
			switch(choice) {
			
				case 1:
					System.out.println("Enter the Day : ");
					int Day = ConsoleInput.getInt();
					
					System.out.println("Enter the Month : ");
					int Month = ConsoleInput.getInt();
					
					System.out.println("Enter the Year : ");
					int Year = ConsoleInput.getInt();
					
					objDate.SetDate(Day , Month, Year);
					break;
				case 2:
					System.out.println("Add the Day : ");
					int aDay = ConsoleInput.getInt();
					objDate.addDay(aDay);
					break;
				case 3:
					System.out.println("Add the Month : ");
					int aMonth = ConsoleInput.getInt();
					objDate.addMonth(aMonth);
					break;
				case 4:
					System.out.println("Add the Year : ");
					int aYear = ConsoleInput.getInt();
					objDate.addYear(aYear);
					break;
				case 5:
					System.out.println(objDate.getDay() + " / " + objDate.getMonth() + " / " + objDate.getYear());
					break;
				case 6:
					break;
				case 7:
					System.out.println("Program Exit...");
					break;
				default:
					System.out.println("Invalid input ");
			}
			
			System.out.println("you want to continue (c) or exit (e)");
			String process = ConsoleInput.getString();
			if(process.equals("c") || process.equals("C")) {
				continue;
			}
			else if(process.equals("e") || process.equals("E")) {
				System.out.println("Program ended ... ");
				break;
			}
		
		
		}
		
	}
}
