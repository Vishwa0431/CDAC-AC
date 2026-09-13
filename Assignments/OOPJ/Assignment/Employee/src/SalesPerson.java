public class SalesPerson extends Employee {

    public SalesPerson(String name, String address, int age,
                       boolean gender, float basicSalary) {

        super(name, address, age, gender, basicSalary);
    }

    @Override
    public void display() {

        System.out.println("\n======Sales Person=====");

        System.out.println("Name         : " + getName());
        System.out.println("Address      : " + getAddress());
        System.out.println("Age          : " + getAge());
        System.out.println("Gender       : " + getGender());
        System.out.println("Basic Salary : " + getBasicSalary());
    }
}