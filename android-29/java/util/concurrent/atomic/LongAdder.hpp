#pragma once

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
		void decrement();
		jdouble doubleValue();
		jfloat floatValue();
		void increment();
		jint intValue();
		jlong longValue();
		void reset();
		jlong sum();
		jlong sumThenReset();
		jstring toString();
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
			"()V"
		);
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
	void LongAdder::decrement()
	{
		__thiz.callMethod<void>(
			"decrement",
			"()V"
		);
	}
	jdouble LongAdder::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat LongAdder::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	void LongAdder::increment()
	{
		__thiz.callMethod<void>(
			"increment",
			"()V"
		);
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
	jlong LongAdder::sumThenReset()
	{
		return __thiz.callMethod<jlong>(
			"sumThenReset",
			"()J"
		);
	}
	jstring LongAdder::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

