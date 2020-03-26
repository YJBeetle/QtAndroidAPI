#pragma once

#ifndef JAVA_LANG_INVOKE_METHODHANDLE
#define JAVA_LANG_INVOKE_METHODHANDLE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang::invoke
{
	class MethodType;
}
namespace __jni_impl::java::util
{
	class Optional;
}

namespace __jni_impl::java::lang::invoke
{
	class MethodHandle : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject invoke(jobjectArray arg0);
		jobject invokeExact(jobjectArray arg0);
		QAndroidJniObject type();
		jstring toString();
		QAndroidJniObject describeConstable();
		QAndroidJniObject asType(__jni_impl::java::lang::invoke::MethodType arg0);
		jobject invokeWithArguments(jobjectArray arg0);
		jobject invokeWithArguments(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject asSpreader(jint arg0, jclass arg1, jint arg2);
		QAndroidJniObject asSpreader(jclass arg0, jint arg1);
		jboolean isVarargsCollector();
		QAndroidJniObject asVarargsCollector(jclass arg0);
		QAndroidJniObject asCollector(jclass arg0, jint arg1);
		QAndroidJniObject asCollector(jint arg0, jclass arg1, jint arg2);
		QAndroidJniObject withVarargs(jboolean arg0);
		QAndroidJniObject asFixedArity();
		QAndroidJniObject bindTo(jobject arg0);
	};
} // namespace __jni_impl::java::lang::invoke

#include "MethodType.hpp"
#include "../../util/Optional.hpp"

namespace __jni_impl::java::lang::invoke
{
	// Fields
	
	// Constructors
	void MethodHandle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.MethodHandle",
			"(V)V");
	}
	
	// Methods
	jobject MethodHandle::invoke(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"invoke",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject MethodHandle::invokeExact(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"invokeExact",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject MethodHandle::type()
	{
		return __thiz.callObjectMethod(
			"type",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
	jstring MethodHandle::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MethodHandle::describeConstable()
	{
		return __thiz.callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	QAndroidJniObject MethodHandle::asType(__jni_impl::java::lang::invoke::MethodType arg0)
	{
		return __thiz.callObjectMethod(
			"asType",
			"(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object()
		);
	}
	jobject MethodHandle::invokeWithArguments(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"invokeWithArguments",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject MethodHandle::invokeWithArguments(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"invokeWithArguments",
			"(Ljava/util/List;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject MethodHandle::asSpreader(jint arg0, jclass arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"asSpreader",
			"(ILjava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject MethodHandle::asSpreader(jclass arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"asSpreader",
			"(Ljava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1
		);
	}
	jboolean MethodHandle::isVarargsCollector()
	{
		return __thiz.callMethod<jboolean>(
			"isVarargsCollector",
			"()Z"
		);
	}
	QAndroidJniObject MethodHandle::asVarargsCollector(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"asVarargsCollector",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	QAndroidJniObject MethodHandle::asCollector(jclass arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"asCollector",
			"(Ljava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MethodHandle::asCollector(jint arg0, jclass arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"asCollector",
			"(ILjava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject MethodHandle::withVarargs(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"withVarargs",
			"(Z)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	QAndroidJniObject MethodHandle::asFixedArity()
	{
		return __thiz.callObjectMethod(
			"asFixedArity",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	QAndroidJniObject MethodHandle::bindTo(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"bindTo",
			"(Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
} // namespace __jni_impl::java::lang::invoke

namespace java::lang::invoke
{
	class MethodHandle : public __jni_impl::java::lang::invoke::MethodHandle
	{
	public:
		MethodHandle(QAndroidJniObject obj) { __thiz = obj; }
		MethodHandle()
		{
			__constructor();
		}
	};
} // namespace java::lang::invoke

#endif // JAVA_LANG_INVOKE_METHODHANDLE

