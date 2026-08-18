
import java.util.Scanner;

class Days{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a Day number :");
        int Day = sc.nextInt();
        switch (Day ) {
            case 1:
                if(Day ==1) 
                    System.out.println("The day is Monday");
                break;
            case 2:  
                if(Day == 2) 
                    System.out.println("The day is Tuesday");
                break;
            case 3: 
                if( Day ==3)
                    System.out.println("The day is wednesday");
                break;
            case 4:
                if(Day ==4)
                    System.out.println("The day is Thrusday");
                break;
            case 5:
                if(Day ==5)
                    System.out.println("The day is Friday");
                break;
            case 6:
                if(Day ==6)
                    System.out.println("The day is Saturday");
                break;
            case 7:
                if(Day ==7)
                    System.out.println("The day is Sunday");
                break;
            default:
                System.out.println("Invalid Day Number.");;
        }
    }
}