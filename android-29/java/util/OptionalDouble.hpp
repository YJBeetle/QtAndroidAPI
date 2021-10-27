#pragma once

#ifndef JAVA_UTIL_OPTIONALDOUBLE
#define JAVA_UTIL_OPTIONALDOUBLE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class OptionalDouble : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject empty();
		static QAndroidJniObject of(jdouble arg0);
		jboolean equals(jobject arg0);
		jdouble getAsDouble();
		jint hashCode();
		void ifPresent(__jni_impl::__JniBaseClass arg0);
		void ifPresentOrElse(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		jboolean isEmpty();
		jboolean isPresent();
		jdouble orElse(jdouble arg0);
		jdouble orElseGet(__jni_impl::__JniBaseClass arg0);
		jdouble orElseThrow();
		jdouble orElseThrow(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject stream();
		jstring toString();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void OptionalDouble::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.OptionalDouble",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject OptionalDouble::empty()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.OptionalDouble",
			"empty",
			"()Ljava/util/OptionalDouble;"
		);
	}
	QAndroidJniObject OptionalDouble::of(jdouble arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.OptionalDouble",
			"of",
			"(D)Ljava/util/OptionalDouble;",
			arg0
		);
	}
	jboolean OptionalDouble::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jdouble OptionalDouble::getAsDouble()
	{
		return __thiz.callMethod<jdouble>(
			"getAsDouble",
			"()D"
		);
	}
	jint OptionalDouble::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void OptionalDouble::ifPresent(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/DoubleConsumer;)V",
			arg0.__jniObject().object()
		);
	}
	void OptionalDouble::ifPresentOrElse(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/DoubleConsumer;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean OptionalDouble::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean OptionalDouble::isPresent()
	{
		return __thiz.callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
	jdouble OptionalDouble::orElse(jdouble arg0)
	{
		return __thiz.callMethod<jdouble>(
			"orElse",
			"(D)D",
			arg0
		);
	}
	jdouble OptionalDouble::orElseGet(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jdouble>(
			"orElseGet",
			"(Ljava/util/function/DoubleSupplier;)D",
			arg0.__jniObject().object()
		);
	}
	jdouble OptionalDouble::orElseThrow()
	{
		return __thiz.callMethod<jdouble>(
			"orElseThrow",
			"()D"
		);
	}
	jdouble OptionalDouble::orElseThrow(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jdouble>(
			"orElseThrow",
			"(Ljava/util/function/Supplier;)D",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OptionalDouble::stream()
	{
		return __thiz.callObjectMethod(
			"stream",
			"()Ljava/util/stream/DoubleStream;"
		);
	}
	jstring OptionalDouble::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class OptionalDouble : public __jni_impl::java::util::OptionalDouble
	{
	public:
		OptionalDouble(QAndroidJniObject obj) { __thiz = obj; }
		OptionalDouble()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_OPTIONALDOUBLE

