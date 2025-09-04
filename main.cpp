#include <iostream>
using namespace std;

int main() {
    const int height = 61;
    const int weight =130;

    double kg;
    double meters;
    
    //calculations
    kg = weight * 0.453592;
    meters = height * 0.0254;

    //calculate bmi

    double bmi;
    bmi = kg/(meters * meters);
 

    cout <<"The BMI for this person is :"<< bmi<< endl;


}
