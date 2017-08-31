#pragma once

template<class T>
class Container
{
private:
	std::vector<T> vect;
public:
	Container()
	{
		vect = std::vector<T>();
	}

	Container(int size)
	{
		vect = std::vector<T>(size);
	}

	~Container()
	{}

	void add(T elem)
	{
		vect.push_back(elem);
	}
}