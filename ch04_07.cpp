#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    int i,j,tmp;
    int data[8]={26,35,49,37,12,8,45,63};
    
	cout<<"氣泡排序法:"<<endl<<"原始資料為:";
	
	for (i=0;i<8;i++)
	    cout<<data[i]<<"\t";    
    cout<<endl;
    
    for (i=7;i>0;i--)
    {
	
	    for (j=0;j<i;j++)
	    {
		    if (data[j]>data[j+1])
		    
		    {
			    tmp=data[j];
                data[j]=data[j+1];
			    data[j+1]=tmp;
		      
		    }
	    }
    }
    cout<<"排序後結果為:  ";
	
	for(i=0;i<8;i++)
	   cout<<data[i]<<"\t";
	   cout<<endl;
	   
	   return 0;
}

	    
    

		
