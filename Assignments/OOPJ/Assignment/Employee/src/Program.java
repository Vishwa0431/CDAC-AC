import java.util.ArrayList;
import java.util.Comparator;

public class Program {

    static ArrayList<Employee> employees = new ArrayList<Employee>();
    
    public static void main(String[] args) {
    	
        while (true) {
            System.out.println(" ======= EMPLOYEE MANAGEMENT =======");
            System.out.println("1. Add an Employee");
            System.out.println("2. Display");
            System.out.println("3. Sort");
            System.out.println("4. Exit");

            System.out.print("Enter your choice : ");
            int choice = ConsoleInput.getInt();

            switch (choice) {
            case 1:
                addEmployeeMenu();
                break;
            case 2:
                displayMenu();
                break;
            case 3:
                sortMenu();
                break;
            case 4:
                System.out.println("Thank you!");
                return;
            default:
                System.out.println("Invalid choice!");
            }
        }
    }

    public static void addEmployeeMenu() {

        while (true) {

            System.out.println("\n ======== ADD EMPLOYEE =======");
            System.out.println("1. Manager");
            System.out.println("2. Engineer");
            System.out.println("3. Sales Person");
            System.out.println("4. Exit to Main Menu");

            System.out.print("Enter your choice : ");
            int choice = ConsoleInput.getInt();

            switch (choice) {
            case 1:
                addManager();
                break;
            case 2:
                addEngineer();
                break;
            case 3:
                addSalesPerson();
                break;
            case 4:
                return;
            default:
                System.out.println("Invalid choice!");
            }
        }
    }

    public static void addManager() {

        System.out.println("\nEnter Manager Details");
        
        System.out.print("Enter Name : ");
        String name = ConsoleInput.getString();

        System.out.print("Enter Address : ");
        String address = ConsoleInput.getString();

        System.out.print("Enter Age : ");
        int age = ConsoleInput.getInt();

        System.out.print("Enter Gender (true/false) : ");
        boolean gender = ConsoleInput.getBool();

        System.out.print("Enter Basic Salary : ");
        float salary = ConsoleInput.getFloat();

        Manager manager = new Manager(name, address, age, gender, salary);
        employees.add(manager);

        System.out.println("Manager added successfully!");
    }

    public static void addEngineer() {

        System.out.println("\nEnter Engineer Details");

        System.out.print("Enter Name : ");
        String name = ConsoleInput.getString();

        System.out.print("Enter Address : ");
        String address = ConsoleInput.getString();

        System.out.print("Enter Age : ");
        int age = ConsoleInput.getInt();

        System.out.print("Enter Gender (true/false) : ");
        boolean gender = ConsoleInput.getBool();

        System.out.print("Enter Basic Salary : ");
        float salary = ConsoleInput.getFloat();


        Engineer engineer = new Engineer(name, address, age, gender, salary);
        employees.add(engineer);

        System.out.println("Engineer added successfully!");
    }

    public static void addSalesPerson() {

        System.out.println("\nEnter Sales Person Details");

        System.out.print("Enter Name : ");
        String name = ConsoleInput.getString();

        System.out.print("Enter Address : ");
        String address = ConsoleInput.getString();

        System.out.print("Enter Age : ");
        int age = ConsoleInput.getInt();

        System.out.print("Enter Gender (true/false) : ");
        boolean gender = ConsoleInput.getBool();

        System.out.print("Enter Basic Salary : ");
        float salary = ConsoleInput.getFloat();


        SalesPerson salesPerson = new SalesPerson(name, address, age, gender, salary);
        employees.add(salesPerson);

        System.out.println("Sales Person added successfully!");
    }

    public static void displayMenu() {

        int currentIndex = 0;

        while (true) {

            System.out.println("\n======= DISPLAY ========");

            System.out.println("1. All Employees");
            System.out.println("2. First Employee");
            System.out.println("3. Next Employee");
            System.out.println("4. Previous Employee");
            System.out.println("5. Last Employee");
            System.out.println("6. Exit to Main Menu");

            System.out.print("Enter your choice : ");
            int choice = ConsoleInput.getInt();
            
            if (employees.isEmpty() && choice != 6) {
                System.out.println("No employees available.");
                continue;
            }

            switch (choice) {
            case 1:
                displayAll();
                break;
            case 2:
                currentIndex = 0;
                employees.get(currentIndex).display();
                break;
            case 3:
                if (currentIndex < employees.size() - 1) {
                    currentIndex++;
                    employees.get(currentIndex).display();
                }
                else {
                    System.out.println("Already at the last employee.");
                }
                break;
            case 4:
                if (currentIndex > 0) {
                    currentIndex--;
                    employees.get(currentIndex).display();
                }
                else {
                    System.out.println(
                            "Already at the first employee.");
                }
                break;
            case 5:
                currentIndex = employees.size() - 1;
                employees.get(currentIndex).display();
                break;
            case 6:
                return;
            default:
                System.out.println("Invalid choice!");
            }
        }
    }

    public static void displayAll() {

        System.out.println("\n========== ALL EMPLOYEES ==========");
        for (Employee e : employees) {
            e.display();
            System.out.println("----------------------------");
        }
    }

    public static void sortMenu() {

        while (true) {

            System.out.println("\n======== SORT ========");
            System.out.println("1. All Managers");
            System.out.println("2. All Engineers");
            System.out.println("3. All Sales Person");
            System.out.println("4. All Employees Alphabetic order ascending");
            System.out.println("5. All Employees Alphabetic order descending");
            System.out.println("6. Exit to Main Menu");
            System.out.print("Enter your choice : ");

            int choice = ConsoleInput.getInt();
            switch (choice) {
            case 1:
                displayManagers();
                break;
            case 2:
                displayEngineers();
                break;
            case 3:
                displaySalesPersons();
                break;
            case 4:
                sortAscending();
                break;
            case 5:
                sortDescending();
                break;
            case 6:
                return;
            default:
                System.out.println("Invalid choice!");
            }
        }
    }
    
    public static void displayManagers() {

    	boolean found = false;
        for (Employee e : employees) {
            if (e instanceof Manager) {
                e.display();
                System.out.println("----------------------------");
                found = true;
            }
        }

        if (!found) {
            System.out.println("No Managers available.");
        }
    }

    public static void displayEngineers() {

        boolean found = false;
        for (Employee e : employees) {
            if (e instanceof Engineer) {
                e.display();
                System.out.println("----------------------------");
                found = true;
            }
        }

        if (!found) {
            System.out.println("No Engineers available.");
        }
    }

    public static void displaySalesPersons() {

        boolean found = false;
        for (Employee e : employees) {
            if (e instanceof SalesPerson) {
                e.display();
                System.out.println("----------------------------");
                found = true;
            }
        }


        if (!found) {
            System.out.println("No Sales Persons available.");
        }
    }

    public static void sortAscending() {

        employees.sort(Comparator.comparing(Employee::getName));
        System.out.println("Employees sorted in ascending order.");
        displayAll();
    }

    public static void sortDescending() {
        employees.sort(Comparator.comparing(Employee::getName).reversed());
        
        System.out.println("Employees sorted in descending order.");
        displayAll();
    }
}