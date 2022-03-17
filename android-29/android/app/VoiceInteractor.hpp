#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JBooleanArray.hpp"
#include "./VoiceInteractor_Request.def.hpp"
#include "../../JString.hpp"
#include "./VoiceInteractor.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::app::VoiceInteractor_Request VoiceInteractor::getActiveRequest(JString arg0) const
	{
		return callObjectMethod(
			"getActiveRequest",
			"(Ljava/lang/String;)Landroid/app/VoiceInteractor$Request;",
			arg0.object<jstring>()
		);
	}
	inline JArray VoiceInteractor::getActiveRequests() const
	{
		return callObjectMethod(
			"getActiveRequests",
			"()[Landroid/app/VoiceInteractor$Request;"
		);
	}
	inline jboolean VoiceInteractor::isDestroyed() const
	{
		return callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	inline void VoiceInteractor::notifyDirectActionsChanged() const
	{
		callMethod<void>(
			"notifyDirectActionsChanged",
			"()V"
		);
	}
	inline jboolean VoiceInteractor::registerOnDestroyedCallback(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"registerOnDestroyedCallback",
			"(Ljava/util/concurrent/Executor;Ljava/lang/Runnable;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean VoiceInteractor::submitRequest(android::app::VoiceInteractor_Request arg0) const
	{
		return callMethod<jboolean>(
			"submitRequest",
			"(Landroid/app/VoiceInteractor$Request;)Z",
			arg0.object()
		);
	}
	inline jboolean VoiceInteractor::submitRequest(android::app::VoiceInteractor_Request arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"submitRequest",
			"(Landroid/app/VoiceInteractor$Request;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JBooleanArray VoiceInteractor::supportsCommands(JArray arg0) const
	{
		return callObjectMethod(
			"supportsCommands",
			"([Ljava/lang/String;)[Z",
			arg0.object<jarray>()
		);
	}
	inline jboolean VoiceInteractor::unregisterOnDestroyedCallback(JObject arg0) const
	{
		return callMethod<jboolean>(
			"unregisterOnDestroyedCallback",
			"(Ljava/lang/Runnable;)Z",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
