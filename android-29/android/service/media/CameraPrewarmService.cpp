#include "../../content/Intent.hpp"
#include "./CameraPrewarmService.hpp"

namespace android::service::media
{
	// Fields
	
	// QJniObject forward
	CameraPrewarmService::CameraPrewarmService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	CameraPrewarmService::CameraPrewarmService()
		: android::app::Service(
			"android.service.media.CameraPrewarmService",
			"()V"
		) {}
	
	// Methods
	__JniBaseClass CameraPrewarmService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void CameraPrewarmService::onCooldown(jboolean arg0)
	{
		callMethod<void>(
			"onCooldown",
			"(Z)V",
			arg0
		);
	}
	void CameraPrewarmService::onPrewarm()
	{
		callMethod<void>(
			"onPrewarm",
			"()V"
		);
	}
	jboolean CameraPrewarmService::onUnbind(android::content::Intent arg0)
	{
		return callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
} // namespace android::service::media

