#include <iostream>
#include <vector>

int main()
{
	size_t N;
	size_t imax = 0;
	std::vector<int> v;
	std::cin >> N;
	for (size_t i = 0; i < N; ++i)
	{
		int a;
		std::cin >> a;
		v.push_back(a);
	}
	int min = v[0];
    int max1 = v[0];
	for (size_t i = 0; i < v.size(); ++i)
		if (v[i] < min)
			min = v[i];
	int max2 = min;
	for (size_t i = 0; i < v.size(); ++i)
		if (v[i] > max1)
		{
			max1 = v[i];
			imax = i;
		}
	for (size_t i = 0; i < v.size(); ++i)
		if ((i != imax) && (v[i] == max1))
			max2 = max1;
		else
			if ((v[i] > max2) && (v[i] < max1))
				max2 = v[i];
	std::cout << max2 << std::endl;
	//system("pause");
	return 0;
}