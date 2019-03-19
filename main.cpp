//its inaccurate...just realised

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int day , month , year ;
    int D;
    cout << " Write the date in DD MM GG format : "<< endl;;
    cout << "Type day : ";
    cin >> day ;
    cout << "Type  month: ";
    cin >> month ;
    cout << "Type year: ";
    cin >> year ;


    month >=3 ? year : year - 1;
    int m =(((31 * month)% 12) - 2) ;
    D = day + year + (year % 4) - (year % 100) + (year % 400) + (m - 2);

    cout << day << "." << month << "." << year << " falls on ";

    switch (  D  % 7)
    {
        case 0:
    cout << " sunday " ;
    break ;
case 1 :
    cout << " monday";
    break;
case 2 :
    cout <<" tuesday";
    break;
case 3 :
    cout << " wednesday";
    break;
case 4:
    cout << " thursday";
    break;
case 5 :
    cout << " friday";
    break;
case 6 :
    cout << " saturday";
    break;
default :
    cout << " nowhere :/";
    break;
    }


cout << " . " << endl;


// made by domindo haker logistika d.o.o.



    return 0;
}
