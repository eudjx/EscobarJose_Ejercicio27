#include <iostream>
#include <cmath>
using namespace std;

/* Tomando w=1 */
double Euler( double t, double dt)
{
    return exp(-t) - dt*exp(-t);
}

double Impl(double t, double dt)
{
    return exp(-t) - dt*exp(-t+1);
    
}

int main()
{
    //double res1;
    //double res2;
    //double dt;
    //cout<<"Ingrese el salto que desea. Escoja entre 0.1, 0.01 y 1: "<<endl;
    //cin>>dt;
     cout<<"Los valores son:"<<endl;
    cout<<"Con Euler: "<<endl;
	cout<<"Para 0.1: "<<endl;
    for (double i=0; i<4;i+=0.1)
    {
		double res1;
       res1= Euler(i, 0.1);
        cout.precision(17);
    cout<<res1<<endl;
    }
    cout<<"Para 0.01: "<<endl;
    for (double i=0; i<4;i+=0.01)
    {
       double res1;
       res1=Euler(i, 0.01);
        cout.precision(17);
    cout<<res1<<endl;
    }
	cout<<"Para 1: "<<endl;
	for (double i=0; i<4;i+=1)
    {
       double res1;
       res1=Euler(i, 1);
        cout.precision(17);
    cout<<res1<<endl;
    }
	
	cout<<"Con Implícito: "<<endl;
	cout<<"Para 0.1: "<<endl;
	for (double i=0; i<4;i+=0.1)
    {
       double res2;
       res2=Impl(i, 0.1);
        cout.precision(17);
    cout<<res2<<endl;
    }
	cout<<"Para 0.01: "<<endl;
	for (double i=0; i<4;i+=0.01)
    {
       double res2;
       res2=Impl(i, 0.01);
        cout.precision(17);
    cout<<res2<<endl;
    }
	cout<<"Para 1: "<<endl;
	for (double i=0; i<4;i+=1)
    {
       double res2;
       res2=Impl(i, 1);
        cout.precision(17);
    cout<<res2<<endl;
    }
 cout.precision(17);
  //cout<<"El error con Euler: "<<res1-exp(-4)<<endl;
//cout<<"El error con Implícito: "<<res2-exp(-4)<<endl;
    
    
    return 0;
}
