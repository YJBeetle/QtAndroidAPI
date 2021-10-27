#pragma once

#ifndef JAVA_UTIL_OPTIONAL
#define JAVA_UTIL_OPTIONAL

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class Optional : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject empty();
		static QAndroidJniObject of(jobject arg0);
		static QAndroidJniObject ofNullable(jobject arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject filter(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject flatMap(__jni_impl::__JniBaseClass arg0);
		jobject get();
		jint hashCode();
		void ifPresent(__jni_impl::__JniBaseClass arg0);
		void ifPresentOrElse(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		jboolean isEmpty();
		jboolean isPresent();
		QAndroidJniObject map(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject _or(__jni_impl::__JniBaseClass arg0);
		jobject orElse(jobject arg0);
		jobject orElseGet(__jni_impl::__JniBaseClass arg0);
		jobject orElseThrow();
		jobject orElseThrow(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject stream();
		jstring toString();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Optional::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Optional",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Optional::empty()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Optional",
			"empty",
			"()Ljava/util/Optional;"
		);
	}
	QAndroidJniObject Optional::of(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Optional",
			"of",
			"(Ljava/lang/Object;)Ljava/util/Optional;",
			arg0
		);
	}
	QAndroidJniObject Optional::ofNullable(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Optional",
			"ofNullable",
			"(Ljava/lang/Object;)Ljava/util/Optional;",
			arg0
		);
	}
	jboolean Optional::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Optional::filter(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"filter",
			"(Ljava/util/function/Predicate;)Ljava/util/Optional;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Optional::flatMap(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"flatMap",
			"(Ljava/util/function/Function;)Ljava/util/Optional;",
			arg0.__jniObject().object()
		);
	}
	jobject Optional::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint Optional::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Optional::ifPresent(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object()
		);
	}
	void Optional::ifPresentOrElse(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/Consumer;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Optional::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean Optional::isPresent()
	{
		return __thiz.callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
	QAndroidJniObject Optional::map(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"map",
			"(Ljava/util/function/Function;)Ljava/util/Optional;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Optional::_or(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"or",
			"(Ljava/util/function/Supplier;)Ljava/util/Optional;",
			arg0.__jniObject().object()
		);
	}
	jobject Optional::orElse(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"orElse",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Optional::orElseGet(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"orElseGet",
			"(Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject Optional::orElseThrow()
	{
		return __thiz.callObjectMethod(
			"orElseThrow",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject Optional::orElseThrow(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"orElseThrow",
			"(Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject Optional::stream()
	{
		return __thiz.callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
	jstring Optional::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Optional : public __jni_impl::java::util::Optional
	{
	public:
		Optional(QAndroidJniObject obj) { __thiz = obj; }
		Optional()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_OPTIONAL

