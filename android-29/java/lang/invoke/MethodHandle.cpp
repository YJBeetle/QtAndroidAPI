#include "./MethodType.hpp"
#include "../../util/Optional.hpp"
#include "./MethodHandle.hpp"

namespace java::lang::invoke
{
	// Fields
	
	MethodHandle::MethodHandle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	QAndroidJniObject MethodHandle::asType(java::lang::invoke::MethodType arg0)
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
	jobject MethodHandle::invokeWithArguments(__JniBaseClass arg0)
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
} // namespace java::lang::invoke

