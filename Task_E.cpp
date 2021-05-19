#include <iostream>
#include <vector>
#include <cmath>

int main ()
{
	std::vector<std::vector<int>> data;
	int n;
	std::cin >> n;
	
	std::vector<std::vector<int>> result;
	
	int buf;
	
	std::vector<int> empty;
	std::vector<int> zeros (n, 0);
	for (int i = 0; i < n; i++)
	{
		data.push_back(empty);
		result.push_back(zeros);
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> buf;
			data[i].push_back(buf);
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			result[j][n-i-1] = data[i][j];
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << result[i][j] << " ";
		}
		std::cout << "\n";
	}
}