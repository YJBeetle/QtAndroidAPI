#include "./LongSummaryStatistics.hpp"

namespace java::util
{
	// Fields
	
	LongSummaryStatistics::LongSummaryStatistics(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LongSummaryStatistics::LongSummaryStatistics()
	{
		__thiz = QAndroidJniObject(
			"java.util.LongSummaryStatistics",
			"()V"
		);
	}
	LongSummaryStatistics::LongSummaryStatistics(jlong &arg0, jlong &arg1, jlong &arg2, jlong &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.util.LongSummaryStatistics",
			"(JJJJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	void LongSummaryStatistics::accept(jint arg0)
	{
		__thiz.callMethod<void>(
			"accept",
			"(I)V",
			arg0
		);
	}
	void LongSummaryStatistics::accept(jlong arg0)
	{
		__thiz.callMethod<void>(
			"accept",
			"(J)V",
			arg0
		);
	}
	void LongSummaryStatistics::combine(java::util::LongSummaryStatistics arg0)
	{
		__thiz.callMethod<void>(
			"combine",
			"(Ljava/util/LongSummaryStatistics;)V",
			arg0.__jniObject().object()
		);
	}
	jdouble LongSummaryStatistics::getAverage()
	{
		return __thiz.callMethod<jdouble>(
			"getAverage",
			"()D"
		);
	}
	jlong LongSummaryStatistics::getCount()
	{
		return __thiz.callMethod<jlong>(
			"getCount",
			"()J"
		);
	}
	jlong LongSummaryStatistics::getMax()
	{
		return __thiz.callMethod<jlong>(
			"getMax",
			"()J"
		);
	}
	jlong LongSummaryStatistics::getMin()
	{
		return __thiz.callMethod<jlong>(
			"getMin",
			"()J"
		);
	}
	jlong LongSummaryStatistics::getSum()
	{
		return __thiz.callMethod<jlong>(
			"getSum",
			"()J"
		);
	}
	jstring LongSummaryStatistics::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

