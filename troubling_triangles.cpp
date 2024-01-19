#include <iostream>
#include <cmath>

using namespace std;

struct triangle{
    int x[2], y[2], z[2];
};

int main(){
    short trinaglesNumber;
    cin >> trinaglesNumber;
    triangle triangles[trinaglesNumber];
    for (triangle &t : triangles){
        cin >> t.x[0] >> t.x[1] >> t.y[0] >> t.y[1] >> t.z[0] >> t.z[1];
        float a = sqrt(pow(t.x[0]-t.y[0],2)+pow(t.x[1]-t.y[1],2));
        float b = sqrt(pow(t.z[0]-t.y[0],2)+pow(t.z[1]-t.y[1],2));
        float c = sqrt(pow(t.x[0]-t.z[0],2)+pow(t.x[1]-t.z[1],2));
        float perimeter = a+b+c;
        float area= sqrt((perimeter/2)*(perimeter/2-a)*(perimeter/2-b)*(perimeter/2-c));
        cout << area << ' ' <<  perimeter << endl;
    }

}
