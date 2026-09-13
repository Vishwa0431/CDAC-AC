public class Engineer extends Employee {

    public Engineer(String name, String address, int age,
                    boolean gender, float basicSalary) {

        super(name, address, age, gender, basicSalary);
    }

    @Override
    public void display() {

        System.out.println("\n======Engineer=======");

        System.out.println("Name         : " + getName());
        System.out.println("Address      : " + getAddress());
        System.out.println("Age          : " + getAge());
        System.out.println("Gender       : " + getGender());
        System.out.println("Basic Salary : " + getBasicSalary());
    }
}