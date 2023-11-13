#include <iostream>
#include <list>
#include <vector>

template<typename Container>
void Print(const Container& container,const std::string& delimeter)
{
	auto iter=container.begin();
	if(iter!=container.end())
	{
		std::cout<<*iter;
		++iter;
	}
	for(;iter!=container.end();++iter)
	{
		std::cout<<delimeter<<*iter;
	}
}
int main()
{
	std::vector<int>vec={1,2,3,4,5};
	Print(vec,", ");
	
	return 0;
}
