#pragma once

#include "../../../JObjectArray.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./MethodHandle.def.hpp"
#include "./MethodType.def.hpp"
#include "./WrongMethodTypeException.def.hpp"
#include "./CallSite.def.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::lang::invoke::MethodHandle CallSite::dynamicInvoker() const
	{
		return callObjectMethod(
			"dynamicInvoker",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	inline java::lang::invoke::MethodHandle CallSite::getTarget() const
	{
		return callObjectMethod(
			"getTarget",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	inline void CallSite::setTarget(java::lang::invoke::MethodHandle arg0) const
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.object()
		);
	}
	inline java::lang::invoke::MethodType CallSite::type() const
	{
		return callObjectMethod(
			"type",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
} // namespace java::lang::invoke

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::invoke;
#endif
