#include "dod.h"
#include "var.h" 
using namespace nsVar;
void nsDod::dod() {
	a *= ((x - 1) * (x - 1)) / ((x + 1) * (x + 1)) * (2.0 * n - 1) / (2.0 * n + 1);
}