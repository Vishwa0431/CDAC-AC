#include <iostream>
#include <utility>
using namespace std;

class LedgerEntry{
    string description;
    double *amounts;
    int days;
public:
    static int totalEntries;

     bool isNull() const {
        return amounts == nullptr;
    }
    LedgerEntry(const string& desc, int days): description(desc), days(days){
        amounts = new double[days];
        for (int i = 0; i < days; i++)
            amounts[i] = 0.0;
            
    totalEntries++;
    cout<< "[LedgerEntry Created]" << desc << " ( " << days << "days )" << endl;
    }
    LedgerEntry(const LedgerEntry& other){
        description = other.description;
        days = other.days;
        amounts = new double[days];

        for (int i = 0; i < days; i++){
            amounts[i] = other.amounts[i];
        }

        cout << "[LedgerEntry Created]" << description << " ( " << days << "days )";
    }

        // other.days = 0;
    LedgerEntry(LedgerEntry&& other) noexcept :description(move(other.description)),amounts(other.amounts),days(other.days) {
        other.days = 0;
        amounts = other.amounts;
        other.amounts = nullptr;
        totalEntries++;
        cout << "[Move Constructor] Ownership transferred from: " << other.description << endl;
        
    }

    LedgerEntry& operator=(const LedgerEntry& other){
        if(this != &other){
            delete[] amounts;

            description = other.description;
            days = other.days;
            amounts = new double[days];

            for (int i = 0; i < days;i++){
                amounts[i] = other.amounts[i];
            }
        }
        return *this;
    }

    LedgerEntry& operator=(LedgerEntry&& other)noexcept{
        if(this != &other){
            days = other.days;
        
        delete[] amounts;
            amounts = other.amounts;
            other.amounts = nullptr;
            other.days = 0;
        }
        
            cout << "[Move Assignment] Ownership transferred from: "<< description << endl;
            return *this;
    }

    ~LedgerEntry(){
        cout << "[Destructor] " << description <<"destroyed"<< endl;
        delete[] amounts;
        totalEntries--;
    }

    LedgerEntry operator+(const LedgerEntry& other ) const{
        LedgerEntry result("combined ", days);
        for (int i = 0; i < days; i++)
        {
            result.amounts[i] = amounts[i] + other.amounts[i];
        }
        return result;
    }

    bool operator==(const LedgerEntry& other)const{
        double currtotal = 0;
        double othertotal = 0;

        for (int i = 0; i < days; i++){
            currtotal += amounts[i];
        }
        for (int i = 0; i <other.days; i++){
            othertotal += other.amounts[i];
        }
        return currtotal == othertotal;
    }

    bool operator>(const LedgerEntry& other)const{
        double currtotal = 0;
        double othertotal = 0;

        for (int i = 0; i < days; i++){
            currtotal += amounts[i];
        }
        for (int i = 0; i < other.days; i++){
            othertotal += other.amounts[i];
        }
        return currtotal > othertotal;
    }

    double&  operator[](int index){
        return amounts[index];
    }

    const double &operator[](int index) const{
        return amounts[index];
    }
    friend ostream& operator<<(ostream& out, const LedgerEntry& entry){
        out << entry.description <<" : [ "<< endl;
        for (int i = 0; i < entry.days; i++){
            out << entry.amounts[i]<<" , ";
        }
        double total = 0;
        for (int i = 0; i < entry.days; i++){
            total += entry.amounts[i];
        }
        out << " ] Total : " << total;
        return out;
        cout << endl;
        }
        
        friend istream &operator>>(istream &in, const LedgerEntry &entry)
        {
            for (int i = 0; i < entry.days; i++)
            {
                in >> entry.amounts[i];
            }
            return in;
        }
};
int LedgerEntry::totalEntries = 0;
int main(){
    LedgerEntry jan("January Sales",5);
    jan[0] =1200.50; jan[1] =3400.00; jan[2] =800.75; jan[3] =2100.00;
    jan[4] =650.25;

    LedgerEntry feb("February Sales", 5);
    feb[0] = 900.00;
    feb[1] = 2200.50;
    feb[2] = 1750.00;
    feb[3] = 3000.00;
    feb[4] = 475.50;

    cout << jan << endl;
    cout << feb << endl;

    // Objective 2 — Operator + (sum two ledgers into combined)
    LedgerEntry combined = jan + feb;
    cout << "Combined: " << combined << endl;

    // Objective 3 — Relational operators
    cout << "Jan == Feb : " << (jan == feb ? "Yes" : "No") << endl;
    cout << "Jan > Feb : " << (jan > feb ? "Yes" : "No") << endl;


    // Objective 4 — Move constructor (should NOT deep copy)
    LedgerEntry moved = move(jan);
    cout << "After move, jan.amounts is null: " << (jan.isNull() ? "YES" : "NO") << endl;
    cout << "Moved entry: " << moved << endl;

    // Objective 5 — Move assignment
    LedgerEntry q1("Q1 Total", 5);
    q1 = move(feb); // feb's resources transferred to q1
    cout << "Q1 (moved from feb): " << q1 << endl;

    // Objective 6 — Static member
    cout << "Live LedgerEntry objects: " << LedgerEntry::totalEntries << endl;

    return 0;
}