#pragma once

#ifndef JAVA_UTIL_CONCURRENT_ATOMIC_LONGADDER
#define JAVA_UTIL_CONCURRENT_ATOMIC_LONGADDER

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}

namespace __jni_impl::java::util::concurrent::atomic
{
	class LongAdder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void add(jlong arg0);
		jstring toString();
		jint intValue();
		jlong longValue();
		jfloat floatValue();
		jdouble doubleValue();
		void increment();
		void reset();
		jlong sum();
		void decrement();
		jlong sumThenReset();
	};
} // namespace __jni_impl::java::util::concurrent::atomic

#include "../../../io/ObjectInputStream.hpp"

namespace __jni_impl::java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	void LongAdder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.LongAdder",
			"()V");
	}
	
	// Methods
	void LongAdder::add(jlong arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(J)V",
			arg0
		);
	}
	jstring LongAdder::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint LongAdder::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong LongAdder::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jfloat LongAdder::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jdouble LongAdder::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	void LongAdder::increment()
	{
		__thiz.callMethod<void>(
			"increment",
			"()V"
		);
	}
	void LongAdder::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong LongAdder::sum()
	{
		return __thiz.callMethod<jlong>(
			"sum",
			"()J"
		);
	}
	void LongAdder::decrement()
	{
		__thiz.callMethod<void>(
			"decrement",
			"()V"
		);
	}
	jlong LongAdder::sumThenReset()
	{
		return __thiz.callMethod<jlong>(
			"sumThenReset",
			"()J"
		);
	}
} // namespace __jni_impl::java::util::concurrent::atomic

namespace java::util::concurrent::atomic
{
	class LongAdder : public __jni_impl::java::util::concurrent::atomic::LongAdder
	{
	public:
		LongAdder(QAndroidJniObject obj) { __thiz = obj; }
		LongAdder()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent::atomic

#endif // JAVA_UTIL_CONCURRENT_ATOMIC_LONGADDER

