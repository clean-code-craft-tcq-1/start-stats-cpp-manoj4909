#include "stats.h"
Statistics::Stats::ComputeStatistics(const std::vector<float>& values) 
{
    calc.c ={0.0F,0.0F,0.0F};
	float total = 0.0F;
	for(int i=0; i<values.size(); i++)
    {   
      total = total + values[i];
    }
    c.average = total/values.size();
    c.minimum = *min_element(values.begin(),values.end());
    c.maximum = *max_element(values.begin(),values.end());
    return c;
    //Implement statistics here
}
