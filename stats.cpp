#include "stats.h"

#include <algorithm>

using namespace Statistics;



Stats Statistics::ComputeStatistics(const std::vector<float>& vect) {



std::vector<float>::const_iterator itr = vect.begin();

Stats S;

float total = 0.0F;

S.min = *std::min_element(vect.begin(),vect.end());

S.max = *std::max_element(vect.begin(),vect.end());



for( ; itr!=vect.end(); ++itr)

{

total = total + *itr;

}



S.average = total / vect.size() ;

return S;

}

