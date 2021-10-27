#include "../../content/ComponentName.hpp"
#include "./DataRemovalRequest.hpp"
#include "./ContentCaptureManager.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	ContentCaptureManager::ContentCaptureManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ContentCaptureManager::getContentCaptureConditions()
	{
		return __thiz.callObjectMethod(
			"getContentCaptureConditions",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject ContentCaptureManager::getServiceComponentName()
	{
		return __thiz.callObjectMethod(
			"getServiceComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	jboolean ContentCaptureManager::isContentCaptureEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isContentCaptureEnabled",
			"()Z"
		);
	}
	void ContentCaptureManager::removeData(android::view::contentcapture::DataRemovalRequest arg0)
	{
		__thiz.callMethod<void>(
			"removeData",
			"(Landroid/view/contentcapture/DataRemovalRequest;)V",
			arg0.__jniObject().object()
		);
	}
	void ContentCaptureManager::setContentCaptureEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setContentCaptureEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace android::view::contentcapture

