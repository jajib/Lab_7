#include <iostream>
#include <list>

struct Dweller
{
	std::string name;
	bool state;

	bool next_news(bool news)
	{
		return (state == news ? true : false);
	};
};

int main ()
{
	int N_people;
	bool zero_news_bool;
	
	std::cin >> N_people;
	std::cin >> zero_news_bool;
	
	std::list<Dweller> people;
	
	Dweller buf;
	
	for(int cnt = 0; cnt < N_people; cnt++)
	{
		std::cin >> buf.name;
		std::cin >> buf.state;
		
		people.push_back(buf);
	}
	
	int M_days;
	std::cin >> M_days;
	
	std::list<Dweller>::iterator it = people.begin();
	int last_news = zero_news_bool;
	bool death = false;
	for (int i = 0; i < M_days && people.size() > 1; i++)
	{	
		death = false;
		
		last_news = it->next_news(last_news);
		
		if (it->state != last_news)
		{
			if (it->state == true)
			{
				it = people.erase(it);
				death = true;
			} 
			else
			{
				it->state = true;
			}
		}		
			
		if (death == false)
		{
			it++;	
		}
		if (it == people.end())
		{
			it = people.begin();
		}
	}

	for(it = people.begin(); it != people.end(); ++it)
	{
		std::cout << it->name << " " << it->state << "\n";
	}
}