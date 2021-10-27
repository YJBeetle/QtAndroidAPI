#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "./MediaProjection.hpp"
#include "./MediaProjectionManager.hpp"

namespace android::media::projection
{
	// Fields
	
	MediaProjectionManager::MediaProjectionManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MediaProjectionManager::createScreenCaptureIntent()
	{
		return __thiz.callObjectMethod(
			"createScreenCaptureIntent",
			"()Landroid/content/Intent;"
		);
	}
	QAndroidJniObject MediaProjectionManager::getMediaProjection(jint arg0, android::content::Intent arg1)
	{
		return __thiz.callObjectMethod(
			"getMediaProjection",
			"(ILandroid/content/Intent;)Landroid/media/projection/MediaProjection;",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace android::media::projection

