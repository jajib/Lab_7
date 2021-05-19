#include <iostream>

int main()
{
	int a, b, c, d, ans, mark;
	
	std::cin >> a >> b >> c >> d >> ans;
	
	bool is_ans_to_first = 0, is_ans_to_second = 0;

	if (a + ans == b)
	{
		is_ans_to_first = 1;
	}
	
	if (c * ans == d)
	{
		is_ans_to_second = 1;
	}
	
	if (is_ans_to_first + is_ans_to_second == 1)
	{
		mark = 4;
	}
	else if (is_ans_to_first + is_ans_to_second == 2)
	{
		mark = 5;
	}
	else if(ans == 1024 && is_ans_to_first + is_ans_to_second == 0)
	{
		mark = 3;
	}
	else
	{
		mark = 2;
	}	

	std::cout << mark;
}