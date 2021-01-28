#include <vector>

namespace Statistics {

	struct calc
	{
		float minimum;
		float maximum;
		float average;
		
	};
    Stats ComputeStatistics(const std::vector<float>& values);
}
