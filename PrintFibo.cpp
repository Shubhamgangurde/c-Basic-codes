#include<iostream>
using namespace::std;
class FibonacciDemo{
	
	public :
		
	static void printFibo(int a,int b,int n){
	
		if(n == 0){
			
			return ;
		}
		
		int c = a + b;
		
		cout<<c<<endl;
		
		printFibo(b,c,n-1);
		
	}
	
};

int main(){
	
	int a=0;
	int b=1;
	cout<<a<<endl<<b<<endl;
	int n=10;
	
	FibonacciDemo obj;
	
	obj.printFibo(a,b,n-2);	
	
	return 0;
}