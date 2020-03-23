#pragma once

#ifndef JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEADDER
#define JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEADDER

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}

namespace __jni_impl::java::util::concurrent::atomic
{
	class DoubleAdder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void add(jdouble arg0);
		QAndroidJniObject toString();
		jint intValue();
		jlong longValue();
		jfloat floatValue();
		jdouble doubleValue();
		void reset();
		jdouble sum();
		jdouble sumThenReset();
	};
} // namespace __jni_impl::java::util::concurrent::atomic

#include "../../../io/ObjectInputStream.hpp"

namespace __jni_impl::java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	void DoubleAdder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.DoubleAdder",
			"()V");
	}
	
	// Methods
	void DoubleAdder::add(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(D)V",
			arg0);
	}
	QAndroidJniObject DoubleAdder::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint DoubleAdder::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I");
	}
	jlong DoubleAdder::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J");
	}
	jfloat DoubleAdder::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F");
	}
	jdouble DoubleAdder::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D");
	}
	void DoubleAdder::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V");
	}
	jdouble DoubleAdder::sum()
	{
		return __thiz.callMethod<jdouble>(
			"sum",
			"()D");
	}
	jdouble DoubleAdder::sumThenReset()
	{
		return __thiz.callMethod<jdouble>(
			"sumThenReset",
			"()D");
	}
} // namespace __jni_impl::java::util::concurrent::atomic

namespace java::util::concurrent::atomic
{
	class DoubleAdder : public __jni_impl::java::util::concurrent::atomic::DoubleAdder
	{
	public:
		DoubleAdder(QAndroidJniObject obj) { __thiz = obj; }
		DoubleAdder()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent::atomic

#endif // JAVA_UTIL_CONCURRENT_ATOMIC_DOUBLEADDER

