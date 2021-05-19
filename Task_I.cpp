#include <iostream>
#include <vector>

int swap(int* a, int* b)
{
	int buf = *a;
	*a = *b;
	*b = buf;
}

int main()
{
	std::vector<int>even;
	std::vector<int>not_even;

	int buf;
	
	while (std::cin >> buf)
	{
		if (buf % 2 == 0)
		{
			even.push_back(buf);
		}
		else
		{
			not_even.push_back(buf);
		}
	}
	
	for (int i = 0; i < even.size(); i++)
	{
		for (int j = i+1; j < even.size(); j++)
		{
			if (even[i] > even[j])
			{
				swap(&(even[i]), &(even[j]));
			}
		}
	}

	for (int i = 0; i < not_even.size(); i++)
	{
		for (int j = i+1; j < not_even.size(); j++)
		{
			if (not_even[i] > not_even[j])
			{
				swap(&(not_even[i]), &(not_even[j]));
			}
		}
	}
	
	for (auto i: even)
	{
		std::cout << i << " ";
	}
	
	for (auto i: not_even)
	{
		std::cout << i << " ";
	}
}