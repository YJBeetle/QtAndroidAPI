#include "../../content/Intent.hpp"
#include "./MediaProjection.hpp"
#include "./MediaProjectionManager.hpp"

namespace android::media::projection
{
	// Fields
	
	// QAndroidJniObject forward
	MediaProjectionManager::MediaProjectionManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::content::Intent MediaProjectionManager::createScreenCaptureIntent()
	{
		return callObjectMethod(
			"createScreenCaptureIntent",
			"()Landroid/content/Intent;"
		);
	}
	android::media::projection::MediaProjection MediaProjectionManager::getMediaProjection(jint arg0, android::content::Intent arg1)
	{
		return callObjectMethod(
			"getMediaProjection",
			"(ILandroid/content/Intent;)Landroid/media/projection/MediaProjection;",
			arg0,
			arg1.object()
		);
	}
} // namespace android::media::projection

