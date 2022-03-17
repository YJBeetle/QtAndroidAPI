#pragma once

#include "../../../JObjectArray.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./MethodType.def.hpp"
#include "../../util/Optional.def.hpp"
#include "./MethodHandle.def.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::lang::invoke::MethodHandle MethodHandle::asCollector(JClass arg0, jint arg1) const
	{
		return callObjectMethod(
			"asCollector",
			"(Ljava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>(),
			arg1
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandle::asCollector(jint arg0, JClass arg1, jint arg2) const
	{
		return callObjectMethod(
			"asCollector",
			"(ILjava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1.object<jclass>(),
			arg2
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandle::asFixedArity() const
	{
		return callObjectMethod(
			"asFixedArity",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandle::asSpreader(JClass arg0, jint arg1) const
	{
		return callObjectMethod(
			"asSpreader",
			"(Ljava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>(),
			arg1
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandle::asSpreader(jint arg0, JClass arg1, jint arg2) const
	{
		return callObjectMethod(
			"asSpreader",
			"(ILjava/lang/Class;I)Ljava/lang/invoke/MethodHandle;",
			arg0,
			arg1.object<jclass>(),
			arg2
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandle::asType(java::lang::invoke::MethodType arg0) const
	{
		return callObjectMethod(
			"asType",
			"(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandle::asVarargsCollector(JClass arg0) const
	{
		return callObjectMethod(
			"asVarargsCollector",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandle::bindTo(JObject arg0) const
	{
		return callObjectMethod(
			"bindTo",
			"(Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jobject>()
		);
	}
	inline java::util::Optional MethodHandle::describeConstable() const
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	inline JObject MethodHandle::invoke(JObjectArray arg0) const
	{
		return callObjectMethod(
			"invoke",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject MethodHandle::invokeExact(JObjectArray arg0) const
	{
		return callObjectMethod(
			"invokeExact",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject MethodHandle::invokeWithArguments(JObjectArray arg0) const
	{
		return callObjectMethod(
			"invokeWithArguments",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject MethodHandle::invokeWithArguments(JObject arg0) const
	{
		return callObjectMethod(
			"invokeWithArguments",
			"(Ljava/util/List;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline jboolean MethodHandle::isVarargsCollector() const
	{
		return callMethod<jboolean>(
			"isVarargsCollector",
			"()Z"
		);
	}
	inline JString MethodHandle::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline java::lang::invoke::MethodType MethodHandle::type() const
	{
		return callObjectMethod(
			"type",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandle::withVarargs(jboolean arg0) const
	{
		return callObjectMethod(
			"withVarargs",
			"(Z)Ljava/lang/invoke/MethodHandle;",
			arg0
		);
	}
} // namespace java::lang::invoke

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::invoke;
#endif
