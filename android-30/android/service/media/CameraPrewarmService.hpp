#pragma once

#include "../../content/Intent.def.hpp"
#include "./CameraPrewarmService.def.hpp"

namespace android::service::media
{
	// Fields
	
	// Constructors
	inline CameraPrewarmService::CameraPrewarmService()
		: android::app::Service(
			"android.service.media.CameraPrewarmService",
			"()V"
		) {}
	
	// Methods
	inline JObject CameraPrewarmService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void CameraPrewarmService::onCooldown(jboolean arg0) const
	{
		callMethod<void>(
			"onCooldown",
			"(Z)V",
			arg0
		);
	}
	inline void CameraPrewarmService::onPrewarm() const
	{
		callMethod<void>(
			"onPrewarm",
			"()V"
		);
	}
	inline jboolean CameraPrewarmService::onUnbind(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
} // namespace android::service::media

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

