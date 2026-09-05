#include <iostream>
#include <stack>
#include <vector>
#include <iomanip>
using namespace std;

class Vehicle{
protected:
    string registrationNo;
    string ownerName;
    int yearOfManufacture;
    double KmDriven;
public:
    Vehicle(const string &reg, const string &owner, int year, double km):registrationNo(reg),ownerName(owner), yearOfManufacture(year),KmDriven(km){
        cout << "[Vehicle construct...]"<<registrationNo<<" : " <<ownerName<< endl;
    }
    virtual double fuelCost(double kmToTravel) const=0;

    virtual void describe() const{
        cout << "vehicle info...."<< endl;
    }

    virtual string vehicleType() const = 0;

    virtual ~Vehicle(){
        cout << "[Vehicle Destructor] " << registrationNo << endl;
    }
    double getKmDriven() const{
        return KmDriven;
    }
    string getRegNo() const{
        return registrationNo;
    }
    string getOwnerName() const {
    return ownerName;
}
};
class Car : public Vehicle{
public:
    string fuelType;
    double mileageKmpl;

    Car(const string &reg, const string &owner, int year, double km, const string& fuel, double mileage):Vehicle(reg, owner, year, km), fuelType(fuel),mileageKmpl(mileage){
        cout << "[Car constructor...]" << registrationNo << endl;
    }
    double fuelCost(double km)const override{
        double fuelPricePerLitre;
        if(fuelType == "Petrol"){
            fuelPricePerLitre = 106.00;
        }
        else{
            fuelPricePerLitre = 93.00;
        }
        return (km / mileageKmpl) * fuelPricePerLitre;
    }

    string vehicleType()const override{
        return "car";
    }

    void describe()const override{
        cout << "fuel Type : " << fuelType << endl;
        cout << "Mileage : " << mileageKmpl <<"Km/L"<< endl;
    }

    ~Car(){
        cout << "[car Destructor ..] " << registrationNo << endl;
    }
};
class Truck : public Vehicle{
public:
    double payloadCapacityTons;
    double fuelEfficiencyKmpl;
    
    Truck(const string &reg, const string &owner, int year, double km, double payload, double fuelEffi):Vehicle(reg, owner, year, km), payloadCapacityTons(payload), fuelEfficiencyKmpl(fuelEffi){
        cout << "[Truck Constructor...] "<<registrationNo << endl;
    }
    double fuelCost(double km)const override{
        double adjEffi = fuelEfficiencyKmpl * (1 - 0.05 * payloadCapacityTons);

        return km / adjEffi * 93.00;
    }

    string vehicleType()const  override{
        return "Truck";
    }
    ~Truck(){
        cout << "[Truck Distructor... ] " << registrationNo << endl;
    }
};
class ElectricTruck : public Truck{
public:
    double batteryCapacityKWh;
    double rangePerChargeKm;

    ElectricTruck(const string& reg, const string& owner, int year, double km, double payload, double fuelEffi, double battery, double range):Truck(reg, owner, year, km, payload, fuelEffi), batteryCapacityKWh(battery), rangePerChargeKm(range){
        cout << "[ElectricTruck constuctor....]" << registrationNo << endl;
    }
    double fuelCost(double km)const override{
        return (km / rangePerChargeKm) * batteryCapacityKWh * 9.50;
    }

    string vehicleType()const  override{
        return "Electric Truck";
    }

    void describe()const  override{
        Truck ::describe();
        cout << "Battery Capacity : " << batteryCapacityKWh << " KWh" << endl;
        cout << "Range per Charger : " << rangePerChargeKm << " Km" << endl;
    }
    ~ElectricTruck(){
        cout << "[ElectricTruck destructor....]" << registrationNo << endl;
    }
};
class Van : public Vehicle{
public:
    int seatingCapacity;
    double mileageKmpl;

    Van(const string& reg, const string& owner, int year, double km, int seating, double mileage):Vehicle(reg, owner, year, km), seatingCapacity(seating), mileageKmpl(mileage){
        cout << "[Van constructor ...] " << registrationNo << endl;
    }
    double fuelCost(double km)const override{
        return (km / mileageKmpl) * 106.00;
    }

    string vehicleType()const override{
        return "Van";
    }
    ~Van(){
        cout << "[van Destructor...] " << registrationNo << endl;
    }
};

    void printFleetReport( const vector<Vehicle*>& fleet, double tripKm){
        cout << endl;
        cout << "===== FLEET REPORT — Trip Distance: " << tripKm << " km  == == = "<<endl;
        cout<< "Reg \t Type \t Owner \t Km Driven" << endl;

        for(Vehicle *v : fleet){
            cout << v->getRegNo()<<"  "<< v->vehicleType()<<"  " << v->getOwnerName()<<"  "<< v->getKmDriven()<< endl;
        }

        cout << endl;
        cout << "===== FUEL / CHARGE COST ESTIMATE =====\n";
        for (Vehicle* v : fleet)
        {
            double cost = v->fuelCost(tripKm);
            cout << v->getRegNo()<< " (" << v->vehicleType() << ") : Rs. "<< cost << endl;
        }

        double lowCost = fleet[0]->fuelCost(tripKm);
        Vehicle *mostEfficient = fleet[0];
        for(Vehicle* v: fleet){
            double cost = v->fuelCost(tripKm);

            if(cost < lowCost){
                lowCost = cost;
                mostEfficient = v;
            }
        }
        cout << "Most Efficient Vehicle: " << mostEfficient->getRegNo() << " ( " << mostEfficient->vehicleType() << " ) - Rs. " << lowCost << " for " << tripKm<<" Km " << endl;
    }

int main(){
    ElectricTruck et(
        " V-ET001 " ," Green Logistics",2024,10000,5.0,5.0,200.0,400.0);
    cout << ".......... scope end .........." << endl;

    cout << "===================================================" << endl;

    vector<Vehicle*> fleet;
    fleet.push_back(new Car(
        "KA01AA001",
        "Ramesh Kumar",
        2022,
        45200,
        "Petrol",
        18.0
    ));

    fleet.push_back(new Truck(
        "MH04BB002",
        "Shyam Logistics",
        2021,
        123500,
        5.0,
        6.0
    ));

    fleet.push_back(new ElectricTruck(
        "GJ07CC003",
        "Green Fleet Co",
        2024,
        89000,
        5.0,
        5.0,
        200.0,
        400.0
    ));

    fleet.push_back(new Van(
        "KA05DD004",
        "City Travels",
        2023,
        60000,
        8,
        14.0
    ));

    double tripKm = 200;

    
    printFleetReport(fleet, tripKm);

    for (Vehicle* v : fleet)
    {
        delete v;
    }
    fleet.clear();
    return 0;
}