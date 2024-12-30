#include "updater.h"
#include <string>
#include "calc.h"

std::string Updater::GetText()
{
	return std::to_string(Calc::Sum(8, 3, true));
}