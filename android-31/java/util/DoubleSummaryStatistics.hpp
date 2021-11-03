#pragma once

#include "../../JObject.hpp"

class JString;

namespace java::util
{
	class DoubleSummaryStatistics : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DoubleSummaryStatistics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
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
		JString toString();
	};
} // namespace java::util

