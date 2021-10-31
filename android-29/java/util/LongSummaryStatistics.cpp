#include "./LongSummaryStatistics.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	LongSummaryStatistics::LongSummaryStatistics(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	LongSummaryStatistics::LongSummaryStatistics()
		: __JniBaseClass(
			"java.util.LongSummaryStatistics",
			"()V"
		) {}
	LongSummaryStatistics::LongSummaryStatistics(jlong arg0, jlong arg1, jlong arg2, jlong arg3)
		: __JniBaseClass(
			"java.util.LongSummaryStatistics",
			"(JJJJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	void LongSummaryStatistics::accept(jint arg0)
	{
		callMethod<void>(
			"accept",
			"(I)V",
			arg0
		);
	}
	void LongSummaryStatistics::accept(jlong arg0)
	{
		callMethod<void>(
			"accept",
			"(J)V",
			arg0
		);
	}
	void LongSummaryStatistics::combine(java::util::LongSummaryStatistics arg0)
	{
		callMethod<void>(
			"combine",
			"(Ljava/util/LongSummaryStatistics;)V",
			arg0.object()
		);
	}
	jdouble LongSummaryStatistics::getAverage()
	{
		return callMethod<jdouble>(
			"getAverage",
			"()D"
		);
	}
	jlong LongSummaryStatistics::getCount()
	{
		return callMethod<jlong>(
			"getCount",
			"()J"
		);
	}
	jlong LongSummaryStatistics::getMax()
	{
		return callMethod<jlong>(
			"getMax",
			"()J"
		);
	}
	jlong LongSummaryStatistics::getMin()
	{
		return callMethod<jlong>(
			"getMin",
			"()J"
		);
	}
	jlong LongSummaryStatistics::getSum()
	{
		return callMethod<jlong>(
			"getSum",
			"()J"
		);
	}
	jstring LongSummaryStatistics::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

