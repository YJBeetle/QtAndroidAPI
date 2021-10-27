#pragma once

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
		QAndroidJniObject asCollector(jclass arg0, jint arg1);
		QAndroidJniObject asCollector(jint arg0, jclass arg1, jint arg2);
		QAndroidJniObject asFixedArity();
		QAndroidJniObject asSpreader(jclass arg0, jint arg1);
		QAndroidJniObject asSpreader(jint arg0, jclass arg1, jint arg2);
		QAndroidJniObject asType(__jni_impl::java::lang::invoke::MethodType arg0);
		QAndroidJniObject asVarargsCollector(jclass arg0);
		QAndroidJniObject bindTo(jobject arg0);
		QAndroidJniObject describeConstable();
		jobject invoke(jobjectArray arg0);
		jobject invokeExact(jobjectArray arg0);
		jobject invokeWithArguments(jobjectArray arg0);
		jobject invokeWithArguments(__jni_impl::__JniBaseClass arg0);
		jboolean isVarargsCollector();
		jstring toString();
		QAndroidJniObject type();
		QAndroidJniObject withVarargs(jboolean arg0);
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
	QAndroidJniObject MethodHandle::asFixedArity()
	{
		return __thiz.callObjectMethod(
			"asFixedArity",
			"()Ljava/lang/invoke/MethodHandle;"
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
	QAndroidJniObject MethodHandle::asType(__jni_impl::java::lang::invoke::MethodType arg0)
	{
		return __thiz.callObjectMethod(
			"asType",
			"(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.__jniObject().object()
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
	QAndroidJniObject MethodHandle::bindTo(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"bindTo",
			"(Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	QAndroidJniObject MethodHandle::describeConstable()
	{
		return __thiz.callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
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
	jboolean MethodHandle::isVarargsCollector()
	{
		return __thiz.callMethod<jboolean>(
			"isVarargsCollector",
			"()Z"
		);
	}
	jstring MethodHandle::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MethodHandle::type()
	{
		return __thiz.callObjectMethod(
			"type",
			"()Ljava/lang/invoke/MethodType;"
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

