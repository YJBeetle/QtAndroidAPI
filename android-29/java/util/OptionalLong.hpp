#pragma once

#ifndef JAVA_UTIL_OPTIONALLONG
#define JAVA_UTIL_OPTIONALLONG

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class OptionalLong : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jboolean isEmpty();
		QAndroidJniObject stream();
		static QAndroidJniObject of(jlong arg0);
		static QAndroidJniObject empty();
		jboolean isPresent();
		jlong orElse(jlong arg0);
		jlong orElseThrow(__jni_impl::__JniBaseClass arg0);
		jlong orElseThrow();
		void ifPresentOrElse(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		jlong orElseGet(__jni_impl::__JniBaseClass arg0);
		void ifPresent(__jni_impl::__JniBaseClass arg0);
		jlong getAsLong();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void OptionalLong::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.OptionalLong",
			"(V)V");
	}
	
	// Methods
	jboolean OptionalLong::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring OptionalLong::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint OptionalLong::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean OptionalLong::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject OptionalLong::stream()
	{
		return __thiz.callObjectMethod(
			"stream",
			"()Ljava/util/stream/LongStream;"
		);
	}
	QAndroidJniObject OptionalLong::of(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.OptionalLong",
			"of",
			"(J)Ljava/util/OptionalLong;",
			arg0
		);
	}
	QAndroidJniObject OptionalLong::empty()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.OptionalLong",
			"empty",
			"()Ljava/util/OptionalLong;"
		);
	}
	jboolean OptionalLong::isPresent()
	{
		return __thiz.callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
	jlong OptionalLong::orElse(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"orElse",
			"(J)J",
			arg0
		);
	}
	jlong OptionalLong::orElseThrow(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"orElseThrow",
			"(Ljava/util/function/Supplier;)J",
			arg0.__jniObject().object()
		);
	}
	jlong OptionalLong::orElseThrow()
	{
		return __thiz.callMethod<jlong>(
			"orElseThrow",
			"()J"
		);
	}
	void OptionalLong::ifPresentOrElse(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/LongConsumer;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jlong OptionalLong::orElseGet(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"orElseGet",
			"(Ljava/util/function/LongSupplier;)J",
			arg0.__jniObject().object()
		);
	}
	void OptionalLong::ifPresent(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/LongConsumer;)V",
			arg0.__jniObject().object()
		);
	}
	jlong OptionalLong::getAsLong()
	{
		return __thiz.callMethod<jlong>(
			"getAsLong",
			"()J"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class OptionalLong : public __jni_impl::java::util::OptionalLong
	{
	public:
		OptionalLong(QAndroidJniObject obj) { __thiz = obj; }
		OptionalLong()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_OPTIONALLONG

