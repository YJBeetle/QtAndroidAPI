#include "../../content/Intent.hpp"
#include "./CameraPrewarmService.hpp"

namespace android::service::media
{
	// Fields
	
	CameraPrewarmService::CameraPrewarmService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CameraPrewarmService::CameraPrewarmService()
	{
		__thiz = QAndroidJniObject(
			"android.service.media.CameraPrewarmService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CameraPrewarmService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void CameraPrewarmService::onCooldown(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onCooldown",
			"(Z)V",
			arg0
		);
	}
	void CameraPrewarmService::onPrewarm()
	{
		__thiz.callMethod<void>(
			"onPrewarm",
			"()V"
		);
	}
	jboolean CameraPrewarmService::onUnbind(android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::service::media

