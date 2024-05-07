#include <iostream>
using namespace std; 
int main(){
int varA=25;
int varB=100;
cout << "VarA before swap: " <<varA << endl;//VarA is 25
cout << "VarB before swap: "<< varB<<endl;//VarB is 100
SwapNumbers(varA,varB);
cout <<"Var after swap: "<<varA<<endl;//VarA is 100
cout <<"Var aftee swap: "<<varB<<endl;//VarB is 25
return 0;
}