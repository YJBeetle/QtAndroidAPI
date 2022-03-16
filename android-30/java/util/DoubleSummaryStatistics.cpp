#include "../../JString.hpp"
#include "./DoubleSummaryStatistics.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	DoubleSummaryStatistics::DoubleSummaryStatistics()
		: JObject(
			"java.util.DoubleSummaryStatistics",
			"()V"
		) {}
	DoubleSummaryStatistics::DoubleSummaryStatistics(jlong arg0, jdouble arg1, jdouble arg2, jdouble arg3)
		: JObject(
			"java.util.DoubleSummaryStatistics",
			"(JDDD)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	void DoubleSummaryStatistics::accept(jdouble arg0) const
	{
		callMethod<void>(
			"accept",
			"(D)V",
			arg0
		);
	}
	void DoubleSummaryStatistics::combine(java::util::DoubleSummaryStatistics arg0) const
	{
		callMethod<void>(
			"combine",
			"(Ljava/util/DoubleSummaryStatistics;)V",
			arg0.object()
		);
	}
	jdouble DoubleSummaryStatistics::getAverage() const
	{
		return callMethod<jdouble>(
			"getAverage",
			"()D"
		);
	}
	jlong DoubleSummaryStatistics::getCount() const
	{
		return callMethod<jlong>(
			"getCount",
			"()J"
		);
	}
	jdouble DoubleSummaryStatistics::getMax() const
	{
		return callMethod<jdouble>(
			"getMax",
			"()D"
		);
	}
	jdouble DoubleSummaryStatistics::getMin() const
	{
		return callMethod<jdouble>(
			"getMin",
			"()D"
		);
	}
	jdouble DoubleSummaryStatistics::getSum() const
	{
		return callMethod<jdouble>(
			"getSum",
			"()D"
		);
	}
	JString DoubleSummaryStatistics::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

