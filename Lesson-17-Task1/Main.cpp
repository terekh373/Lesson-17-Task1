#include "Computer.h"
#include <vector>

int main()
{
	vector<Computer> arr;
	arr.push_back(Computer("HP", 1.2, 4, 0, 20000));
	arr.push_back(Computer("Acer", 3.2, 16, 0, 35000));
	arr.push_back(Computer("Samsung", 2.4, 8, 1, 27000));
	arr.push_back(Computer("HP", 3.2, 32, 1, 29000));

	for (int i = 0; i < arr.size(); i++)
	{
		arr[i].show();
	}

	cout << "PCs with RAM more than 10:\n";
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i].getRam() > 10)
		{
			arr[i].show();
		}
	}
}