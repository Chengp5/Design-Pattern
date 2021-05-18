#include"Customer.h"
/// <summary>
/// an example of prototype pattern
/// 
///
/// </summary>
void main()
{
	Customer* c1 = new Customer("fuan");
	Customer* c2 = c1->clone();
	Customer* c3 = c1->deepClone();
	std::cout << (c1->address)<<"\n"<<(c2->address)<<"\n" <<c3->address<<"\n";
	
}