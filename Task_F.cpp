#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;
	
	std::vector<int>goblins;
	std::vector<int>output;
	
	char c_buf;
	int buf;
	
	for (int i = 0; i < n; i++)
	{
		std::cin >> c_buf;
		if (c_buf == '+')
		{
			std::cin >> buf;
			goblins.push_back(buf); 
		}
		else if (c_buf == '*')
		{
			std::cin >> buf;
			goblins.insert(goblins.begin() + (goblins.size() + 1) / 2, buf);
		}
		else if (c_buf == '-')
		{
			output.push_back(goblins[0]);
			goblins.erase(goblins.begin());
		}
	}
	
	for (auto i: output)
	{
		std::cout << i << "\n";
	}
}