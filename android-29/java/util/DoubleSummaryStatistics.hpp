#pragma once

#include "../../JObject.hpp"

class JString;

namespace java::util
{
	class DoubleSummaryStatistics : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DoubleSummaryStatistics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DoubleSummaryStatistics(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		DoubleSummaryStatistics();
		DoubleSummaryStatistics(jlong arg0, jdouble arg1, jdouble arg2, jdouble arg3);
		
		// Methods
		void accept(jdouble arg0) const;
		void combine(java::util::DoubleSummaryStatistics arg0) const;
		jdouble getAverage() const;
		jlong getCount() const;
		jdouble getMax() const;
		jdouble getMin() const;
		jdouble getSum() const;
		JString toString() const;
	};
} // namespace java::util

