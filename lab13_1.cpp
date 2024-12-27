#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}

void stat(const double x[],int y,double z[]){
    double sum =0.0;  
    for(int i = 0 ; i<y ; i++){
        sum += x[i];
    }
    
    double product = 1.0; 
    for(int i = 0 ; i<y ; i++){
        product *= x[i];
    }

    double mean = 0.0;  
    for(int i = 0 ; i<y ; i++){
        mean += pow(x[i]-(sum/y),2);
    }


    double fraction = 0.0; 
    for(int i = 0 ; i<y ; i++){
        fraction += 1.0/x[i];
    }

    double max = x[0] , min = x[0];
    for(int i = 1 ; i<y ; i++){
        if(x[i]>max) max = x[i];
        if(x[i]<min) min = x[i];
    }
    
    
     z[0] = sum/y;  

     z[1] = pow((mean/y),0.5) ; 

     z[2] = pow(product , 1.0/y);  
     
     z[3] = y/fraction; 

     z[4] = max;
    
     z[5] = min;

    
}
