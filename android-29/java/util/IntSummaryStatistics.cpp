#include "./IntSummaryStatistics.hpp"

namespace java::util
{
	// Fields
	
	IntSummaryStatistics::IntSummaryStatistics(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IntSummaryStatistics::IntSummaryStatistics()
	{
		__thiz = QAndroidJniObject(
			"java.util.IntSummaryStatistics",
			"()V"
		);
	}
	IntSummaryStatistics::IntSummaryStatistics(jlong &arg0, jint &arg1, jint &arg2, jlong &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.util.IntSummaryStatistics",
			"(JIIJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	void IntSummaryStatistics::accept(jint arg0)
	{
		__thiz.callMethod<void>(
			"accept",
			"(I)V",
			arg0
		);
	}
	void IntSummaryStatistics::combine(java::util::IntSummaryStatistics arg0)
	{
		__thiz.callMethod<void>(
			"combine",
			"(Ljava/util/IntSummaryStatistics;)V",
			arg0.__jniObject().object()
		);
	}
	jdouble IntSummaryStatistics::getAverage()
	{
		return __thiz.callMethod<jdouble>(
			"getAverage",
			"()D"
		);
	}
	jlong IntSummaryStatistics::getCount()
	{
		return __thiz.callMethod<jlong>(
			"getCount",
			"()J"
		);
	}
	jint IntSummaryStatistics::getMax()
	{
		return __thiz.callMethod<jint>(
			"getMax",
			"()I"
		);
	}
	jint IntSummaryStatistics::getMin()
	{
		return __thiz.callMethod<jint>(
			"getMin",
			"()I"
		);
	}
	jlong IntSummaryStatistics::getSum()
	{
		return __thiz.callMethod<jlong>(
			"getSum",
			"()J"
		);
	}
	jstring IntSummaryStatistics::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

