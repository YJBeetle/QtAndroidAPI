#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class IntSummaryStatistics : public __JniBaseClass
	{
	public:
		// Fields
		
		IntSummaryStatistics(QAndroidJniObject obj);
		// Constructors
		IntSummaryStatistics();
		IntSummaryStatistics(jlong arg0, jint arg1, jint arg2, jlong arg3);
		
		// Methods
		void accept(jint arg0);
		void combine(java::util::IntSummaryStatistics arg0);
		jdouble getAverage();
		jlong getCount();
		jint getMax();
		jint getMin();
		jlong getSum();
		jstring toString();
	};
} // namespace java::util

