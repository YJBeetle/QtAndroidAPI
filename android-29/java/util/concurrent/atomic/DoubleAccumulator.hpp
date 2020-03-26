#pragma once

#ifndef JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEACCUMULATOR
#define JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEACCUMULATOR

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}

namespace __jni_impl::java::util::concurrent::atomic
{
	class DoubleAccumulator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, jdouble arg1);
		
		// Methods
		jdouble get();
		jstring toString();
		jint intValue();
		jlong longValue();
		jfloat floatValue();
		jdouble doubleValue();
		void reset();
		void accumulate(jdouble arg0);
		jdouble getThenReset();
	};
} // namespace __jni_impl::java::util::concurrent::atomic

#include "../../../io/ObjectInputStream.hpp"

namespace __jni_impl::java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	void DoubleAccumulator::__constructor(__jni_impl::__JniBaseClass arg0, jdouble arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.DoubleAccumulator",
			"(Ljava/util/function/DoubleBinaryOperator;D)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	jdouble DoubleAccumulator::get()
	{
		return __thiz.callMethod<jdouble>(
			"get",
			"()D"
		);
	}
	jstring DoubleAccumulator::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DoubleAccumulator::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong DoubleAccumulator::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jfloat DoubleAccumulator::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jdouble DoubleAccumulator::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	void DoubleAccumulator::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void DoubleAccumulator::accumulate(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"accumulate",
			"(D)V",
			arg0
		);
	}
	jdouble DoubleAccumulator::getThenReset()
	{
		return __thiz.callMethod<jdouble>(
			"getThenReset",
			"()D"
		);
	}
} // namespace __jni_impl::java::util::concurrent::atomic

namespace java::util::concurrent::atomic
{
	class DoubleAccumulator : public __jni_impl::java::util::concurrent::atomic::DoubleAccumulator
	{
	public:
		DoubleAccumulator(QAndroidJniObject obj) { __thiz = obj; }
		DoubleAccumulator(__jni_impl::__JniBaseClass arg0, jdouble arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::concurrent::atomic

#endif // JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEACCUMULATOR

