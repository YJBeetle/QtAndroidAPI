#pragma once

#include "../content/Context.def.hpp"
#include "../content/ContextParams.def.hpp"
#include "../content/Intent.def.hpp"
#include "./RecognitionService_Callback.def.hpp"
#include "./RecognitionService_SupportCallback.def.hpp"
#include "../../JString.hpp"
#include "./RecognitionService.def.hpp"

namespace android::speech
{
	// Fields
	inline JString RecognitionService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.speech.RecognitionService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognitionService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.speech.RecognitionService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline RecognitionService::RecognitionService()
		: android::app::Service(
			"android.speech.RecognitionService",
			"()V"
		) {}
	
	// Methods
	inline android::content::Context RecognitionService::createContext(android::content::ContextParams arg0) const
	{
		return callObjectMethod(
			"createContext",
			"(Landroid/content/ContextParams;)Landroid/content/Context;",
			arg0.object()
		);
	}
	inline JObject RecognitionService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void RecognitionService::onCheckRecognitionSupport(android::content::Intent arg0, android::speech::RecognitionService_SupportCallback arg1) const
	{
		callMethod<void>(
			"onCheckRecognitionSupport",
			"(Landroid/content/Intent;Landroid/speech/RecognitionService$SupportCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RecognitionService::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	inline void RecognitionService::onTriggerModelDownload(android::content::Intent arg0) const
	{
		callMethod<void>(
			"onTriggerModelDownload",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
} // namespace android::speech

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::speech;
#endif
