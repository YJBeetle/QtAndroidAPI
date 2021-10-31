#include "./IntSummaryStatistics.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	IntSummaryStatistics::IntSummaryStatistics(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	IntSummaryStatistics::IntSummaryStatistics()
		: __JniBaseClass(
			"java.util.IntSummaryStatistics",
			"()V"
		) {}
	IntSummaryStatistics::IntSummaryStatistics(jlong arg0, jint arg1, jint arg2, jlong arg3)
		: __JniBaseClass(
			"java.util.IntSummaryStatistics",
			"(JIIJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	void IntSummaryStatistics::accept(jint arg0)
	{
		callMethod<void>(
			"accept",
			"(I)V",
			arg0
		);
	}
	void IntSummaryStatistics::combine(java::util::IntSummaryStatistics arg0)
	{
		callMethod<void>(
			"combine",
			"(Ljava/util/IntSummaryStatistics;)V",
			arg0.object()
		);
	}
	jdouble IntSummaryStatistics::getAverage()
	{
		return callMethod<jdouble>(
			"getAverage",
			"()D"
		);
	}
	jlong IntSummaryStatistics::getCount()
	{
		return callMethod<jlong>(
			"getCount",
			"()J"
		);
	}
	jint IntSummaryStatistics::getMax()
	{
		return callMethod<jint>(
			"getMax",
			"()I"
		);
	}
	jint IntSummaryStatistics::getMin()
	{
		return callMethod<jint>(
			"getMin",
			"()I"
		);
	}
	jlong IntSummaryStatistics::getSum()
	{
		return callMethod<jlong>(
			"getSum",
			"()J"
		);
	}
	jstring IntSummaryStatistics::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

