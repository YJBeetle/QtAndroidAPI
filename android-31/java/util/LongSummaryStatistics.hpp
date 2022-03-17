#pragma once

#include "../../JString.hpp"
#include "./LongSummaryStatistics.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline LongSummaryStatistics::LongSummaryStatistics()
		: JObject(
			"java.util.LongSummaryStatistics",
			"()V"
		) {}
	inline LongSummaryStatistics::LongSummaryStatistics(jlong arg0, jlong arg1, jlong arg2, jlong arg3)
		: JObject(
			"java.util.LongSummaryStatistics",
			"(JJJJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline void LongSummaryStatistics::accept(jint arg0) const
	{
		callMethod<void>(
			"accept",
			"(I)V",
			arg0
		);
	}
	inline void LongSummaryStatistics::accept(jlong arg0) const
	{
		callMethod<void>(
			"accept",
			"(J)V",
			arg0
		);
	}
	inline void LongSummaryStatistics::combine(java::util::LongSummaryStatistics arg0) const
	{
		callMethod<void>(
			"combine",
			"(Ljava/util/LongSummaryStatistics;)V",
			arg0.object()
		);
	}
	inline jdouble LongSummaryStatistics::getAverage() const
	{
		return callMethod<jdouble>(
			"getAverage",
			"()D"
		);
	}
	inline jlong LongSummaryStatistics::getCount() const
	{
		return callMethod<jlong>(
			"getCount",
			"()J"
		);
	}
	inline jlong LongSummaryStatistics::getMax() const
	{
		return callMethod<jlong>(
			"getMax",
			"()J"
		);
	}
	inline jlong LongSummaryStatistics::getMin() const
	{
		return callMethod<jlong>(
			"getMin",
			"()J"
		);
	}
	inline jlong LongSummaryStatistics::getSum() const
	{
		return callMethod<jlong>(
			"getSum",
			"()J"
		);
	}
	inline JString LongSummaryStatistics::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

// Base class headers

