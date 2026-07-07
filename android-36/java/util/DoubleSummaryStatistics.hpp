#pragma once

#include "../../JString.hpp"
#include "./DoubleSummaryStatistics.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline DoubleSummaryStatistics::DoubleSummaryStatistics()
		: JObject(
			"java.util.DoubleSummaryStatistics",
			"()V"
		) {}
	inline DoubleSummaryStatistics::DoubleSummaryStatistics(jlong arg0, jdouble arg1, jdouble arg2, jdouble arg3)
		: JObject(
			"java.util.DoubleSummaryStatistics",
			"(JDDD)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline void DoubleSummaryStatistics::accept(jdouble arg0) const
	{
		callMethod<void>(
			"accept",
			"(D)V",
			arg0
		);
	}
	inline void DoubleSummaryStatistics::combine(java::util::DoubleSummaryStatistics arg0) const
	{
		callMethod<void>(
			"combine",
			"(Ljava/util/DoubleSummaryStatistics;)V",
			arg0.object()
		);
	}
	inline jdouble DoubleSummaryStatistics::getAverage() const
	{
		return callMethod<jdouble>(
			"getAverage",
			"()D"
		);
	}
	inline jlong DoubleSummaryStatistics::getCount() const
	{
		return callMethod<jlong>(
			"getCount",
			"()J"
		);
	}
	inline jdouble DoubleSummaryStatistics::getMax() const
	{
		return callMethod<jdouble>(
			"getMax",
			"()D"
		);
	}
	inline jdouble DoubleSummaryStatistics::getMin() const
	{
		return callMethod<jdouble>(
			"getMin",
			"()D"
		);
	}
	inline jdouble DoubleSummaryStatistics::getSum() const
	{
		return callMethod<jdouble>(
			"getSum",
			"()D"
		);
	}
	inline JString DoubleSummaryStatistics::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
