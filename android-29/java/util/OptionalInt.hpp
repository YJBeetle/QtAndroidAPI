#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class OptionalInt : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject empty();
		static QAndroidJniObject of(jint arg0);
		jboolean equals(jobject arg0);
		jint getAsInt();
		jint hashCode();
		void ifPresent(__jni_impl::__JniBaseClass arg0);
		void ifPresentOrElse(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		jboolean isEmpty();
		jboolean isPresent();
		jint orElse(jint arg0);
		jint orElseGet(__jni_impl::__JniBaseClass arg0);
		jint orElseThrow();
		jint orElseThrow(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject stream();
		jstring toString();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void OptionalInt::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.OptionalInt",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject OptionalInt::empty()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.OptionalInt",
			"empty",
			"()Ljava/util/OptionalInt;"
		);
	}
	QAndroidJniObject OptionalInt::of(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.OptionalInt",
			"of",
			"(I)Ljava/util/OptionalInt;",
			arg0
		);
	}
	jboolean OptionalInt::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint OptionalInt::getAsInt()
	{
		return __thiz.callMethod<jint>(
			"getAsInt",
			"()I"
		);
	}
	jint OptionalInt::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void OptionalInt::ifPresent(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/IntConsumer;)V",
			arg0.__jniObject().object()
		);
	}
	void OptionalInt::ifPresentOrElse(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/IntConsumer;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean OptionalInt::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean OptionalInt::isPresent()
	{
		return __thiz.callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
	jint OptionalInt::orElse(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"orElse",
			"(I)I",
			arg0
		);
	}
	jint OptionalInt::orElseGet(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"orElseGet",
			"(Ljava/util/function/IntSupplier;)I",
			arg0.__jniObject().object()
		);
	}
	jint OptionalInt::orElseThrow()
	{
		return __thiz.callMethod<jint>(
			"orElseThrow",
			"()I"
		);
	}
	jint OptionalInt::orElseThrow(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"orElseThrow",
			"(Ljava/util/function/Supplier;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OptionalInt::stream()
	{
		return __thiz.callObjectMethod(
			"stream",
			"()Ljava/util/stream/IntStream;"
		);
	}
	jstring OptionalInt::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class OptionalInt : public __jni_impl::java::util::OptionalInt
	{
	public:
		OptionalInt(QAndroidJniObject obj) { __thiz = obj; }
		OptionalInt()
		{
			__constructor();
		}
	};
} // namespace java::util

