#include <iostream>
#include <cmath>
using namespace std;

struct Triangle {  
    int x;   
    int y;
} coordinate;   

double distance(Triangle p1, Triangle p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    
Triangle A;
Triangle B;
Triangle C;    
A.x = 4;   
A.y = 3;
B.x = 5;   
B.y = 6;
C.x = 2;   
C.y = 3;

double AB = distance(A, B);
double AC = distance(A, C);
double BC = distance(B, C);

double p = (AB+AC+BC)/2;
cout << p << endl;

}
