#pragma once

#ifndef JAVA_UTIL_LONGSUMMARYSTATISTICS
#define JAVA_UTIL_LONGSUMMARYSTATISTICS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class LongSummaryStatistics : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jlong arg0, jlong arg1, jlong arg2, jlong arg3);
		
		// Methods
		QAndroidJniObject toString();
		void accept(jint arg0);
		void accept(jlong arg0);
		void combine(__jni_impl::java::util::LongSummaryStatistics arg0);
		jlong getCount();
		jlong getMin();
		jlong getMax();
		jlong getSum();
		jdouble getAverage();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void LongSummaryStatistics::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.LongSummaryStatistics",
			"()V");
	}
	void LongSummaryStatistics::__constructor(jlong arg0, jlong arg1, jlong arg2, jlong arg3)
	{
		__thiz = QAndroidJniObject(
			"java.util.LongSummaryStatistics",
			"(JJJJ)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	
	// Methods
	QAndroidJniObject LongSummaryStatistics::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void LongSummaryStatistics::accept(jint arg0)
	{
		__thiz.callMethod<void>(
			"accept",
			"(I)V",
			arg0);
	}
	void LongSummaryStatistics::accept(jlong arg0)
	{
		__thiz.callMethod<void>(
			"accept",
			"(J)V",
			arg0);
	}
	void LongSummaryStatistics::combine(__jni_impl::java::util::LongSummaryStatistics arg0)
	{
		__thiz.callMethod<void>(
			"combine",
			"(Ljava/util/LongSummaryStatistics;)V",
			arg0.__jniObject().object());
	}
	jlong LongSummaryStatistics::getCount()
	{
		return __thiz.callMethod<jlong>(
			"getCount",
			"()J");
	}
	jlong LongSummaryStatistics::getMin()
	{
		return __thiz.callMethod<jlong>(
			"getMin",
			"()J");
	}
	jlong LongSummaryStatistics::getMax()
	{
		return __thiz.callMethod<jlong>(
			"getMax",
			"()J");
	}
	jlong LongSummaryStatistics::getSum()
	{
		return __thiz.callMethod<jlong>(
			"getSum",
			"()J");
	}
	jdouble LongSummaryStatistics::getAverage()
	{
		return __thiz.callMethod<jdouble>(
			"getAverage",
			"()D");
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class LongSummaryStatistics : public __jni_impl::java::util::LongSummaryStatistics
	{
	public:
		LongSummaryStatistics(QAndroidJniObject obj) { __thiz = obj; }
		LongSummaryStatistics()
		{
			__constructor();
		}
		LongSummaryStatistics(jlong arg0, jlong arg1, jlong arg2, jlong arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_LONGSUMMARYSTATISTICS

