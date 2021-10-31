#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class LongSummaryStatistics : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LongSummaryStatistics(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LongSummaryStatistics(QAndroidJniObject obj);
		
		// Constructors
		LongSummaryStatistics();
		LongSummaryStatistics(jlong arg0, jlong arg1, jlong arg2, jlong arg3);
		
		// Methods
		void accept(jint arg0);
		void accept(jlong arg0);
		void combine(java::util::LongSummaryStatistics arg0);
		jdouble getAverage();
		jlong getCount();
		jlong getMax();
		jlong getMin();
		jlong getSum();
		jstring toString();
	};
} // namespace java::util
