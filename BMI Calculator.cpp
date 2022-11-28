#include<iostream>
#include<math.h>

using namespace std;
class Bmi
{
public:
    float Weight;
    float Height,Feet;
    float BMI;
    int Choice;
    void bmi(void)
    {
        cout<<"Enter your weight (Kg):";
        cin>>Weight;
        cout<<"Enter your height (Feet):";
        cin>>Feet;

        Height=Feet/3.284;//Feet/3.284 We Will Get Meter
        //Formula Of BMI=Weight/(Height In Meter)^2
        BMI = Weight / pow(Height, 2);
        cout<<"\n";
        
        }
        
        void Display (void)
        {
        cout<<"Your Body Mass Index is "<<BMI<<" \n";

        if (BMI < 18.5)
        {
            cout<<"You Are Underweight!"<<" \n";
        }
        else if (BMI >= 18.5 && BMI < 25)
        {
            cout<<"You Are Normal!"<<" \n";
        }
        else
        {
            cout<<"You Are Overweight! \n";
        }

        cout<<"\n\Check Again:\n1-Yes\n2-No \n\nEnter Your Choice:\n";
        cin>>Choice;
    }
};
int main()
{
Bmi BMI;

    cout<<"     Body Mass Index Calculator \n";
    cout<<"     Created By Ghanshyam Vaja \n \n";
    do
    {
BMI.bmi();
BMI.Display();
    }
    while (BMI.Choice==1);
    cout<<"Thank You For Using BMI Calculator"<<" \n";

    return 0;
}