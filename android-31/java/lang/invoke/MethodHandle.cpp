#include "../../../JObjectArray.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	java::lang::invoke::MethodHandle MethodHandle::asCollector(JClass arg0, jint arg1)
	{
		return callObjectMethod(
			"asCollector",
			"(Ljava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>(),
			arg1
		);
	}
	java::lang::invoke::MethodHandle MethodHandle::asCollector(jint arg0, JClass arg1, jint arg2)
	{
		return callObjectMethod(
			"asCollector",
			"(ILjava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1.object<jclass>(),
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
	java::lang::invoke::MethodHandle MethodHandle::asSpreader(JClass arg0, jint arg1)
	{
		return callObjectMethod(
			"asSpreader",
			"(Ljava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>(),
			arg1
		);
	}
	java::lang::invoke::MethodHandle MethodHandle::asSpreader(jint arg0, JClass arg1, jint arg2)
	{
		return callObjectMethod(
			"asSpreader",
			"(ILjava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1.object<jclass>(),
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
	java::lang::invoke::MethodHandle MethodHandle::asVarargsCollector(JClass arg0)
	{
		return callObjectMethod(
			"asVarargsCollector",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>()
		);
	}
	java::lang::invoke::MethodHandle MethodHandle::bindTo(JObject arg0)
	{
		return callObjectMethod(
			"bindTo",
			"(Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jobject>()
		);
	}
	java::util::Optional MethodHandle::describeConstable()
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	JObject MethodHandle::invoke(JObjectArray arg0)
	{
		return callObjectMethod(
			"invoke",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	JObject MethodHandle::invokeExact(JObjectArray arg0)
	{
		return callObjectMethod(
			"invokeExact",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	JObject MethodHandle::invokeWithArguments(JObjectArray arg0)
	{
		return callObjectMethod(
			"invokeWithArguments",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	JObject MethodHandle::invokeWithArguments(JObject arg0)
	{
		return callObjectMethod(
			"invokeWithArguments",
			"(Ljava/util/List;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	jboolean MethodHandle::isVarargsCollector()
	{
		return callMethod<jboolean>(
			"isVarargsCollector",
			"()Z"
		);
	}
	JString MethodHandle::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

