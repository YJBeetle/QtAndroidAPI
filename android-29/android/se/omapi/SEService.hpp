#pragma once

#include "../../../JArray.hpp"
#include "../../content/Context.def.hpp"
#include "../../../JString.hpp"
#include "./SEService.def.hpp"

namespace android::se::omapi
{
	// Fields
	
	// Constructors
	inline SEService::SEService(android::content::Context arg0, JObject arg1, JObject arg2)
		: JObject(
			"android.se.omapi.SEService",
			"(Landroid/content/Context;Ljava/util/concurrent/Executor;Landroid/se/omapi/SEService$OnConnectedListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline JArray SEService::getReaders() const
	{
		return callObjectMethod(
			"getReaders",
			"()[Landroid/se/omapi/Reader;"
		);
	}
	inline JString SEService::getVersion() const
	{
		return callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean SEService::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	inline void SEService::shutdown() const
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
} // namespace android::se::omapi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::se::omapi;
#endif
