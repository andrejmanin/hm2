#include <iostream>
#include <cmath>

using namespace std;

void task_1() {
    int secconds = 0;
    cin >> secconds;
    cout << "hours: " << secconds / 3600 << "\nminutes: " << secconds / 60 << "\nsecconds: " << secconds << endl;
}

void task_2() {
    float num = 0;
    cin >> num;
    cout << static_cast<int>(num) << " grn. " << (num - static_cast<int>(num)) * 100 << " cop." << endl;
}

void task_3() {
    cout << "Calculation of running speed.\nEnter the length of the distance (meters) = ";
    int len = 0, t = 1;
    cin >> len;
    cout << "Enter the time(min.sec) = ";
    cin >> t;
    cout << "Distance: " << len << endl;
    cout << "Time: " << t * 60 << " c" << endl;
    cout << "You ran with speed: " << len / (t * 60) << " m/c" << endl;
}

void task_4() {
    int days;
    cin >> days;
    cout << "weeks: " << days / 7 << " days: " << days - (days / 7);
}

int main() {
    task_4();
}
