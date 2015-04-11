#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <fstream>

bool myfunction (int i,int j) { return (i<j); }

struct myclass {
  bool operator() (int i,int j) { return (i>j);}
} myobject;

int main(){
	
	int sum=0, tmp;
	std::vector<int>CowVector;
	std::ifstream ifs ("file.in",std::ifstream::in);
	while(ifs>>tmp)
	{
		CowVector.push_back(tmp);
	}

	std::sort(CowVector.begin(),CowVector.end(),myobject);
	
	for(std::vector<int>::iterator it=CowVector.begin();it!=CowVector.begin()+5;++it){
		sum+=*it;
		std::cout<<' '<<*it;
	//	std::cout<<' '<<sum;
		std::cout<<' ';
	}
	std::cout<<'\n';
	std::cout<<' '<<sum;								
	std::cout<<'\n';
return 0;
}
