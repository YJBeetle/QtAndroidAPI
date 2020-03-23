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
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jboolean isEmpty();
		QAndroidJniObject stream();
		static QAndroidJniObject of(jdouble arg0);
		static QAndroidJniObject empty();
		jboolean isPresent();
		jdouble orElse(jdouble arg0);
		jdouble orElseThrow(__jni_impl::__JniBaseClass arg0);
		jdouble orElseThrow();
		void ifPresentOrElse(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		jdouble orElseGet(__jni_impl::__JniBaseClass arg0);
		void ifPresent(__jni_impl::__JniBaseClass arg0);
		jdouble getAsDouble();
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
	jboolean OptionalDouble::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject OptionalDouble::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint OptionalDouble::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jboolean OptionalDouble::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	QAndroidJniObject OptionalDouble::stream()
	{
		return __thiz.callObjectMethod(
			"stream",
			"()Ljava/util/stream/DoubleStream;");
	}
	QAndroidJniObject OptionalDouble::of(jdouble arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.OptionalDouble",
			"of",
			"(D)Ljava/util/OptionalDouble;",
			arg0);
	}
	QAndroidJniObject OptionalDouble::empty()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.OptionalDouble",
			"empty",
			"()Ljava/util/OptionalDouble;");
	}
	jboolean OptionalDouble::isPresent()
	{
		return __thiz.callMethod<jboolean>(
			"isPresent",
			"()Z");
	}
	jdouble OptionalDouble::orElse(jdouble arg0)
	{
		return __thiz.callMethod<jdouble>(
			"orElse",
			"(D)D",
			arg0);
	}
	jdouble OptionalDouble::orElseThrow(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jdouble>(
			"orElseThrow",
			"(Ljava/util/function/Supplier;)D",
			arg0.__jniObject().object());
	}
	jdouble OptionalDouble::orElseThrow()
	{
		return __thiz.callMethod<jdouble>(
			"orElseThrow",
			"()D");
	}
	void OptionalDouble::ifPresentOrElse(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/DoubleConsumer;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jdouble OptionalDouble::orElseGet(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jdouble>(
			"orElseGet",
			"(Ljava/util/function/DoubleSupplier;)D",
			arg0.__jniObject().object());
	}
	void OptionalDouble::ifPresent(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/DoubleConsumer;)V",
			arg0.__jniObject().object());
	}
	jdouble OptionalDouble::getAsDouble()
	{
		return __thiz.callMethod<jdouble>(
			"getAsDouble",
			"()D");
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

