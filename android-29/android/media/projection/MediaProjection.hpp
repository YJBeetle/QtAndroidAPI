#pragma once

#include "../../hardware/display/VirtualDisplay.def.hpp"
#include "../../hardware/display/VirtualDisplay_Callback.def.hpp"
#include "./MediaProjection_Callback.def.hpp"
#include "../../os/Handler.def.hpp"
#include "../../view/Surface.def.hpp"
#include "../../../JString.hpp"
#include "./MediaProjection.def.hpp"

namespace android::media::projection
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::hardware::display::VirtualDisplay MediaProjection::createVirtualDisplay(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::view::Surface arg5, android::hardware::display::VirtualDisplay_Callback arg6, android::os::Handler arg7) const
	{
		return callObjectMethod(
			"createVirtualDisplay",
			"(Ljava/lang/String;IIIILandroid/view/Surface;Landroid/hardware/display/VirtualDisplay$Callback;Landroid/os/Handler;)Landroid/hardware/display/VirtualDisplay;",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object(),
			arg6.object(),
			arg7.object()
		);
	}
	inline void MediaProjection::registerCallback(android::media::projection::MediaProjection_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/media/projection/MediaProjection$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaProjection::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
	inline void MediaProjection::unregisterCallback(android::media::projection::MediaProjection_Callback arg0) const
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/media/projection/MediaProjection$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::media::projection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::projection;
#endif
