#include <iostream>
#include <cstdlib>

using namespace std;


void hanoi(int, int, int, int); // 函數原型宣告

int main(void)
{
    int j;
	
	cout<<"請輸入盤子數量:";
	cin>>j;//輸入盤子數量
	
	hanoi(j,1, 2, 3);           // 呼叫遞迴函數
	
	return 0;
}

void hanoi(int n, int p1, int p2, int p3)
{
    if (n==1) // 遞迴出口
	    cout<<"盤子從 "<<p1<<" 移到"<<p3<<endl;
	else      // 反覆執行過程
	{
	    hanoi(n-1, p1, p3, p2);
		cout<<"盤子從 "<<p1<<" 移到"<<p3<<endl;
		hanoi(n-1, p2, p1, p3);
    }
}
