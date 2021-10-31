#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class IntSummaryStatistics : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IntSummaryStatistics(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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

