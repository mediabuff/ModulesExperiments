
#pragma once

#include "abstractfruit_export.h"

class ABSTRACTFRUIT_EXPORT AbstractFruit
{
public:
	void grow();

	virtual bool isForFruitSalad() const = 0;
};
