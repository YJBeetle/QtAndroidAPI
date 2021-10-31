#include "./MethodType.hpp"
#include "../../util/Optional.hpp"
#include "./MethodHandle.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// QAndroidJniObject forward
	MethodHandle::MethodHandle(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject MethodHandle::asCollector(jclass arg0, jint arg1)
	{
		return callObjectMethod(
			"asCollector",
			"(Ljava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MethodHandle::asCollector(jint arg0, jclass arg1, jint arg2)
	{
		return callObjectMethod(
			"asCollector",
			"(ILjava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject MethodHandle::asFixedArity()
	{
		return callObjectMethod(
			"asFixedArity",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	QAndroidJniObject MethodHandle::asSpreader(jclass arg0, jint arg1)
	{
		return callObjectMethod(
			"asSpreader",
			"(Ljava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MethodHandle::asSpreader(jint arg0, jclass arg1, jint arg2)
	{
		return callObjectMethod(
			"asSpreader",
			"(ILjava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject MethodHandle::asType(java::lang::invoke::MethodType arg0)
	{
		return callObjectMethod(
			"asType",
			"(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object()
		);
	}
	QAndroidJniObject MethodHandle::asVarargsCollector(jclass arg0)
	{
		return callObjectMethod(
			"asVarargsCollector",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	QAndroidJniObject MethodHandle::bindTo(jobject arg0)
	{
		return callObjectMethod(
			"bindTo",
			"(Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	QAndroidJniObject MethodHandle::describeConstable()
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jobject MethodHandle::invoke(jobjectArray arg0)
	{
		return callObjectMethod(
			"invoke",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject MethodHandle::invokeExact(jobjectArray arg0)
	{
		return callObjectMethod(
			"invokeExact",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject MethodHandle::invokeWithArguments(jobjectArray arg0)
	{
		return callObjectMethod(
			"invokeWithArguments",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject MethodHandle::invokeWithArguments(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"invokeWithArguments",
			"(Ljava/util/List;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	jboolean MethodHandle::isVarargsCollector()
	{
		return callMethod<jboolean>(
			"isVarargsCollector",
			"()Z"
		);
	}
	jstring MethodHandle::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MethodHandle::type()
	{
		return callObjectMethod(
			"type",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
	QAndroidJniObject MethodHandle::withVarargs(jboolean arg0)
	{
		return callObjectMethod(
			"withVarargs",
			"(Z)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
} // namespace java::lang::invoke

