public abstract class Employee {

    protected String name;
    protected String address;
    protected int age;
    protected boolean gender;
    protected float basicSalary;


    // Parameterized Constructor

    public Employee(String name, String address, int age,
                    boolean gender, float basicSalary) {

        super();

        setName(name);
        setAddress(address);
        setAge(age);
        setGender(gender);
        setBasicSalary(basicSalary);
    }


    // Getter and Setter for Name

    public String getName() {
        return name;
    }

    public void setName(String name) {

        if (name == null || name.isEmpty())
            this.name = "Unknown";
        else
            this.name = name;
    }


    // Getter and Setter for Address

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {

        if (address == null || address.isEmpty())
            this.address = "Unknown";
        else
            this.address = address;
    }


    // Getter and Setter for Age

    public int getAge() {
        return age;
    }

    public void setAge(int age) {

        if (age < 18 || age > 65)
            this.age = 21;
        else
            this.age = age;
    }


    // Getter and Setter for Gender

    public boolean getGender() {
        return gender;
    }

    public void setGender(boolean gender) {
        this.gender = gender;
    }


    // Getter and Setter for Basic Salary

    public float getBasicSalary() {
        return basicSalary;
    }

    public void setBasicSalary(float basicSalary) {

        if (basicSalary <= 0)
            this.basicSalary = 10000;
        else
            this.basicSalary = basicSalary;
    }


    public void display() {

        System.out.println("Name         : " + name);
        System.out.println("Address      : " + address);
        System.out.println("Age          : " + age);
        System.out.println("Gender       : " + gender);
        System.out.println("Basic Salary : " + basicSalary);
    }
}