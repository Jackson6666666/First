#include <iostream>
#include <cmath>
using namespace std;
bool judge(int n){
		if(n<3)
			return false;
		else{
			int sum=sqrt(n);
		//	cout<<sqrt(199)<<endl;
			for(int i=2;i<=sum;i++)
				if(n%i==0)
					return false;
		}
		return true;
	}

void Aisitoe(int used[],bool index[],int n){
	if(used[1]==1){
		index[1]==0;
	}

	for(int i=3;i<sqrt(n);i+=2)//aisitoe算法 
	{
		
		for(int j=i*i;j<=n;j+=i){
			index[j]=0;
		}	
	}	
		
}
int main(){
	//cout<<"请输入您想检索的数字"<<endl;
	int x=0;
	cin>>x; 
	int used[x+1];
	bool index[x+1];
	int Euler;
	for(int i=1;i<=x;i++)
	{
		used[i]=i;
		index[i]=1;
	}
	Aisitoe(used,index,x);//筛一遍 
	if(judge(x)==1){//如果x是质数 
		cout<<x-1;
	}
	else if(x==2)
		cout<<1;
	else{//如果是合数 
		Euler=x;
		if(x%2==0)
			Euler=Euler/2;
		//cout<<endl;
		for(int i=3;i<=x;i++){
			
			
			if(index[i]==1&&used[i]%2!=0&&used[i]<=x/2){
					
				if(x%used[i]==0)
					Euler=(Euler/used[i])*(used[i]-1);
				
			}
		}
		cout<<Euler;
	} 
	
	
	
	
	
	
		
}
