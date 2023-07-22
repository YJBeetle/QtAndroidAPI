#pragma once

#include "../os/Bundle.def.hpp"
#include "../view/Surface.def.hpp"
#include "../../JString.hpp"
#include "./CloudMediaProvider_CloudMediaSurfaceController.def.hpp"

namespace android::provider
{
	// Fields
	
	// Constructors
	inline CloudMediaProvider_CloudMediaSurfaceController::CloudMediaProvider_CloudMediaSurfaceController()
		: JObject(
			"android.provider.CloudMediaProvider$CloudMediaSurfaceController",
			"()V"
		) {}
	
	// Methods
	inline void CloudMediaProvider_CloudMediaSurfaceController::onConfigChange(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onConfigChange",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void CloudMediaProvider_CloudMediaSurfaceController::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	inline void CloudMediaProvider_CloudMediaSurfaceController::onMediaPause(jint arg0) const
	{
		callMethod<void>(
			"onMediaPause",
			"(I)V",
			arg0
		);
	}
	inline void CloudMediaProvider_CloudMediaSurfaceController::onMediaPlay(jint arg0) const
	{
		callMethod<void>(
			"onMediaPlay",
			"(I)V",
			arg0
		);
	}
	inline void CloudMediaProvider_CloudMediaSurfaceController::onMediaSeekTo(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"onMediaSeekTo",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	inline void CloudMediaProvider_CloudMediaSurfaceController::onPlayerCreate() const
	{
		callMethod<void>(
			"onPlayerCreate",
			"()V"
		);
	}
	inline void CloudMediaProvider_CloudMediaSurfaceController::onPlayerRelease() const
	{
		callMethod<void>(
			"onPlayerRelease",
			"()V"
		);
	}
	inline void CloudMediaProvider_CloudMediaSurfaceController::onSurfaceChanged(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"onSurfaceChanged",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void CloudMediaProvider_CloudMediaSurfaceController::onSurfaceCreated(jint arg0, android::view::Surface arg1, JString arg2) const
	{
		callMethod<void>(
			"onSurfaceCreated",
			"(ILandroid/view/Surface;Ljava/lang/String;)V",
			arg0,
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline void CloudMediaProvider_CloudMediaSurfaceController::onSurfaceDestroyed(jint arg0) const
	{
		callMethod<void>(
			"onSurfaceDestroyed",
			"(I)V",
			arg0
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
