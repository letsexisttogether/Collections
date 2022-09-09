#include <iostream>
#include "ContainersDefines.h"

#pragma once

_CONTAINERS_BEGIN_
template<class _ArrayType>
class Array
{
private:
	_ArrayType* m_Data{};
	size_t m_Size{};

public:
	Array()
	{
		m_Data = new _ArrayType[m_Size];
	};
	Array(size_t size, _ArrayType element)
	{
		m_Size = size;
		m_Data = new _ArrayType[m_Size];
		for (size_t i = 0; i < m_Size; i++)
		{
			m_Data[i] = element;
		}
	}
	Array(size_t size)
	{
		Array(size, _ArrayType());
	}
	~Array()
	{
		std::cout << "Array destroyed\n";
	}

	size_t Size() const noexcept
	{
		return m_Size;
	}

	_ArrayType& operator [](int index) const noexcept
	{
		return m_Data[index];
	}
};
_CONTAINERS_END_
