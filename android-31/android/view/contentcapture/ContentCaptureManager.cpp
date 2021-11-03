#include "../../content/ComponentName.hpp"
#include "./DataRemovalRequest.hpp"
#include "./DataShareRequest.hpp"
#include "./ContentCaptureManager.hpp"

namespace android::view::contentcapture
{
	// Fields
	jint ContentCaptureManager::DATA_SHARE_ERROR_CONCURRENT_REQUEST()
	{
		return getStaticField<jint>(
			"android.view.contentcapture.ContentCaptureManager",
			"DATA_SHARE_ERROR_CONCURRENT_REQUEST"
		);
	}
	jint ContentCaptureManager::DATA_SHARE_ERROR_TIMEOUT_INTERRUPTED()
	{
		return getStaticField<jint>(
			"android.view.contentcapture.ContentCaptureManager",
			"DATA_SHARE_ERROR_TIMEOUT_INTERRUPTED"
		);
	}
	jint ContentCaptureManager::DATA_SHARE_ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.view.contentcapture.ContentCaptureManager",
			"DATA_SHARE_ERROR_UNKNOWN"
		);
	}
	
	// QJniObject forward
	ContentCaptureManager::ContentCaptureManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject ContentCaptureManager::getContentCaptureConditions()
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
	void ContentCaptureManager::shareData(android::view::contentcapture::DataShareRequest arg0, JObject arg1, JObject arg2)
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

