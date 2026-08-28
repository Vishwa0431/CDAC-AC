#include <iostream>
#include <cmath>
using namespace std;

inline double distanceBetween( double x1, double y1, double x2, double y2){
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2) );
}
inline double toRadians ( double degrees){
    double radians = degrees * (M_PI / 180.0);
    return radians;
}
inline double clamp(double value, double minVal, double maxVal){
    if (value < minVal)
        return minVal;

    if (value > maxVal)
        return maxVal;

return value;
}inline bool isInSafeZone( double x, double y, double cx, double cy, double radius){
    double distance = distanceBetween(x, y, cx, cy);
    return distance <= radius;
}
int main(){
    double homeX = 0.0;
    double homeY = 0.0;
    double safeRadius = 50.0;

    double waypoints[3][2] = { {30.0, 40.0}, {10.0, 20.0}, {60.0, 10.0} }; // Test each waypoint 
    for (int i = 0; i < 3; i++){ 
        double x = waypoints[i][0]; 
        double y = waypoints[i][1];
        double distance = distanceBetween( homeX, homeY, x, y );
        bool safe = isInSafeZone( x, y, homeX, homeY, safeRadius );
        cout << "Waypoint " << i + 1 << ": (" << x << ", " << y << ")" << endl; 
        cout << "Distance from home: " << distance << endl;
        cout << "Inside safe zone: " << (safe ? "Yes" : "No") << endl;
        cout << endl;
}
}