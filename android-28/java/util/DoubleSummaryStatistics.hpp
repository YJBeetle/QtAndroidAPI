#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class DoubleSummaryStatistics : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DoubleSummaryStatistics(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DoubleSummaryStatistics(QJniObject obj);
		
		// Constructors
		DoubleSummaryStatistics();
		DoubleSummaryStatistics(jlong arg0, jdouble arg1, jdouble arg2, jdouble arg3);
		
		// Methods
		void accept(jdouble arg0);
		void combine(java::util::DoubleSummaryStatistics arg0);
		jdouble getAverage();
		jlong getCount();
		jdouble getMax();
		jdouble getMin();
		jdouble getSum();
		jstring toString();
	};
} // namespace java::util

