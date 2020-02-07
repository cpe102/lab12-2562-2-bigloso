#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double A[],int N,double B[]){
    double max =A[0] ,min =A[0] ;
    float sum=0 ,sum1=0 ,a=0,b=0,c=0 ;
    for(int i=0;i<N;i++){
        if(A[i] > max){
            max =A[i];
            B[2] = max ;
        }
        if(A[i] < min){
            min =A[i];
            B[3] = min ;
        }
    }
    for(int j=0;j<N;j++){
        sum += A[j];
        sum1 += pow(A[j],2) ;
    }
    B[0]= sum/N;
    a = sum1/N;
    b =pow(sum,2) ;
    B[1] = sqrt(a-(pow(sum/N,2)));

}