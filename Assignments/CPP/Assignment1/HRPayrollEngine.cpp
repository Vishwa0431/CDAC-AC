#include <iostream>
using namespace std;
class Employee{
private:
    int  empId ;
    string name ;
    string department ;
    char grade ;
    double basicSalary ;
    bool isActive = true ;
    static int employeeCount; 
public : 
    //constructor 
    Employee(){
        employeeCount++;
        empId = 1000 + employeeCount;
    }
    void setName(const string& n){
        if(n.empty()){
            cout<<"name Cannot be empty ."<<endl;
        }
        else 
            name =n;
    }
    void setDepartment(const string& dept){
        if(dept == "Engineering" ||dept == "HR" ||dept == "Finance" ||dept == "Operations"){
            department = dept;
        }else {
            cout<< "ERROR: '" << dept <<"is not a registered department"<<endl;
        }
    }
    void setGrade(char g){
        if(g == 'A' || g== 'B' || g == 'C' || g == 'D'){
            grade =g;
        }else {
            cout<< g<<"ERROR: Invalid grade 'X'. Accepted values: A, B, C, D."<<endl;
        }
    }
    void setBasicSalary(double salary){
        if(salary >= 10000 && salary <= 500000){
            basicSalary = salary;
        }else
            cout<<"ERROR: Salary must be between Rs.10,000 and Rs.5,00,000. Value rejected."<<endl;
    }
    void deactivate(){
        isActive = false;
    }
    int getEmpId() const{
        return empId;
    }
    string getName() const{
        return name;
    }
    string getDepartment() const{
        return department;
    }
    char getGrade() const{
        return grade;
    }
    double getBasicSalary() const{
        return basicSalary;
    }
    bool getIsActive() const{
        return isActive;
    }

    double computeAllowances() const{
        if(grade == 'A'){
            return 0.40 * basicSalary;
        }else if(grade == 'B'){
            return 0.30* basicSalary;
        }else if(grade == 'C'){
            return 0.20* basicSalary;
        }else if(grade == 'D'){
            return 0.10* basicSalary;
        }
    }

    double computeGrossSalary() const{
        double salary = basicSalary + computeAllowances();
        return salary;
    }

    double computeTax() const{
        double gross = computeGrossSalary();
        if(gross <= 50000){
            return 0;
        }else if(gross >= 50001 && gross <= 100000){
            return (gross-50000)* 0.10;
        }else if(gross > 100000){
            return 5000+ (gross-100000) *0.20;
        }
    }

    double computeNetSalary() const{
        int netSalary = computeGrossSalary() - computeTax();
        return netSalary;
    }
    void printPayslip() const{
        int choice;
        if(grade == 'A'){
            choice = 40;
        }else if(grade == 'B'){
            choice = 30;
        }
        else if(grade == 'C'){
            choice = 20;
        }else{
            choice = 10;
        }
    cout << "============================================" << endl;
    cout << "EMPLOYEE PAYSLIP - AUG 2026" << endl;
    cout << "============================================" << endl;
    cout << "Emp ID : " << empId << endl;
    cout << "Name : " << name << endl;
    cout << "Department : " << department << endl;
    cout << "Grade : " << grade << endl;
    cout << "Status : "<< (isActive ? "Active" : "Inactive") << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Basic Salary : Rs. " << basicSalary << endl;
    cout << "Allowances ("<<choice<<"%)  : Rs. " << computeAllowances() << endl;
    cout << "Gross Salary : Rs. " << computeGrossSalary() << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Tax Deduction : Rs. " << computeTax() << endl;
    cout << "Net Salary : Rs. " << computeNetSalary() << endl;
    cout << "============================================" << endl;
    }
    static int getEmployeeCount(){
        return employeeCount;
    }
    void acceptDetails(){
        string n;
        string dept;
        char g;
        double salary;
        cout << "Enter a employee name : " << endl;
        cin >> n;
        setName(n);

        cout << " Enter a department of Must be one of: Engineering, HR, Finance, Operations : " << endl;
        cin >> dept;
        setDepartment(dept);

        cout << "Enter a grade : " << endl;
        cin >> g;
        setGrade(g);

        cout << "Enter a salary : " << endl;
        cin >> salary;
        setBasicSalary(salary);
    }
};
int Employee::employeeCount = 0;
int main()
{
    // Create objects — one on stack, two on heap
    Employee e1;
    Employee* e2 = new Employee();
    Employee* e3 = new Employee();

    e1.acceptDetails();
    e2->acceptDetails();
    e3->acceptDetails();

    // Try uncommenting — observe the compiler error, then explain in a comment why
    // e1.empId = 999;
    // e1.basicSalary = -1000;

    e1.printPayslip();
    e2->printPayslip();
    e3->printPayslip();

    // Simulate a resignation
    e3->deactivate();

    if (!e3->getIsActive())
        cout << e3->getName() << " is no longer active. Payroll skipped.";

    cout << "Total Employees : "
        << Employee::getEmployeeCount() << endl;

    delete e2;
    delete e3;

    return 0;
}
