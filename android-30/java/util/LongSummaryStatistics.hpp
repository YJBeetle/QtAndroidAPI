#pragma once

#include "../../JObject.hpp"

class JString;

namespace java::util
{
	class LongSummaryStatistics : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LongSummaryStatistics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LongSummaryStatistics(QJniObject obj);
		
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
		JString toString();
	};
} // namespace java::util

