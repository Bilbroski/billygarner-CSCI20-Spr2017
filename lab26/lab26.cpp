#include <iostream>
#include <cstdlib>     // Enables Random
#include <ctime>       // Enables Time
using namespace std;


class TemperatureConverter{
    public:
        void SetTempFromKelvin(double temp);  //mutator
        double GetTempFromKelvin(); //accessor
        
        void SetTempFromCelsius(double temp);  //mutator
        void SetTempFromFahrenheit(double temp);  //mutator
        
        double GetTempAsCelsius();  //accessor
        double GetTempAsFahrenheit();  //accessor
        
        void PrintTemperatures();  //class output funtion
        
        
    private:
        double TempFromKelvin;
        double TempFromCelsius;
        double TempFromFahrenheit;
};

//***CLASE FUNCTION DEFINITIONS***//
void TemperatureConverter::SetTempFromKelvin(double temp){
    TempFromKelvin = temp;
}
void TemperatureConverter::SetTempFromCelsius(double temp){
    TempFromCelsius = temp;
}
void TemperatureConverter::SetTempFromFahrenheit(double temp){
    TempFromFahrenheit = temp;
}

double TemperatureConverter::GetTempFromKelvin(){
    return TempFromKelvin;
}
double TemperatureConverter::GetTempAsCelsius(){
    return TempFromCelsius;
}
double TemperatureConverter::GetTempAsFahrenheit(){
    return TempFromFahrenheit;
}


int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}
