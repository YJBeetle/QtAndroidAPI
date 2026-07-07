#pragma once

#include "../../../JObjectArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../RuntimeException.def.hpp"
#include "../../../JString.hpp"
#include "./MethodHandle.def.hpp"
#include "./MethodType.def.hpp"
#include "./VarHandle_AccessMode.def.hpp"
#include "../../util/Optional.def.hpp"
#include "./VarHandle.def.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void VarHandle::acquireFence()
	{
		callStaticMethod<void>(
			"java.lang.invoke.VarHandle",
			"acquireFence",
			"()V"
		);
	}
	inline void VarHandle::fullFence()
	{
		callStaticMethod<void>(
			"java.lang.invoke.VarHandle",
			"fullFence",
			"()V"
		);
	}
	inline void VarHandle::loadLoadFence()
	{
		callStaticMethod<void>(
			"java.lang.invoke.VarHandle",
			"loadLoadFence",
			"()V"
		);
	}
	inline void VarHandle::releaseFence()
	{
		callStaticMethod<void>(
			"java.lang.invoke.VarHandle",
			"releaseFence",
			"()V"
		);
	}
	inline void VarHandle::storeStoreFence()
	{
		callStaticMethod<void>(
			"java.lang.invoke.VarHandle",
			"storeStoreFence",
			"()V"
		);
	}
	inline java::lang::invoke::MethodType VarHandle::accessModeType(java::lang::invoke::VarHandle_AccessMode arg0) const
	{
		return callObjectMethod(
			"accessModeType",
			"(Ljava/lang/invoke/VarHandle$AccessMode;)Ljava/lang/invoke/MethodType;",
			arg0.object()
		);
	}
	inline JObject VarHandle::compareAndExchange(JObjectArray arg0) const
	{
		return callObjectMethod(
			"compareAndExchange",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::compareAndExchangeAcquire(JObjectArray arg0) const
	{
		return callObjectMethod(
			"compareAndExchangeAcquire",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::compareAndExchangeRelease(JObjectArray arg0) const
	{
		return callObjectMethod(
			"compareAndExchangeRelease",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline jboolean VarHandle::compareAndSet(JObjectArray arg0) const
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"([Ljava/lang/Object;)Z",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::coordinateTypes() const
	{
		return callObjectMethod(
			"coordinateTypes",
			"()Ljava/util/List;"
		);
	}
	inline java::util::Optional VarHandle::describeConstable() const
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	inline JObject VarHandle::get(JObjectArray arg0) const
	{
		return callObjectMethod(
			"get",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::getAcquire(JObjectArray arg0) const
	{
		return callObjectMethod(
			"getAcquire",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::getAndAdd(JObjectArray arg0) const
	{
		return callObjectMethod(
			"getAndAdd",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::getAndAddAcquire(JObjectArray arg0) const
	{
		return callObjectMethod(
			"getAndAddAcquire",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::getAndAddRelease(JObjectArray arg0) const
	{
		return callObjectMethod(
			"getAndAddRelease",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::getAndBitwiseAnd(JObjectArray arg0) const
	{
		return callObjectMethod(
			"getAndBitwiseAnd",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::getAndBitwiseAndAcquire(JObjectArray arg0) const
	{
		return callObjectMethod(
			"getAndBitwiseAndAcquire",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::getAndBitwiseAndRelease(JObjectArray arg0) const
	{
		return callObjectMethod(
			"getAndBitwiseAndRelease",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::getAndBitwiseOr(JObjectArray arg0) const
	{
		return callObjectMethod(
			"getAndBitwiseOr",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::getAndBitwiseOrAcquire(JObjectArray arg0) const
	{
		return callObjectMethod(
			"getAndBitwiseOrAcquire",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::getAndBitwiseOrRelease(JObjectArray arg0) const
	{
		return callObjectMethod(
			"getAndBitwiseOrRelease",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::getAndBitwiseXor(JObjectArray arg0) const
	{
		return callObjectMethod(
			"getAndBitwiseXor",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::getAndBitwiseXorAcquire(JObjectArray arg0) const
	{
		return callObjectMethod(
			"getAndBitwiseXorAcquire",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::getAndBitwiseXorRelease(JObjectArray arg0) const
	{
		return callObjectMethod(
			"getAndBitwiseXorRelease",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::getAndSet(JObjectArray arg0) const
	{
		return callObjectMethod(
			"getAndSet",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::getAndSetAcquire(JObjectArray arg0) const
	{
		return callObjectMethod(
			"getAndSetAcquire",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::getAndSetRelease(JObjectArray arg0) const
	{
		return callObjectMethod(
			"getAndSetRelease",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::getOpaque(JObjectArray arg0) const
	{
		return callObjectMethod(
			"getOpaque",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject VarHandle::getVolatile(JObjectArray arg0) const
	{
		return callObjectMethod(
			"getVolatile",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline jboolean VarHandle::hasInvokeExactBehavior() const
	{
		return callMethod<jboolean>(
			"hasInvokeExactBehavior",
			"()Z"
		);
	}
	inline jboolean VarHandle::isAccessModeSupported(java::lang::invoke::VarHandle_AccessMode arg0) const
	{
		return callMethod<jboolean>(
			"isAccessModeSupported",
			"(Ljava/lang/invoke/VarHandle$AccessMode;)Z",
			arg0.object()
		);
	}
	inline void VarHandle::set(JObjectArray arg0) const
	{
		callMethod<void>(
			"set",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	inline void VarHandle::setOpaque(JObjectArray arg0) const
	{
		callMethod<void>(
			"setOpaque",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	inline void VarHandle::setRelease(JObjectArray arg0) const
	{
		callMethod<void>(
			"setRelease",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	inline void VarHandle::setVolatile(JObjectArray arg0) const
	{
		callMethod<void>(
			"setVolatile",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	inline java::lang::invoke::MethodHandle VarHandle::toMethodHandle(java::lang::invoke::VarHandle_AccessMode arg0) const
	{
		return callObjectMethod(
			"toMethodHandle",
			"(Ljava/lang/invoke/VarHandle$AccessMode;)Ljava/lang/invoke/MethodHandle;",
			arg0.object()
		);
	}
	inline JString VarHandle::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JClass VarHandle::varType() const
	{
		return callObjectMethod(
			"varType",
			"()Ljava/lang/Class;"
		);
	}
	inline jboolean VarHandle::weakCompareAndSet(JObjectArray arg0) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"([Ljava/lang/Object;)Z",
			arg0.object<jobjectArray>()
		);
	}
	inline jboolean VarHandle::weakCompareAndSetAcquire(JObjectArray arg0) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"([Ljava/lang/Object;)Z",
			arg0.object<jobjectArray>()
		);
	}
	inline jboolean VarHandle::weakCompareAndSetPlain(JObjectArray arg0) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"([Ljava/lang/Object;)Z",
			arg0.object<jobjectArray>()
		);
	}
	inline jboolean VarHandle::weakCompareAndSetRelease(JObjectArray arg0) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"([Ljava/lang/Object;)Z",
			arg0.object<jobjectArray>()
		);
	}
	inline java::lang::invoke::VarHandle VarHandle::withInvokeBehavior() const
	{
		return callObjectMethod(
			"withInvokeBehavior",
			"()Ljava/lang/invoke/VarHandle;"
		);
	}
	inline java::lang::invoke::VarHandle VarHandle::withInvokeExactBehavior() const
	{
		return callObjectMethod(
			"withInvokeExactBehavior",
			"()Ljava/lang/invoke/VarHandle;"
		);
	}
} // namespace java::lang::invoke

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::invoke;
#endif
