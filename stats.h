#include <vector>

namespace Statistics {

struct Stats
{
float min;

float max;

float average;

Stats()
{
min = 0.0f;
max = 0.0f;
average = 0.0f;
}
}

Stats ComputeStatistics(const std::vector<float>& vect);
}

