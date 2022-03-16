#include "../../content/Intent.hpp"
#include "./CameraPrewarmService.hpp"

namespace android::service::media
{
	// Fields
	
	// Constructors
	CameraPrewarmService::CameraPrewarmService()
		: android::app::Service(
			"android.service.media.CameraPrewarmService",
			"()V"
		) {}
	
	// Methods
	JObject CameraPrewarmService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void CameraPrewarmService::onCooldown(jboolean arg0) const
	{
		callMethod<void>(
			"onCooldown",
			"(Z)V",
			arg0
		);
	}
	void CameraPrewarmService::onPrewarm() const
	{
		callMethod<void>(
			"onPrewarm",
			"()V"
		);
	}
	jboolean CameraPrewarmService::onUnbind(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
} // namespace android::service::media

