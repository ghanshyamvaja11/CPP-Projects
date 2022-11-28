#include<iostream>
//#include<string>
//#include<cmath>
#include<iomanip>
using namespace std;

//Kilometre Class
class Kilometre
{
public:
    void Meter(float A)
    {
        cout<<setprecision(20)<<A<<" Kilometre="<<setprecision(10)<<A*1000<<" Meters";
    }

    void Centimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Kilometre="<<setprecision(10)<<A*100000<<" Centimeter";
    }

    void Millimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Kilometre="<<setprecision(10)<<A*(1e+6)<<" Millimetre";
    }

    void Micrometre(float A)
    {
        cout<<setprecision(20)<<A<<" Kilometre="<<setprecision(10)<<A*(1e+9)<<" Micrometre";
    }

    void Nanometre(float A)
    {
        cout<<setprecision(20)<<A<<" Kilometre="<<setprecision(10)<<A*(1e+12)<<" Nanometer";
    }

    void Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Kilometre="<<setprecision(10)<<A/1.609<<" Mile";
    }

    void Yard(float A)
    {
        cout<<setprecision(20)<<A<<" Kilometre="<<setprecision(10)<<A*1094<<" Yard";
    }

    void Foot(float A)
    {
        cout<<setprecision(20)<<A<<" Kilometre="<<setprecision(10)<<A*3281<<" Foot";
    }

    void Inch(float A)
    {
        cout<<setprecision(20)<<A<<" Kilometre="<<setprecision(10)<<A*39370<<" Inch";
    }
    void Nautical_Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Kilometre="<<setprecision(10)<<A/1.852<<" Nautical Mile";
    }
};

//Meter Class
class Meter
{
public:
    void Kilometre(float A)
    {
        cout<<setprecision(20)<<A<<" Meter="<<setprecision(10)<<A/1000<<" Kilometre";
    }

    void Centimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Meter="<<setprecision(10)<<A*100<<" Centimetre";
    }

    void Millimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Meter="<<setprecision(10)<<A*1000<<" Millimetre";
    }

    void Micrometre(float A)
    {
        cout<<setprecision(20)<<A<<" Meter="<<setprecision(10)<<A*(1e+6)<<" Micrometre";
    }

    void Nanometre(float A)
    {
        cout<<setprecision(20)<<A<<" Meter="<<setprecision(10)<<A*(1e+9)<<" Namometre";
    }

    void Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Meter="<<setprecision(10)<<A/1609<<" Mile";
    }

    void Yard(float A)
    {
        cout<<setprecision(20)<<A<<" Meter="<<setprecision(10)<<A*1.094<<" Yard";
    }

    void Foot(float A)
    {
        cout<<setprecision(20)<<A<<" Meter="<<setprecision(10)<<A*3.281<<" Foot";
    }

    void Inch(float A)
    {
        cout<<setprecision(20)<<A<<" Meter="<<setprecision(10)<<A*39.37<<" Inch";
    }

    void Nautical_Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Meter="<<setprecision(10)<<A/1852<<" Nautical_Mile";
    }
};

//Centimetre Class
class Centimetre
{
public:
    void Kilometre(float A)
    {
        cout<<setprecision(20)<<A<<"Centimeter="<<setprecision(10)<<A/100000<<" Kilometre";
    }

    void Meter(float A)
    {
        cout<<setprecision(20)<<A<<" Centimeter="<<setprecision(10)<<A/100<<" Meter";
    }

    float Millimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Centimeter="<<setprecision(10)<<A*10<<" millimetre";
    }

    float Micrometre(float A)
    {
        cout<<setprecision(20)<<A<<" Centimeter="<<setprecision(10)<<A*10000<<" Micrometre";
    }

    float Nanometre(float A)
    {
        cout<<setprecision(20)<<A<<" Centimeter="<<setprecision(10)<<A*(1e+7)<<" Nanometre";
    }

    float Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Centimeter="<<setprecision(10)<<A/160934<<" Mile";
    }

    float Yard(float A)
    {
        cout<<setprecision(20)<<A<<" Centimeter="<<setprecision(10)<<A/91.44<<" Yard";
    }

    float Foot(float A)
    {
        cout<<setprecision(20)<<A<<" Centimeter="<<setprecision(10)<<A/30.48<<" Foot";
    }

    float Inch(float A)
    {
        cout<<setprecision(20)<<A<<" Centimeter="<<setprecision(10)<<A/2.54<<" Inch";
    }
    float Nautical_Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Centimeter="<<setprecision(10)<<A/185200<<" Nautical Mile";
    }
};

//Millimetre Class
class Millimetre
{
public:
    float Kilometre(float A)
    {
        cout<<setprecision(20)<<A<<" Millimetre="<<setprecision(10)<<A/(1e+6)<<" Kilometre";
    }

    float Meter(float A)
    {
        cout<<setprecision(10)<<A<<" Millimetre="<<setprecision(20)<<A/1000<<" Meter";
    }

    float Centimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Millimetre="<<setprecision(10)<<A/10<<" Centimetre";
    }

    float Micrometre(float A)
    {
        cout<<setprecision(20)<<A<<" Millimetre="<<setprecision(10)<<A*1000<<" Micrometre";
    }

    float Nanometre(float A)
    {
        cout<<setprecision(20)<<A<<" Millimetre="<<setprecision(10)<<A*(1e+6)<<" Nanometre";
    }

    float Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Millimetre="<<setprecision(10)<<A/(1.609e+6)<<" Mile";
    }

    float Yard(float A)
    {
        cout<<setprecision(20)<<A<<" Millimetre="<<setprecision(10)<<A/914<<" Yard";
    }

    float Foot(float A)
    {
        cout<<setprecision(20)<<A<<" Millimetre="<<setprecision(10)<<A/305<<" Foot";
    }

    float Inch(float A)
    {
        cout<<setprecision(20)<<A<<" Millimetre="<<setprecision(10)<<A/25.4<<" Inch";
    }

    float Nautical_Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Millimetre="<<setprecision(10)<<A/185200<<" Nautical Mile";
    }
};

//Micrometres Class
class Micrometre
{
public:
    void Kilometre(float A)
    {
        cout<<setprecision(20)<<A<<" Micrometre="<<setprecision(10)<<A/(1e+9)<<" Kilometre";
    }

    void Meter(float A)
    {
        cout<<setprecision(20)<<A<<" Micrometre="<<setprecision(10)<<A/(1e+6)<<" Meter";
    }

    void Centimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Micrometre="<<setprecision(10)<<A/10000<<" Centimetre";
    }

    void Millimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Micrometre="<<setprecision(10)<<A/1000<<" Millimetre";
    }

    void Nanometre(float A)
    {
        cout<<setprecision(20)<<A<<" Micrometre="<<setprecision(10)<<A*1000<<" Namometre";
    }

    void Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Micrometre="<<setprecision(10)<<A/(1.609e+9)<<" Mile";
    }

    void Yard(float A)
    {
        cout<<setprecision(20)<<A<<" Micrometre="<<setprecision(10)<<A/914400<<" Yard";
    }

    void Foot(float A)
    {
        cout<<setprecision(20)<<A<<" Micrometre="<<setprecision(10)<<A/304800<<" Foot";
    }

    void Inch(float A)
    {
        cout<<setprecision(20)<<A<<" Micrometre ="<<setprecision(10)<<A/25400<<" Inch";
    }

    void Nautical_Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Micrometre ="<<setprecision(10)<<A/(1.852e+9)<<" Nautical_Mile";
    }
};

//Nanometre Class
class Nanometre
{
public:
    void Kilometre(float A)
    {
        cout<<setprecision(20)<<A<<" Nanometre ="<<setprecision(10)<<A/(1e+12)<<" Kilometre";
    }

    void Meter(float A)
    {
        cout<<setprecision(20)<<A<<" Nanometre ="<<setprecision(10)<<A/(1e+9)<<" Meter";
    }

    void Centimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Nanometre ="<<setprecision(10)<<A/(1e+7)<<" Centimetre";
    }

    void Millimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Nanometre ="<<setprecision(10)<<A/(1e+6)<<" Millimetre";
    }

    void Micrometre(float A)
    {
        cout<<setprecision(20)<<A<<" Nanometre ="<<setprecision(10)<<A/1000<<" Micrometre";
    }

    void Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Nanometre ="<<setprecision(10)<<A/(1.609e+12)<<" Mile";
    }

    void Yard(float A)
    {
        cout<<setprecision(20)<<A<<" Nanometre ="<<setprecision(10)<<A/(9.144e+8)<<" Yard";
    }

    void Foot(float A)
    {
        cout<<setprecision(20)<<A<<" Nanometre ="<<setprecision(10)<<A/(3.048e+8)<<" Foot";
    }

    void Inch(float A)
    {
        cout<<setprecision(20)<<A<<" Nanometre ="<<setprecision(10)<<A/(2.54e+7)<<" Inch";
    }

    void Nautical_Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Nanometre ="<<setprecision(10)<<A/(1.852e+12)<<" Nautical_Mile";
    }
};

//Mile Class
class Mile
{
public:
    void Kilometre(float A)
    {
        cout<<setprecision(20)<<A<<" Mile ="<<setprecision(10)<<A*1.609<<" Kilometre";
    }

    void Meter(float A)
    {
        cout<<setprecision(20)<<A<<" Mile ="<<setprecision(10)<<A*1609<<" Meter";
    }

    void Centimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Mile ="<<setprecision(10)<<A*160934<<" Centimetre";
    }

    void Millimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Mile ="<<setprecision(10)<<A*(1.609e+6)<<" Millimetre";
    }

    void Micrometre(float A)
    {
        cout<<setprecision(20)<<A<<" Mile ="<<setprecision(10)<<A*(1.609e+9)<<" Micrometre";
    }

    void Nanometre(float A)
    {
        cout<<setprecision(20)<<A<<" Mile ="<<setprecision(10)<<A/(1.609e+12)<<" Nanometre";
    }

    void Yard(float A)
    {
        cout<<setprecision(20)<<A<<" Mile ="<<setprecision(10)<<A*1760<<" Yard";
    }

    void Foot(float A)
    {
        cout<<setprecision(20)<<A<<" Mile ="<<setprecision(10)<<A*5280<<" Foot";
    }

    void Inch(float A)
    {
        cout<<setprecision(20)<<A<<" Mile ="<<setprecision(10)<<A*63360<<" Inch";
    }

    void Nautical_Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Mile ="<<setprecision(10)<<A/1.151<<" Nautical_Mile";
    }
};

//Yard Class
class Yard
{
public:
    void Kilometre(float A)
    {
        cout<<setprecision(10)<<A<<" Yard ="<<setprecision(20)<<A/1904<<" Kilometre";
    }

    void Meter(float A)
    {
       cout<<setprecision(20)<<A<<" Yard ="<<setprecision(10)<<A/1.904<<" Meter";
    }

    void Centimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Yard ="<<setprecision(10)<<A*91.44<<" Centimetre";
    }

    void Millimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Yard ="<<setprecision(10)<<A*914<<" Millimetre";
    }

    void Micrometre(float A)
{
        cout<<setprecision(20)<<A<<" Yard ="<<setprecision(10)<<A*914400<<" Micrometre";
    }

    void Nanometre(float A)
    {
        cout<<setprecision(20)<<A<<" Yard ="<<setprecision(10)<<A*(9.144e+8)<<" Nanometre";
    }

    void Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Yard ="<<setprecision(10)<<A/1760<<" Mile";
    }

    void Foot(float A)
    {
        cout<<setprecision(20)<<A<<" Yard ="<<setprecision(10)<<A*3<<" Foot";
    }

    void Inch(float A)
    {
        cout<<setprecision(20)<<A<<" Yard ="<<setprecision(10)<<A*36<<" Inch";
    }

    void Nautical_Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Yard ="<<setprecision(10)<<A/2025<<" Nautical_Mile";
    }
};

//Foot Class
class Foot
{
public:
    void Kilometre(float A)
    {
        cout<<setprecision(20)<<A<<" Foot ="<<setprecision(10)<<A/3281<<" Kilometre";
    }

    void Meter(float A)
    {
        cout<<setprecision(20)<<A<<" Foot ="<<setprecision(10)<<A/3.281<<" Meter";
    }

    void Centimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Foot ="<<setprecision(10)<<A*30.48<<" Centimetre";
    }

    void Millimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Foot ="<<setprecision(10)<<A*305<<" Millimetre";
    }

    void Micrometre(float A)
    {
        cout<<setprecision(20)<<A<<" Foot ="<<setprecision(10)<<A*304800<<" Micrometre";
    }

    void Nanometre(float A)
    {
        cout<<setprecision(20)<<A<<" Foot ="<<setprecision(10)<<A*(3.048e+8)<<" Nanometre";
    }

    void Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Foot ="<<setprecision(10)<<A/5280<<" Mile";
    }

    void Yard(float A)
    {
        cout<<setprecision(20)<<A<<" Foot ="<<setprecision(10)<<A/3<<" Yard";
    }

    void Inch(float A)
    {
        cout<<setprecision(20)<<A<<" Foot ="<<setprecision(10)<<A*12<<" Inch";
    }

    void Nautical_Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Foot ="<<setprecision(10)<<A/6076<<" Nautical_Mile";
    }
};

//Inch Class
class Inch
{
public:
    void Kilometre(float A)
    {
        cout<<setprecision(20)<<A<<" Inch ="<<setprecision(10)<<A/39370<<" Kilometre";
    }

    void Meter(float A)
    {
        cout<<setprecision(20)<<A<<" Inch ="<<setprecision(10)<<A/39.37<<" Meter";
    }

    void Centimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Inch ="<<setprecision(10)<<A*2.54<<" Centimetre";
    }

    void Millimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Inch ="<<setprecision(10)<<A*25.4<<" Millimetre";
    }

    void Micrometre(float A)
    {
        cout<<setprecision(20)<<A<<" Inch ="<<setprecision(10)<<A*25400<<" Micrometre";
    }

    void Nanometre(float A)
    {
        cout<<setprecision(20)<<A<<" Inch ="<<setprecision(10)<<A*(2.54e+7)<<" Nanometre";
    }

    void Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Inch ="<<setprecision(10)<<A/63360<<" Mile";
    }

    void Yard(float A)
    {
        cout<<setprecision(20)<<A<<" Inch ="<<setprecision(10)<<A/36<<" Yard";
    }

    void Foot(float A)
    {
        cout<<setprecision(20)<<A<<" Inch ="<<setprecision(10)<<A/12<<" Foot";
    }

    void Nautical_Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Inch ="<<setprecision(10)<<A/72913<<" Nautical_Mile";
    }
};

//Nautical Mile Class
class Nautical_Mile
{
public:
    void Kilometre(float A)
    {
        cout<<setprecision(20)<<A<<" Nautical Mile ="<<setprecision(10)<<A*1.852<<" Kilometre";
    }

    void Meter(float A)
    {
        cout<<setprecision(20)<<A<<" Nautical Mile ="<<setprecision(10)<<A*1852<<" Meter";
    }

    void Centimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Nautical Mile ="<<setprecision(10)<<A*185200<<" Centimetre";
    }

    void Millimetre(float A)
    {
        cout<<setprecision(20)<<A<<" Nautical Mile ="<<setprecision(10)<<A*(1.852e+6)<<" Millimetre";
    }

    void Micrometre(float A)
    {
        cout<<setprecision(20)<<A<<" Nautical Mile ="<<setprecision(10)<<A*(1.852e+9)<<" Micrometre";
    }

    void Nanometre(float A)
    {
        cout<<setprecision(20)<<A<<" Nautical Mile ="<<setprecision(10)<<A*(1.852e+12)<<" Nanometre";
    }

    void Mile(float A)
    {
        cout<<setprecision(20)<<A<<" Nautical Mile ="<<setprecision(10)<<A*1.151<<" Mile";
    }

    void Yard(float A)
    {
        cout<<setprecision(20)<<A<<" Nautical Mile ="<<setprecision(10)<<A*2025<<" Yard";
    }

    void Foot(float A)
    {
        cout<<setprecision(20)<<A<<" Nautical Mile ="<<setprecision(10)<<A*6076<<" Foot";
    }

    void Inch(float A)
    {
        cout<<setprecision(20)<<A<<" Nautical Mile ="<<setprecision(10)<<A*72913<<" Nautical_Mile";
    }
};

int main()
{
    cout<<"    Data Transfer Rate Calculator\n___________________________________";
    cout<<"\n \n     Created By Ghanshyam Vaja \n";
    cout<<"___________________________________ \n";
    //Class Object
    Kilometre Km;
    Meter m;
    Centimetre cm;
    Millimetre Mm;
    Micrometre mm;
    Nanometre nm;
    Mile M;
    Yard Y;
    Foot F;
    Inch I;
    Nautical_Mile NM;
    //Class Object
    int Choice,Choice2;
    float A;

    do {
        cout<<"\n----->Convert From:\n \n";
        cout<<" 1-Kilometre        2-Meter \n";
        cout<<" 3-Centimetre       4-Millimetre \n";
        cout<<" 5-Micrometres      6-Nanometre \n";
        cout<<" 7-Mile             8-Yard \n";
        cout<<" 9-Foot            10-Inch \n";
        cout<<"11-Nautical Mile \n";
cout << " \n__________________________________ \n";
        cout<<"Enter Your Choice=";
        cin>>Choice;
cout << "__________________________________ \n";
        while(Choice<1||Choice>11)
        {
            cout << "\n__________________________________ \n";
            cout<<"Enter Valid Input=";
            cin>>Choice;
            cout << "__________________________________ \n";
        }
cout << "\n----------------------------------- \n";
        cout<<"Enter Length Amount=";
        cin>>A;
cout << "----------------------------------- \n";
        switch(Choice)
        {
        case 1:
            cout<<"\n----->Convert To:\n \n";
            cout<<" 1-Meter            2-Centimetre \n";
            cout<<" 3-Millimetre       4-Micrometre \n";
            cout<<" 5-Nanometre        6-Mile \n";
            cout<<" 7-Yard             8-Foot \n";
            cout<<" 9-Inch            10-Nautical Mile \n \n";

            cout<<"Enter Your Choice=";
            cin>>Choice2;
            while(Choice2<1||Choice2>=11)
            {
                cout<<"Enter Valid Input=";
                cin>>Choice2;
            }
            cout << "\n_______________Answer______________ \n";
            switch(Choice2)
            {
            case 1:
                Km.Meter(A);
                break;
            case 2:
                Km.Centimetre(A);
                break;
            case 3:
                Km.Millimetre(A);
                break;
            case 4:
                Km.Micrometre(A);
                break;
            case 5:
                Km.Nanometre(A);
                break;
            case 6:
                Km.Mile(A);
                break;
            case 7:
                Km.Yard(A);
                break;
            case 8:
                Km.Foot(A);
                break;
            case 9:
                Km.Inch(A);
                break;
            case 10:
                Km.Nautical_Mile(A);
                break;
            }
            cout<<"\n___________________________________ \n";
            break;

        case 2:
            cout<<"\n----->Convert To:\n \n";
            cout<<" 1-Kilometre        2-Centimetre \n";
            cout<<" 3-Millimetre       4-Micrometres \n";
            cout<<" 5-Nanometre        6-Mile \n";
            cout<<" 7-Yard             8-Foot \n";
            cout<<" 9-Inch            10-Nautical Mile \n \n";

            cout<<"Enter Your Choice=";
            cin>>Choice2;
            while(Choice2<1||Choice2>=11)
            {
                cout<<"Enter Valid Input=";
                cin>>Choice2;
            }
  cout << "\n_______________Answer______________ \n";
            switch(Choice2)
            {
            case 1:
                m.Kilometre(A);
                break;
            case 2:
                m.Centimetre(A);
                break;
            case 3:
                m.Millimetre(A);
                break;
            case 4:
                m.Micrometre(A);
                break;
            case 5:
                m.Nanometre(A);
                break;
            case 6:
                m.Mile(A);
                break;
            case 7:
                m.Yard(A);
                break;
            case 8:
                m.Foot(A);
                break;
            case 9:
                m.Inch(A);
                break;
            case 10:
                m.Nautical_Mile(A);
                break;
            }
            cout<<"\n___________________________________ \n";
            break;

        case 3:
            cout<<"\n----->Convert To:\n \n";
            cout<<" 1-Kilometre        2-Meter \n";
            cout<<" 3-Millimetre       4-Micrometres \n";
            cout<<" 5-Nanometre        6-Mile \n";
            cout<<" 7-Yard             8-Foot \n";
            cout<<" 9-Inch            10-Nautical Mile \n \n";

            cout<<"Enter Your Choice=";
            cin>>Choice2;
            while(Choice2<1||Choice2>=11)
            {
                cout<<"Enter Valid Input=";
                cin>>Choice2;
            }
            cout << "\n_______________Answer______________ \n";
            switch(Choice2)
            {
            case 1:
                cm.Kilometre(A);
                break;
            case 2:
                cm.Meter(A);
                break;
            case 3:
                cm.Millimetre(A);
                break;
            case 4:
                cm.Micrometre(A);
                break;
            case 5:
                cm.Nanometre(A);
                break;
            case 6:
                cm.Mile(A);
                break;
            case 7:
                cm.Yard(A);
                break;
            case 8:
                cm.Foot(A);
                break;
            case 9:
                cm.Inch(A);
                break;
            case 10:
                cm.Nautical_Mile(A);
                break;
            }
            cout<<"\n___________________________________ \n";
            break;

        case 4:
            cout<<"\n----->Convert To:\n \n";
            cout<<" 1-Kilometre        2-Meter \n";
            cout<<" 3-Centimetre       4-Micrometres \n";
            cout<<" 5-Nanometre        6-Mile \n";
            cout<<" 7-Yard             8-Foot \n";
            cout<<" 9-Inch            10-Nautical Mile \n \n";

            cout<<"Enter Your Choice=";
            cin>>Choice2;
            while(Choice2<1||Choice2>=11)
            {
                cout<<"Enter Valid Input=";
                cin>>Choice2;
            }
            cout << "\n_______________Answer______________ \n";
            switch(Choice2)
            {
            case 1:
                Mm.Kilometre(A);
                break;
            case 2:
                Mm.Meter(A);
                break;
            case 3:
                Mm.Centimetre(A);
                break;
            case 4:
                Mm.Micrometre(A);
                break;
            case 5:
                Mm.Nanometre(A);
                break;
            case 6:
                Mm.Mile(A);
                break;
            case 7:
                Mm.Yard(A);
                break;
            case 8:
                Mm.Foot(A);
                break;
            case 9:
                Mm.Inch(A);
                break;
            case 10:
                Mm.Nautical_Mile(A);
                break;
            }
            cout<<"\n___________________________________ \n";
            break;

        case 5:
            cout<<"\n----->Convert To:\n \n";
            cout<<" 1-Kilometre        2-Meter \n";
            cout<<" 3-Centimetre       4-Milimetre \n";
            cout<<" 5-Nanometre        6-Mile \n";
            cout<<" 7-Yard             8-Foot \n";
            cout<<" 9-Inch            10-Nautical Mile \n \n";
            cout<<"Enter Your Choice=";
            cin>>Choice2;
            while(Choice2<1||Choice2>=11)
            {
                cout<<"Enter Valid Input=";
                cin>>Choice2;
            }
            cout << "\n_______________Answer______________ \n";
            switch(Choice2)
            {
            case 1:
                mm.Kilometre(A);
                break;
            case 2:
                mm.Meter(A);
                break;
            case 3:
                mm.Centimetre(A);
                break;
            case 4:
                mm.Millimetre(A);
                break;
            case 5:
                mm.Nanometre(A);
                break;
            case 6:
                mm.Mile(A);
                break;
            case 7:
                mm.Yard(A);
                break;
            case 8:
                mm.Foot(A);
                break;
            case 9:
                mm.Inch(A);
                break;
            case 10:
                mm.Nautical_Mile(A);
                break;
            }
            cout<<"\n___________________________________ \n";
            break;

        case 6:
            cout<<"\n----->Convert To:\n \n";
            cout<<" 1-Kilometre        2-Meter \n";
            cout<<" 3-Centimetre       4-Milimetre \n";
            cout<<" 5-Micrometres      6-Mile \n";
            cout<<" 7-Yard             8-Foot \n";
            cout<<" 9-Inch            10-Nautical Mile \n \n";

            cout<<"Enter Your Choice=";
            cin>>Choice2;
            while(Choice2<1||Choice2>=11)
            {
                cout<<"Enter Valid Input=";
                cin>>Choice2;
            }
            cout << "\n_______________Answer______________ \n";
            switch(Choice2)
            {
            case 1:
                nm.Kilometre(A);
                break;
            case 2:
                nm.Meter(A);
                break;
            case 3:
                nm.Centimetre(A);
                break;
            case 4:
                nm.Millimetre(A);
                break;
            case 5:
                nm.Micrometre(A);
                break;
            case 6:
                nm.Mile(A);
                break;
            case 7:
                nm.Yard(A);
                break;
            case 8:
                nm.Foot(A);
                break;
            case 9:
                nm.Inch(A);
                break;
            case 10:
                nm.Nautical_Mile(A);
                break;
            }
            cout<<"\n___________________________________ \n";
            break;

        case 7:
            cout<<"\n----->Convert To:\n \n";
            cout<<" 1-Kilometre        2-Meter \n";
            cout<<" 3-Centimetre       4-Milimetre \n";
            cout<<" 5-Micrometres      6-Nanometre \n";
            cout<<" 7-Yard             8-Foot \n";
            cout<<" 9-Inch            10-Nautical Mile \n \n";

            cout<<"Enter Your Choice=";
            cin>>Choice2;
            while(Choice2<1||Choice2>=11)
            {
                cout<<"Enter Valid Input=";
                cin>>Choice2;
            }
            cout << "\n_______________Answer______________ \n";
            switch(Choice2)
            {
            case 1:
                M.Kilometre(A);
                break;
            case 2:
                M.Meter(A);
                break;
            case 3:
                M.Centimetre(A);
                break;
            case 4:
                M.Millimetre(A);
                break;
            case 5:
                M.Micrometre(A);
                break;
            case 6:
                M.Nanometre(A);
                break;
            case 7:
                M.Yard(A);
                break;
            case 8:
                M.Foot(A);
                break;
            case 9:
                M.Inch(A);
                break;
            case 10:
                M.Nautical_Mile(A);
                break;
            }
            cout<<"\n___________________________________ \n";
            break;

        case 8:
            cout<<"\n----->Convert To:\n \n";
            cout<<" 1-Kilometre        2-Meter \n";
            cout<<" 3-Centimetre       4-Milimetre \n";
            cout<<" 5-Micrometres      6-Nanometre \n";
            cout<<" 7-Mile             8-Foot \n";
            cout<<" 9-Inch            10-Nautical Mile \n \n";

            cout<<"Enter Your Choice=";
            cin>>Choice2;
            while(Choice2<1||Choice2>=11)
            {
                cout<<"Enter Valid Input=";
                cin>>Choice2;
            }
            cout << "\n_______________Answer______________ \n";
            switch(Choice2)
            {
            case 1:
                Y.Kilometre(A);
                break;
            case 2:
                Y.Meter(A);
                break;
            case 3:
                Y.Centimetre(A);
                break;
            case 4:
                Y.Millimetre(A);
                break;
            case 5:
                Y.Micrometre(A);
                break;
            case 6:
                Y.Nanometre(A);
                break;
            case 7:
                Y.Mile(A);
                break;
            case 8:
                Y.Foot(A);
                break;
            case 9:
                Y.Inch(A);
                break;
            case 10:
                Y.Nautical_Mile(A);
                break;
            }
            cout<<"\n___________________________________ \n";
            break;

        case 9:
            cout<<"\n----->Convert To:\n \n";
            cout<<" 1-Kilometre        2-Meter \n";
            cout<<" 3-Centimetre       4-Milimetre \n";
            cout<<" 5-Micrometres      6-Nanometre \n";
            cout<<" 7-Mile             8-yard \n";
            cout<<" 9-Inch            10-Nautical Mile \n \n";

            cout<<"Enter Your Choice=";
            cin>>Choice2;
            while(Choice2<1||Choice2>=11)
            {
                cout<<"Enter Valid Input=";
                cin>>Choice2;
            }
            cout << "\n_______________Answer______________ \n";
            switch(Choice2)
            {
            case 1:
                F.Kilometre(A);
                break;
            case 2:
                F.Meter(A);
                break;
            case 3:
                F.Centimetre(A);
                break;
            case 4:
                F.Millimetre(A);
                break;
            case 5:
                F.Micrometre(A);
                break;
            case 6:
                F.Nanometre(A);
                break;
            case 7:
                F.Mile(A);
                break;
            case 8:
                F.Yard(A);
                break;
            case 9:
                F.Inch(A);
                break;
            case 10:
                F.Nautical_Mile(A);
                break;
            }
            cout<<"\n___________________________________ \n";
            break;

            cout<<"\n----->Convert To:\n \n";
            cout<<" 1-Kilometre        2-Meter \n";
            cout<<" 3-Centimetre       4-Milimetre \n";
            cout<<" 5-Micrometres      6-Nanometre \n";
            cout<<" 7-Mile             8-yard \n";
            cout<<" 9-Foot            10-Nautical Mile \n \n";

            cout<<"Enter Your Choice=";
            cin>>Choice2;
            while(Choice2<1||Choice2>=11)
            {
                cout<<"Enter Valid Input=";
                cin>>Choice2;
            }
            cout << "\n_______________Answer______________ \n";
            switch(Choice2)
            {
            case 1:
                I.Kilometre(A);
                break;
            case 2:
                I.Meter(A);
                break;
            case 3:
                I.Centimetre(A);
                break;
            case 4:
                I.Millimetre(A);
                break;
            case 5:
                I.Micrometre(A);
                break;
            case 6:
                I.Nanometre(A);
                break;
            case 7:
                I.Mile(A);
                break;
            case 8:
                I.Yard(A);
                break;
            case 9:
                I.Foot(A);
                break;
            case 10:
                I.Nautical_Mile(A);
                break;
            }
            cout<<"\n___________________________________ \n";
            break;

        case 11:
            cout<<"\n----->Convert To:\n \n";
            cout<<" 1-Kilometre        2-Meter \n";
            cout<<" 3-Centimetre       4-Milimetre \n";
            cout<<" 5-Micrometres      6-Nanometre \n";
            cout<<" 7-Mile             8-yard \n";
            cout<<" 9-Foot            10-Inch \n \n";
            cout<<"Enter Your Choice=";
            cin>>Choice2;
            while(Choice2<1||Choice2>=11)
            {
                cout<<"Enter Valid Input=";
                cin>>Choice2;
            }
            cout << "\n_______________Answer______________ \n";
            switch(Choice2)
            {
            case 1:
                NM.Kilometre(A);
                break;
            case 2:
                NM.Meter(A);
                break;
            case 3:
                NM.Centimetre(A);
                break;
            case 4:
                NM.Millimetre(A);
                break;
            case 5:
                NM.Micrometre(A);
                break;
            case 6:
                NM.Nanometre(A);
                break;
            case 7:
                NM.Mile(A);
                break;
            case 8:
                NM.Yard(A);
                break;
            case 9:
                NM.Foot(A);
                break;
            case 10:
                NM.Inch(A);
                break;
            }
            cout<<"\n___________________________________ \n";
            break;
        }
    } while(1==1);
    return 0;
}