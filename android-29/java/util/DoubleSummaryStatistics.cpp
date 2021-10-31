#include "./DoubleSummaryStatistics.hpp"

namespace java::util
{
	// Fields
	
	DoubleSummaryStatistics::DoubleSummaryStatistics(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DoubleSummaryStatistics::DoubleSummaryStatistics()
	{
		__thiz = QAndroidJniObject(
			"java.util.DoubleSummaryStatistics",
			"()V"
		);
	}
	DoubleSummaryStatistics::DoubleSummaryStatistics(jlong arg0, jdouble arg1, jdouble arg2, jdouble arg3)
	{
		__thiz = QAndroidJniObject(
			"java.util.DoubleSummaryStatistics",
			"(JDDD)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	void DoubleSummaryStatistics::accept(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"accept",
			"(D)V",
			arg0
		);
	}
	void DoubleSummaryStatistics::combine(java::util::DoubleSummaryStatistics arg0)
	{
		__thiz.callMethod<void>(
			"combine",
			"(Ljava/util/DoubleSummaryStatistics;)V",
			arg0.__jniObject().object()
		);
	}
	jdouble DoubleSummaryStatistics::getAverage()
	{
		return __thiz.callMethod<jdouble>(
			"getAverage",
			"()D"
		);
	}
	jlong DoubleSummaryStatistics::getCount()
	{
		return __thiz.callMethod<jlong>(
			"getCount",
			"()J"
		);
	}
	jdouble DoubleSummaryStatistics::getMax()
	{
		return __thiz.callMethod<jdouble>(
			"getMax",
			"()D"
		);
	}
	jdouble DoubleSummaryStatistics::getMin()
	{
		return __thiz.callMethod<jdouble>(
			"getMin",
			"()D"
		);
	}
	jdouble DoubleSummaryStatistics::getSum()
	{
		return __thiz.callMethod<jdouble>(
			"getSum",
			"()D"
		);
	}
	jstring DoubleSummaryStatistics::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

