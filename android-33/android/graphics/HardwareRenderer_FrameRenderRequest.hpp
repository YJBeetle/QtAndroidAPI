#pragma once

#include "./HardwareRenderer.def.hpp"
#include "./HardwareRenderer_FrameRenderRequest.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::graphics::HardwareRenderer_FrameRenderRequest HardwareRenderer_FrameRenderRequest::setFrameCommitCallback(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setFrameCommitCallback",
			"(Ljava/util/concurrent/Executor;Ljava/lang/Runnable;)Landroid/graphics/HardwareRenderer$FrameRenderRequest;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::graphics::HardwareRenderer_FrameRenderRequest HardwareRenderer_FrameRenderRequest::setVsyncTime(jlong arg0) const
	{
		return callObjectMethod(
			"setVsyncTime",
			"(J)Landroid/graphics/HardwareRenderer$FrameRenderRequest;",
			arg0
		);
	}
	inline android::graphics::HardwareRenderer_FrameRenderRequest HardwareRenderer_FrameRenderRequest::setWaitForPresent(jboolean arg0) const
	{
		return callObjectMethod(
			"setWaitForPresent",
			"(Z)Landroid/graphics/HardwareRenderer$FrameRenderRequest;",
			arg0
		);
	}
	inline jint HardwareRenderer_FrameRenderRequest::syncAndDraw() const
	{
		return callMethod<jint>(
			"syncAndDraw",
			"()I"
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
