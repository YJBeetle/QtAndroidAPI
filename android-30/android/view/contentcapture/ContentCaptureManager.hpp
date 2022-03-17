#pragma once

#include "../../content/ComponentName.def.hpp"
#include "./DataRemovalRequest.def.hpp"
#include "./DataShareRequest.def.hpp"
#include "./ContentCaptureManager.def.hpp"

namespace android::view::contentcapture
{
	// Fields
	inline jint ContentCaptureManager::DATA_SHARE_ERROR_CONCURRENT_REQUEST()
	{
		return getStaticField<jint>(
			"android.view.contentcapture.ContentCaptureManager",
			"DATA_SHARE_ERROR_CONCURRENT_REQUEST"
		);
	}
	inline jint ContentCaptureManager::DATA_SHARE_ERROR_TIMEOUT_INTERRUPTED()
	{
		return getStaticField<jint>(
			"android.view.contentcapture.ContentCaptureManager",
			"DATA_SHARE_ERROR_TIMEOUT_INTERRUPTED"
		);
	}
	inline jint ContentCaptureManager::DATA_SHARE_ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.view.contentcapture.ContentCaptureManager",
			"DATA_SHARE_ERROR_UNKNOWN"
		);
	}
	
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
	inline void ContentCaptureManager::shareData(android::view::contentcapture::DataShareRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"shareData",
			"(Landroid/view/contentcapture/DataShareRequest;Ljava/util/concurrent/Executor;Landroid/view/contentcapture/DataShareWriteAdapter;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::view::contentcapture

// Base class headers

