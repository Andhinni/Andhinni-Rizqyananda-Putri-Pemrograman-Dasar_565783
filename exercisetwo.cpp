#include <iostream>
#include <cmath>
using namespace std;

// Fungsi untuk menghitung jarak antara dua titik (x1, y1) dan (x2, y2)
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Fungsi untuk menghitung radius (memanggil fungsi distance)
double radius(double x1, double y1, double x2, double y2) {
    return distance(x1, y1, x2, y2);
}

// Fungsi untuk menghitung keliling lingkaran
double circumference(double r) {
    const double PI = 3.1416;
    return 2 * PI * r;
}

// Fungsi untuk menghitung luas lingkaran
double area(double r) {
    const double PI = 3.1416;
    return PI * pow(r, 2);
}

int main() {
    double x1, y1, x2, y2;

    cout << "Program Menghitung Lingkaran Berdasarkan Titik Pusat dan Titik pada Lingkaran\n";
    cout << "-----------------------------------------------------------------------\n";

    // Input titik pusat
    cout << "Masukkan koordinat titik pusat (x1 y1): ";
    cin >> x1 >> y1;

    // Input titik pada lingkaran
    cout << "Masukkan koordinat titik pada lingkaran (x2 y2): ";
    cin >> x2 >> y2;

    // Hitung radius
    double r = radius(x1, y1, x2, y2);

    // Hitung diameter, keliling, dan luas
    double d = 2 * r;
    double c = circumference(r);
    double a = area(r);

    // Output hasil
    cout << "\n=== HASIL PERHITUNGAN ===\n";
    cout << "Radius (r)        = " << r << endl;
    cout << "Diameter (d)      = " << d << endl;
    cout << "Keliling (C)      = " << c << endl;
    cout << "Luas Lingkaran (A)= " << a << endl;

    return 0;
}
