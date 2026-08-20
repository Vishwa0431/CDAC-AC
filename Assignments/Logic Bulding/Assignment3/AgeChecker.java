import java.util.Scanner;

class AgeChecker{
    static void checkAgeCategory(int age){
        if(age<= 18){
            System.out.println("Person is Minor");
        }else if(age >18 && age <=55){
            System.out.println("Person is Adult");
        }else 
            System.out.println("Person is Senior Citizen");
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter age of a Person: ");
        int age = sc.nextInt();

        checkAgeCategory(age);
        
    }
}