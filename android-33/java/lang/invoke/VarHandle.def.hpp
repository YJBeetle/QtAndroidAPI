#pragma once

#include "../../../JObject.hpp"

class JObjectArray;
class JArray;
class JArray;
class JClass;
class JObject;
namespace java::lang
{
	class RuntimeException;
}
class JString;
namespace java::lang::invoke
{
	class MethodHandle;
}
namespace java::lang::invoke
{
	class MethodType;
}
namespace java::lang::invoke
{
	class VarHandle_AccessMode;
}
namespace java::util
{
	class Optional;
}

namespace java::lang::invoke
{
	class VarHandle : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VarHandle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VarHandle(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static void acquireFence();
		static void fullFence();
		static void loadLoadFence();
		static void releaseFence();
		static void storeStoreFence();
		java::lang::invoke::MethodType accessModeType(java::lang::invoke::VarHandle_AccessMode arg0) const;
		JObject compareAndExchange(JObjectArray arg0) const;
		JObject compareAndExchangeAcquire(JObjectArray arg0) const;
		JObject compareAndExchangeRelease(JObjectArray arg0) const;
		jboolean compareAndSet(JObjectArray arg0) const;
		JObject coordinateTypes() const;
		java::util::Optional describeConstable() const;
		JObject get(JObjectArray arg0) const;
		JObject getAcquire(JObjectArray arg0) const;
		JObject getAndAdd(JObjectArray arg0) const;
		JObject getAndAddAcquire(JObjectArray arg0) const;
		JObject getAndAddRelease(JObjectArray arg0) const;
		JObject getAndBitwiseAnd(JObjectArray arg0) const;
		JObject getAndBitwiseAndAcquire(JObjectArray arg0) const;
		JObject getAndBitwiseAndRelease(JObjectArray arg0) const;
		JObject getAndBitwiseOr(JObjectArray arg0) const;
		JObject getAndBitwiseOrAcquire(JObjectArray arg0) const;
		JObject getAndBitwiseOrRelease(JObjectArray arg0) const;
		JObject getAndBitwiseXor(JObjectArray arg0) const;
		JObject getAndBitwiseXorAcquire(JObjectArray arg0) const;
		JObject getAndBitwiseXorRelease(JObjectArray arg0) const;
		JObject getAndSet(JObjectArray arg0) const;
		JObject getAndSetAcquire(JObjectArray arg0) const;
		JObject getAndSetRelease(JObjectArray arg0) const;
		JObject getOpaque(JObjectArray arg0) const;
		JObject getVolatile(JObjectArray arg0) const;
		jboolean hasInvokeExactBehavior() const;
		jboolean isAccessModeSupported(java::lang::invoke::VarHandle_AccessMode arg0) const;
		void set(JObjectArray arg0) const;
		void setOpaque(JObjectArray arg0) const;
		void setRelease(JObjectArray arg0) const;
		void setVolatile(JObjectArray arg0) const;
		java::lang::invoke::MethodHandle toMethodHandle(java::lang::invoke::VarHandle_AccessMode arg0) const;
		JString toString() const;
		JClass varType() const;
		jboolean weakCompareAndSet(JObjectArray arg0) const;
		jboolean weakCompareAndSetAcquire(JObjectArray arg0) const;
		jboolean weakCompareAndSetPlain(JObjectArray arg0) const;
		jboolean weakCompareAndSetRelease(JObjectArray arg0) const;
		java::lang::invoke::VarHandle withInvokeBehavior() const;
		java::lang::invoke::VarHandle withInvokeExactBehavior() const;
	};
} // namespace java::lang::invoke

