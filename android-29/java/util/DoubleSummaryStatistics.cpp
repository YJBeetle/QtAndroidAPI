#include "./DoubleSummaryStatistics.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	DoubleSummaryStatistics::DoubleSummaryStatistics(QJniObject obj) : JObject(obj) {}
	
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
	void DoubleSummaryStatistics::accept(jdouble arg0)
	{
		callMethod<void>(
			"accept",
			"(D)V",
			arg0
		);
	}
	void DoubleSummaryStatistics::combine(java::util::DoubleSummaryStatistics arg0)
	{
		callMethod<void>(
			"combine",
			"(Ljava/util/DoubleSummaryStatistics;)V",
			arg0.object()
		);
	}
	jdouble DoubleSummaryStatistics::getAverage()
	{
		return callMethod<jdouble>(
			"getAverage",
			"()D"
		);
	}
	jlong DoubleSummaryStatistics::getCount()
	{
		return callMethod<jlong>(
			"getCount",
			"()J"
		);
	}
	jdouble DoubleSummaryStatistics::getMax()
	{
		return callMethod<jdouble>(
			"getMax",
			"()D"
		);
	}
	jdouble DoubleSummaryStatistics::getMin()
	{
		return callMethod<jdouble>(
			"getMin",
			"()D"
		);
	}
	jdouble DoubleSummaryStatistics::getSum()
	{
		return callMethod<jdouble>(
			"getSum",
			"()D"
		);
	}
	jstring DoubleSummaryStatistics::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

