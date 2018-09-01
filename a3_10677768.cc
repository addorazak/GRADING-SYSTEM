#include <iostream>
using namespace std;

int main()
{
    double mark;

    cout << "Please enter your mark"<<endl;
    cin >> mark;

    if(mark >=80 && mark <=100){
        cout << "You have an A.";
	}
    else if(mark >=70 && mark <=79){
        cout << "You have a B.";
    }
    else if(mark >=60 && mark <=69){
        cout << "You have a C.";
    }
    else if(mark >=50 && mark <=59){
        cout << "You have a D.";
    }
    else if(mark >=40 && mark <=49){
        cout << "You have a E.";
    }
    else if(mark >=0 && mark <=39){
		cout << "You have a F.";
		}
    return 0;
}
