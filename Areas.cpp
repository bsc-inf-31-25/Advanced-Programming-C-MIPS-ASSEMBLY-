#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int area_Of_Triangle() {

int b;
int h;

cout << "Enter a base : ";
cin >> b;
cout << "Enter a hight : ";
cin >> h;

return (.5) * b*h;
}

int area_Of_Lectangle (){

    int w;
    int l;

    cout << "Enter a Length : ";
    cin >> l;
    cout << "Enter a Width : ";
    cin >> w;

    return l * w;
}

int area_Of_Squre(){

    int side;

    cout << "Enter a side : ";
    cin >> side;

    return side * side;
}

int main () {

    int choice;

    while(true){
        
        cout << '\n';

        cout << "Select what you want to calculate its area " << endl;
        cout << "1. Triangle " << endl;
        cout << "2. Lectangle " << endl;
        cout << "3. Squre " << endl;
        cout << "4. Quit " << endl;

        cout << '\n';

        cout << "Enter a selection : ";
        cin >>choice;

        if (choice != 4){
            switch(choice) {
                case 1:
                    cout << area_Of_Triangle();
                break;
                
                case 2:
                    cout << area_Of_Lectangle();
                break;

                case 3:
                    cout << area_Of_Squre();
                break;

                default:
                    cout << "invalid number pleace enter select again ";
                break;
            }

        }
        else {
            exit(0);
        }

	}
return 0;

}