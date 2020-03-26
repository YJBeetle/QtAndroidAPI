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
		jobject get();
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jboolean isEmpty();
		QAndroidJniObject map(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject stream();
		static QAndroidJniObject of(jobject arg0);
		QAndroidJniObject filter(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject empty();
		QAndroidJniObject flatMap(__jni_impl::__JniBaseClass arg0);
		jboolean isPresent();
		jobject orElse(jobject arg0);
		jobject orElseThrow(__jni_impl::__JniBaseClass arg0);
		jobject orElseThrow();
		void ifPresentOrElse(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject _or(__jni_impl::__JniBaseClass arg0);
		jobject orElseGet(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject ofNullable(jobject arg0);
		void ifPresent(__jni_impl::__JniBaseClass arg0);
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
	jobject Optional::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean Optional::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Optional::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Optional::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Optional::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
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
	QAndroidJniObject Optional::stream()
	{
		return __thiz.callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
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
	QAndroidJniObject Optional::filter(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"filter",
			"(Ljava/util/function/Predicate;)Ljava/util/Optional;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Optional::empty()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Optional",
			"empty",
			"()Ljava/util/Optional;"
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
	jboolean Optional::isPresent()
	{
		return __thiz.callMethod<jboolean>(
			"isPresent",
			"()Z"
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
	jobject Optional::orElseThrow(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"orElseThrow",
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
	void Optional::ifPresentOrElse(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/Consumer;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
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
	jobject Optional::orElseGet(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"orElseGet",
			"(Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
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
	void Optional::ifPresent(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object()
		);
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

