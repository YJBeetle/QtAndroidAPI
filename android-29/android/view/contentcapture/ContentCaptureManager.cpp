#include "../../content/ComponentName.hpp"
#include "./DataRemovalRequest.hpp"
#include "./ContentCaptureManager.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	// QAndroidJniObject forward
	ContentCaptureManager::ContentCaptureManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass ContentCaptureManager::getContentCaptureConditions()
	{
		return callObjectMethod(
			"getContentCaptureConditions",
			"()Ljava/util/Set;"
		);
	}
	android::content::ComponentName ContentCaptureManager::getServiceComponentName()
	{
		return callObjectMethod(
			"getServiceComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	jboolean ContentCaptureManager::isContentCaptureEnabled()
	{
		return callMethod<jboolean>(
			"isContentCaptureEnabled",
			"()Z"
		);
	}
	void ContentCaptureManager::removeData(android::view::contentcapture::DataRemovalRequest arg0)
	{
		callMethod<void>(
			"removeData",
			"(Landroid/view/contentcapture/DataRemovalRequest;)V",
			arg0.object()
		);
	}
	void ContentCaptureManager::setContentCaptureEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setContentCaptureEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace android::view::contentcapture

