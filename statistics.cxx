#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;
 
void random(double* x, const int N){
  for(int i=0; i<N; i++){
    int rand();
    x[i]=rand()/ double(RAND_MAX);
  }
}
void calc(double* x, double& mean, double& var, const int N){
  mean=0;
  var=0;
  for(int i=0; i<N; i++)
    mean=mean + x[i];
  mean=mean/N;
  for(int i=0; i<N; i++)
    var= var + pow((x[i]-mean),2);
  var=var/N;
}  
  

int main(){
   const int N = 100;
   double p[N];
   double mean, var;

   random(p,N);
   calc(p,mean,var,N);
   
   //for(int i=0; i<N; i++)     just checked my random numbers
   //  cout << p[i] << endl;

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
