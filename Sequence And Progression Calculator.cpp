#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;
int G;
long double AP(long double a,long double d,long double n)
{
    float Series,b,G;
    b=a;
    G=d;
    cout<<" \n";
    if(G==3)
    {
       cout<<"AP Terms:\n \n";
    }
    else
    {
        cout<<"AP Terms:\n \n";
    }
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            cout<<i+1<<" - "<<b<<"\n";
        }
        else
        {
            b+=G;
            Series=b;
            cout<<i+1<<" - "<<setprecision(30)<<Series<<"\n";
        }
    }


    cout<<" \n";
    long an;
    an=a+((n-1)*d);
    return an;
}
long double AP_Sum(long double a,long double d,long double n)
{
    float Series,b,G;
    b=a;
    G=d;
    cout<<" \n";
    cout<<" Terms:\n \n";
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            cout<<i+1<<" - "<<b<<"\n";
        }
        else
        {
            b+=G;
            Series=b;
            cout<<i+1<<" - "<<setprecision(30)<<Series<<"\n";
        }
    }
    cout<<"\n \n";
    long double Sum;
    Sum=(n/2)*(2*a+(n-1)*d);
    return Sum;
}

long double GP(long double a,long double r,long double n)
{
    long double Series,b,G;
    b=a;
    G=r;
    cout<<" \n";
    cout<<" Terms:\n \n";
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            cout<<i+1<<" - "<<b<<"\n";
        }
        else
        {
            b*=G;
            Series=b;
            cout<<i+1<<" - "<<setprecision(30)<<Series<<"\n";
        }
    }
    cout<<"\n"<<n<<"th Term In GP:\n"<<Series;
    cout<<" \n";
    long double an;
    r=pow(r,n-1);
    an=a*r;
    return an;
}

long double GP_Sum(long double a,long double r,long double n)
{
    long double Series,b,G;
    b=a;
    G=r;
    cout<<" \n";
    cout<<" Terms:\n \n";
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            cout<<i+1<<" - "<<b<<"\n";
        }
        else
        {
            b*=G;
            Series=b;
            cout<<i+1<<" - "<<setprecision(30)<<Series<<"\n";
        }
    }
    cout<<" \n";
   long double Sum;
    Sum=(a*(1-pow(r,n)))/(1-r);
    cout<<"\nSum Sn="<<Sum<<"\n";
    return Sum;
}

long double HP(long double a,long double d,long double n)
{
    float Series,b,G;
    b=a;
    G=d;
    cout<<" \n";
    cout<<"HP Terms:\n \n";
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            cout<<i+1<<" - "<<"1/"<<b<<"\n";
        }
        else
        {
            b+=G;
            Series=b;
            cout<<i+1<<" - "<<setprecision(30)<<"1/"<<Series<<"\n";
        }
    }


    cout<<" \n";
    long double an;
    an=a+((n-1)*d);
    return an;
}

long double A_Sequence(long double a,long double f,int n)
{

    float A;
    float A_S;
    cout<<" Terms:\n \n";
    A=a;
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            cout<<i+1<<" - "<<A<<"\n";
        }
        else
        {
            A+=f;
            cout<<i+1<<" - "<<setprecision(30)<<A<<"\n";
        }


    }
    cout<<" \n \n";

    for(int i=0; i<n; i++)
    {
        A_S=a+(f*(n-1));
    }
    return A_S;
}
long double A_Sequence_Sum(long double a,long double f,int n)
{
    float A_S;
    float Sum;

    for(int i=0; i<n; i++)
    {
        A_S=a+(f*(n-1));
    }

    Sum=(n*(a+A_S))/2;

    return Sum;
}

long double G_Sequence(long double a,long double r,int n)
{
    double A;
    A=a;
    cout<<" Terms:\n \n";

    for(int i=0; i<n-1; i++)
    {
        a*=r;
    }
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            cout<<i+1<<" - "<<A<<"\n";
        }
        else
        {
            A=A*r;
            cout<<i+1<<" - "<<setprecision(30)<<A<<"\n";
        }
    }


    printf(" \n");
    cout<<"Geometric Sequence="<<n<<"\nTerm:\n"<<A;
    return A;
}
long double G_Sequence_Sum(long double a,long double r,long double n)
{

    double G_S;
    G_S=(a*(1-pow(r,n)))/(1-r);
    cout<<"Sum Sn="<<setprecision(30)<<G_S<<" \n";
    return G_S;
}


long int Fibonacci(long int n)
{
    if (n<=1)
    {
        return n;
    }
    return Fibonacci(n-1) + Fibonacci(n-2);

}
long int Fibonacci_Sum(long int n)
{
    long int Sum=0;
    cout<<" Terms: \n \n";
    for(int i=1; i<n; i++)
    {
        if(i==1)
        {   
            cout<<i <<" - "<<Fibonacci(i-1)<<" \n";
            cout<<i+1 <<" - "<<Fibonacci(i)<<" \n";
        }
        else
        {
            cout<<i+1<<" - "<<Fibonacci(i)<<" \n";
        }
    }
    for(int i=0; i<=n; i++)
    {
        Sum+=Fibonacci(i);
    }
    cout<<"\n"<<n<<"th Value In Fibonacci Series:\n"<<Fibonacci(n)<<" \n";
    return Sum;
}

void AM()
{
    int n;
    float Sum=0,Mean;
    cout<<"Enter Number Of Observations=";
    cin>>n;
    float A[n];
    cout<<"\n";
    cout<<"NOTE:\nAll Inputs Has In Fully Ascending \nOr Decending Order \n \n";
    cout<<"Enter "<<n<<" Observations:\n";
    for(int i=0,K=0; i<n,K<n; i++,K++)
    {
        cout<<K+1<<" - ";
        cin>>A[i];
    }
    for(int i=0; i<n; i++)
    {
        Sum+=A[i];
    }
    cout<<" \n";
    cout<<"Sum="<<setprecision(30)<<Sum<<"\n";
    Mean=Sum/n;
    cout<<"Arithmetic Mean(AM)="<<setprecision(30)<<Mean<<" \n";
}



void GM()
{
    int n;
    long double Mean=1;
    cout<<"Enter Number Of Observations=";
    cin>>n;
    float A[n];
    cout<<"\n";
    cout<<"NOTE:\nAll Inputs Has In Fully Ascending \nOr Decending Order \n \n";
    cout<<"Enter "<<n<<" Observations:\n";

    for(int i=0,K=0; i<n,K<n; i++,K++)
    {
        cout<<K+1<<" - ";
        cin>>A[i];
    }
    for(int i=0; i<n; i++)
    {
        Mean=Mean*A[i];
    }
     cout<<" \n";
    for(int i=0; i<(n/2); i++)
    {
        Mean=sqrt(Mean);
    }
    cout<<"Geometric Mean(GM)="<<setprecision(30)<<Mean<<" \n";
}


void HM()
{
    int n;
    long double Mean=0;
    cout<<"Enter Number Of Observations=";
    cin>>n;
    float A[n];
    cout<<"\n";
    cout<<"NOTE:\nAll Inputs Has In Fully Ascending \nOr Decending Order \n \n";
    cout<<"Enter "<<n<<" Observations:\n";
    for(int i=0,K=0; i<n,K<n; i++,K++)
    {
        cout<<K+1<<" - ";
        cin>>A[i];
    }
    for(int i=0; i<n; i++)
    {
        Mean+=1/A[i];
    }
    cout<<" \n";
    Mean=n/Mean;
    cout<<"Harmonic Mean(HM)="<<setprecision(30)<<Mean;
}

int main()
{
    long double a,d,f,r,n;
    int Choice,n1;
    long int R1,R2;
   long double a1,a2;
    cout<<"Sequence And Progression Calculator\n___________________________________\n\n    Created By Ghanshyam Vaja\n___________________________________\n\n";
    cout<<"1-Arithmetic Progression\n2-Geomatric Progrssion\n3-Harmonic Progression\n4-Sum Of Arithmetic Progression\n5-Sum Of Geometric Progression\n6-Arithmetic Sequence\n7-Geometric Sequence\n8-Fibonacci Sequence\n9-Arithmetic Mean\n10-Geometric Mean\n11-Harmonic Mean \n";
    cout<<"\n";
    cout<<"Enter Your Choice=";
    cin>>Choice;
    G=Choice;
    while(Choice<1||Choice>11)
    {
        cout<<"Enter Valid Input=";
        cin>>Choice;
    }
    if(Choice<9&&Choice<10&&Choice<11)
    {
        if(Choice==8)
        {
            cout<<"Enter n Term In integer Value(an):\n";
            cin>>R1;
        }
        else
        {
            if(Choice==3)
            {
                cout<<"Enter First AP Term(a1)=";
                cin>>a1;
            }
            else if(Choice==2 || Choice==7 || Choice==5)
            {
                cout<<"Enter First Term(a1)=";
                cin>>a1;
            }
            else
            {
                cout<<"Enter First Term(a1)=";
                cin>>a1;
            }
            if(Choice==1 || Choice==3 || Choice==4)
            {
                cout<<"Enter Common Difference(d)=";
                cin>>d;
            }
            else if(Choice==6)
            {
                cout<<"Enter Common Difference(f)=";
                cin>>f;
            }
            else
            {
                cout<<"Enter Ratio(r)=";
                cin>>r;
            }
            if(Choice==6 || Choice==7)
            {
                cout<<"Enter nth Term In Integer(an)=";
                cin>>n1;
            }
            else
            {
                cout<<"Enter nth Term(an)=";
                cin>>n;
            }
        }
    }
    cout<<"\n";
    long double A=n;
    switch(Choice)
    {
    case 1:
    a2=AP(a,d,n);
        cout<<A<<"th Term Of AP:\n"<<a2;
        break;

    case 2:
        GP(a1,r,n);
        break;

    case 3:
    a2=AP(a1,d,n);
        cout<<"\n"<<A<<"th Term Of AP:\n"<<a2<<" \n";
        a2=HP(a,d,n);
        cout<<"\n"<<A<<"th Term Of HP:\n"<<"1/"<<a2;
        break;

    case 4:
        a2=AP(a1,d,n);
        cout<<"Sum Sn="<<a2<<" \n";
        break;

    case 5:
        GP_Sum(a1,r,n);
        break;

    case 6:
    a2=A_Sequence(a1,f,n1);
        cout<<"\nArithmetic Sequence "<<a1<<"th Term="<<a2<<" \n \n";
        a2=A_Sequence_Sum(a1,f,n1);
        cout<<"Sum Sn="<<a2<<" \n";
        break;

    case 7:
        G_Sequence(a1,r,n1);
        G_Sequence_Sum(a1,r,n1);
        break;

    case 8:
    R2=Fibonacci_Sum(R1);
    cout<<"Sum="<<R2<<" \n";
        break;

    case 9:
        AM();
        break;

    case 10:
        GM();
        break;

    case 11:
        HM();
        break;

    }

}