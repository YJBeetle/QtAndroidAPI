#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class IntSummaryStatistics : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jlong arg0, jint arg1, jint arg2, jlong arg3);
		
		// Methods
		void accept(jint arg0);
		void combine(__jni_impl::java::util::IntSummaryStatistics arg0);
		jdouble getAverage();
		jlong getCount();
		jint getMax();
		jint getMin();
		jlong getSum();
		jstring toString();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void IntSummaryStatistics::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.IntSummaryStatistics",
			"()V"
		);
	}
	void IntSummaryStatistics::__constructor(jlong arg0, jint arg1, jint arg2, jlong arg3)
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
	void IntSummaryStatistics::combine(__jni_impl::java::util::IntSummaryStatistics arg0)
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
} // namespace __jni_impl::java::util

namespace java::util
{
	class IntSummaryStatistics : public __jni_impl::java::util::IntSummaryStatistics
	{
	public:
		IntSummaryStatistics(QAndroidJniObject obj) { __thiz = obj; }
		IntSummaryStatistics()
		{
			__constructor();
		}
		IntSummaryStatistics(jlong arg0, jint arg1, jint arg2, jlong arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::util

