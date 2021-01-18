#include <iostream>
#include <cstdlib>
using namespace std;


class Myclass
{
	private:
	    int number;
	    int payment;
	    
	public:
	   Myclass();
	   Myclass (int h,int m)
	   {
	   	   number = h;
	   	   payment = m;
		};
	void print_data()
	{
		
		cout<<number<<endl;
		cout<<payment<<endl;
		
	};	    
	
};



int main()
{
	Myclass c1(1001,18000);
	c1.print_data();
	
	Myclass c2(1002,25000);
	c2.print_data();
	
	system("Pause");
	return 0;
}
