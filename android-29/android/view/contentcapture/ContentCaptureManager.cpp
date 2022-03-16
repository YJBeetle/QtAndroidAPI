#include "../../content/ComponentName.hpp"
#include "./DataRemovalRequest.hpp"
#include "./ContentCaptureManager.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject ContentCaptureManager::getContentCaptureConditions() const
	{
		return callObjectMethod(
			"getContentCaptureConditions",
			"()Ljava/util/Set;"
		);
	}
	android::content::ComponentName ContentCaptureManager::getServiceComponentName() const
	{
		return callObjectMethod(
			"getServiceComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	jboolean ContentCaptureManager::isContentCaptureEnabled() const
	{
		return callMethod<jboolean>(
			"isContentCaptureEnabled",
			"()Z"
		);
	}
	void ContentCaptureManager::removeData(android::view::contentcapture::DataRemovalRequest arg0) const
	{
		callMethod<void>(
			"removeData",
			"(Landroid/view/contentcapture/DataRemovalRequest;)V",
			arg0.object()
		);
	}
	void ContentCaptureManager::setContentCaptureEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setContentCaptureEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace android::view::contentcapture

