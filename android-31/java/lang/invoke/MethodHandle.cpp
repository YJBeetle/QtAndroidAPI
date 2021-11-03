#include "./MethodType.hpp"
#include "../../util/Optional.hpp"
#include "./MethodHandle.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// QJniObject forward
	MethodHandle::MethodHandle(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::lang::invoke::MethodHandle MethodHandle::asCollector(jclass arg0, jint arg1)
	{
		return callObjectMethod(
			"asCollector",
			"(Ljava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1
		);
	}
	java::lang::invoke::MethodHandle MethodHandle::asCollector(jint arg0, jclass arg1, jint arg2)
	{
		return callObjectMethod(
			"asCollector",
			"(ILjava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2
		);
	}
	java::lang::invoke::MethodHandle MethodHandle::asFixedArity()
	{
		return callObjectMethod(
			"asFixedArity",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	java::lang::invoke::MethodHandle MethodHandle::asSpreader(jclass arg0, jint arg1)
	{
		return callObjectMethod(
			"asSpreader",
			"(Ljava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1
		);
	}
	java::lang::invoke::MethodHandle MethodHandle::asSpreader(jint arg0, jclass arg1, jint arg2)
	{
		return callObjectMethod(
			"asSpreader",
			"(ILjava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1,
			arg2
		);
	}
	java::lang::invoke::MethodHandle MethodHandle::asType(java::lang::invoke::MethodType arg0)
	{
		return callObjectMethod(
			"asType",
			"(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object()
		);
	}
	java::lang::invoke::MethodHandle MethodHandle::asVarargsCollector(jclass arg0)
	{
		return callObjectMethod(
			"asVarargsCollector",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	java::lang::invoke::MethodHandle MethodHandle::bindTo(jobject arg0)
	{
		return callObjectMethod(
			"bindTo",
			"(Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
	java::util::Optional MethodHandle::describeConstable()
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
	jobject MethodHandle::invokeWithArguments(JObject arg0)
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
	java::lang::invoke::MethodType MethodHandle::type()
	{
		return callObjectMethod(
			"type",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
	java::lang::invoke::MethodHandle MethodHandle::withVarargs(jboolean arg0)
	{
		return callObjectMethod(
			"withVarargs",
			"(Z)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
} // namespace java::lang::invoke

