#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	short int number1=0300;//
	int number2=0x33f;
	long int number3=-123456789;
	unsigned long int number4=987654321;
	cout<<"短整數="<<number1<<"所佔位元組"<<sizeof(number1)<<endl;
	cout<<"整數="<<number2<<"所佔位元組"<<sizeof(number2)<<endl;
	cout<<"長整數="<<number3<<"所佔位元組"<<sizeof(number3)<<endl;
	cout<<"無號長整數="<<number4<<"所佔位元組"<<sizeof(number4)<<endl;
	return 0;
}
//短整數=192所佔位元組2
//整數=831所佔位元組4
//長整數=-123456789所佔位元組4
//無號長整數=987654321所佔位元組4
