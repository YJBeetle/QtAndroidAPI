#pragma once

#include "../../content/Context.def.hpp"
#include "../../view/Surface.def.hpp"
#include "../../../JString.hpp"
#include "./TvInputService_HardwareSession.def.hpp"

namespace android::media::tv
{
	// Fields
	
	// Constructors
	inline TvInputService_HardwareSession::TvInputService_HardwareSession(android::content::Context arg0)
		: android::media::tv::TvInputService_Session(
			"android.media.tv.TvInputService$HardwareSession",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JString TvInputService_HardwareSession::getHardwareInputId() const
	{
		return callObjectMethod(
			"getHardwareInputId",
			"()Ljava/lang/String;"
		);
	}
	inline void TvInputService_HardwareSession::onHardwareVideoAvailable() const
	{
		callMethod<void>(
			"onHardwareVideoAvailable",
			"()V"
		);
	}
	inline void TvInputService_HardwareSession::onHardwareVideoUnavailable(jint arg0) const
	{
		callMethod<void>(
			"onHardwareVideoUnavailable",
			"(I)V",
			arg0
		);
	}
	inline jboolean TvInputService_HardwareSession::onSetSurface(android::view::Surface arg0) const
	{
		return callMethod<jboolean>(
			"onSetSurface",
			"(Landroid/view/Surface;)Z",
			arg0.object()
		);
	}
} // namespace android::media::tv

// Base class headers
#include "./TvInputService_Session.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
