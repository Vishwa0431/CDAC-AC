
import java.util.Scanner;

class MenuDriven{
    static byte a;
        static short b;
        static int c;
        static long d;
        static float e;
        static double f;
        static char g;
        static boolean h;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (true) {
        
        System.out.println("choice 1 = Grade Evaluation System");
        System.out.println("choice 2 = Leap Year Check");
        System.out.println("choice 3 = Day of the week");
        System.out.println("choice 4 = Identify Default Values of Variables");
        System.out.println("choice 5 = Exit");
        System.out.println("Enter Your Choice");
        int Choice = sc.nextInt();
        switch(Choice){
            case 1:
                if(Choice == 1){
                    System.out.println("Enter a Marks :");
                    int Marks = sc.nextInt();
                    if(Marks>=90){
                        System.out.println("Grade : A");
                    }else if(Marks>=70 && Marks <= 89){
                        System.out.println("Grade : B");
                    }else if(Marks >= 50 && Marks <= 69 ){
                        System.out.println("Grade : C");
                    }else if(Marks >=30 && Marks <=49){
                        System.out.println("Grade : D");
                    }else 
                        System.out.println("Fail");
                }
                break;
            case 2:
                if(Choice == 2){
                    System.out.println("Enter a Year : ");
                    int Year = sc.nextInt();
                    if((Year % 4 == 0 && Year % 100 !=0) || Year % 400 ==0){
                        System.out.println(Year + " is a leap Year");
                    }else{
                        System.out.println(Year + " is not a leap Year");
                    }
                }    
                break;
            case 3:
                if(Choice == 3){
                    System.out.println("Enter a Day number :");
                    int Day = sc.nextInt();
                    if(Day ==1)
                        System.out.println("The day is Monday");
                    else if(Day == 2) 
                        System.out.println("The day is Tuesday");
                    else if(Day == 3)
                        System.out.println("The day is wednesday");
                    else if(Day ==4)
                        System.out.println("The day is Thrusday");
                    else if(Day ==5)
                        System.out.println("The day is Friday");
                    else if(Day ==6)
                        System.out.println("The day is Saturday");
                    else if(Day ==7)
                        System.out.println("The day is Sunday");
                    else 
                        System.out.println("Invalid Day Number.");
                }
                break;
            case 4:
                if(Choice == 4){
                    
                    System.out.println("byte " +a);
                    System.out.println("short :" +b);
                    System.out.println("int :" +c);
                    System.out.println("long : "+d);
                    System.out.println("float : "+e);
                    System.out.println("double :" +f);
                    System.out.println("char : "+g);
                    System.out.println("boolean : "+h);
                }
                break;
            case 5:
                if(Choice == 5 ){
                    System.out.println("Program Exit");
                }
                break;
            default:
                System.out.println("Invalid Choice ");
            }
                System.out.println("you want to continue(c) or exit(e)? ");
                String process = sc.next();
                if(process.equals("continue") || process.equals("c")){
                    continue;
                }else  if (process.equals("e")|| process.equals("exit")) {
                System.out.println("Program Exited.");
                break;
            } 
        }
    }
}