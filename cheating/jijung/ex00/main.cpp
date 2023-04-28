#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony	onthestack = Pony("stack pony", "apple", "delicious");
	onthestack.eat();
	onthestack.speak();
}

void	ponyOnTheHeap(void)
{
	Pony	*ontheheap = new Pony("heap pony", "pepper", "spicy");
	if (ontheheap == NULL)
	{
		std::cout << "Allocation failure" << std::endl;
		return ;
	}
	ontheheap->eat();
	ontheheap->speak();
	delete ontheheap;
}

int		main(void)
{
	std::cout << "ponyOnTheStack" << std::endl;
	ponyOnTheStack();
	std::cout << std::endl;
	std::cout << "ponyOnTheHeap" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl;
	std::cout << "End" << std::endl;

	return (0);
}
