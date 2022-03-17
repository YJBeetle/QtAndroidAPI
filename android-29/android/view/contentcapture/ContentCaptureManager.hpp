#pragma once

#include "../../content/ComponentName.def.hpp"
#include "./DataRemovalRequest.def.hpp"
#include "./ContentCaptureManager.def.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject ContentCaptureManager::getContentCaptureConditions() const
	{
		return callObjectMethod(
			"getContentCaptureConditions",
			"()Ljava/util/Set;"
		);
	}
	inline android::content::ComponentName ContentCaptureManager::getServiceComponentName() const
	{
		return callObjectMethod(
			"getServiceComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	inline jboolean ContentCaptureManager::isContentCaptureEnabled() const
	{
		return callMethod<jboolean>(
			"isContentCaptureEnabled",
			"()Z"
		);
	}
	inline void ContentCaptureManager::removeData(android::view::contentcapture::DataRemovalRequest arg0) const
	{
		callMethod<void>(
			"removeData",
			"(Landroid/view/contentcapture/DataRemovalRequest;)V",
			arg0.object()
		);
	}
	inline void ContentCaptureManager::setContentCaptureEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setContentCaptureEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace android::view::contentcapture

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::contentcapture;
#endif
