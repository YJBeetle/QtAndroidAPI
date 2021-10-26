#pragma once

#ifndef JAVA_UTIL_CONCURRENT_ATOMIC_LONGACCUMULATOR
#define JAVA_UTIL_CONCURRENT_ATOMIC_LONGACCUMULATOR

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}

namespace __jni_impl::java::util::concurrent::atomic
{
	class LongAccumulator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, jlong arg1);
		
		// Methods
		jlong get();
		jstring toString();
		jint intValue();
		jlong longValue();
		jfloat floatValue();
		jdouble doubleValue();
		void reset();
		void accumulate(jlong arg0);
		jlong getThenReset();
	};
} // namespace __jni_impl::java::util::concurrent::atomic

#include "../../../io/ObjectInputStream.hpp"

namespace __jni_impl::java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	void LongAccumulator::__constructor(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.LongAccumulator",
			"(Ljava/util/function/LongBinaryOperator;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jlong LongAccumulator::get()
	{
		return __thiz.callMethod<jlong>(
			"get",
			"()J"
		);
	}
	jstring LongAccumulator::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint LongAccumulator::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong LongAccumulator::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jfloat LongAccumulator::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jdouble LongAccumulator::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	void LongAccumulator::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void LongAccumulator::accumulate(jlong arg0)
	{
		__thiz.callMethod<void>(
			"accumulate",
			"(J)V",
			arg0
		);
	}
	jlong LongAccumulator::getThenReset()
	{
		return __thiz.callMethod<jlong>(
			"getThenReset",
			"()J"
		);
	}
} // namespace __jni_impl::java::util::concurrent::atomic

namespace java::util::concurrent::atomic
{
	class LongAccumulator : public __jni_impl::java::util::concurrent::atomic::LongAccumulator
	{
	public:
		LongAccumulator(QAndroidJniObject obj) { __thiz = obj; }
		LongAccumulator(__jni_impl::__JniBaseClass arg0, jlong arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::concurrent::atomic

#endif // JAVA_UTIL_CONCURRENT_ATOMIC_LONGACCUMULATOR

