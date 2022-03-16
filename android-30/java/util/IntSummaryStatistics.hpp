#pragma once

#include "../../JString.hpp"
#include "./IntSummaryStatistics.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline IntSummaryStatistics::IntSummaryStatistics()
		: JObject(
			"java.util.IntSummaryStatistics",
			"()V"
		) {}
	inline IntSummaryStatistics::IntSummaryStatistics(jlong arg0, jint arg1, jint arg2, jlong arg3)
		: JObject(
			"java.util.IntSummaryStatistics",
			"(JIIJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline void IntSummaryStatistics::accept(jint arg0) const
	{
		callMethod<void>(
			"accept",
			"(I)V",
			arg0
		);
	}
	inline void IntSummaryStatistics::combine(java::util::IntSummaryStatistics arg0) const
	{
		callMethod<void>(
			"combine",
			"(Ljava/util/IntSummaryStatistics;)V",
			arg0.object()
		);
	}
	inline jdouble IntSummaryStatistics::getAverage() const
	{
		return callMethod<jdouble>(
			"getAverage",
			"()D"
		);
	}
	inline jlong IntSummaryStatistics::getCount() const
	{
		return callMethod<jlong>(
			"getCount",
			"()J"
		);
	}
	inline jint IntSummaryStatistics::getMax() const
	{
		return callMethod<jint>(
			"getMax",
			"()I"
		);
	}
	inline jint IntSummaryStatistics::getMin() const
	{
		return callMethod<jint>(
			"getMin",
			"()I"
		);
	}
	inline jlong IntSummaryStatistics::getSum() const
	{
		return callMethod<jlong>(
			"getSum",
			"()J"
		);
	}
	inline JString IntSummaryStatistics::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

// Base class headers

