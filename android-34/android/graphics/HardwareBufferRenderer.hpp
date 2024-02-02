#pragma once

#include "./HardwareBufferRenderer_RenderRequest.def.hpp"
#include "./RenderNode.def.hpp"
#include "../hardware/HardwareBuffer.def.hpp"
#include "./HardwareBufferRenderer.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline HardwareBufferRenderer::HardwareBufferRenderer(android::hardware::HardwareBuffer arg0)
		: JObject(
			"android.graphics.HardwareBufferRenderer",
			"(Landroid/hardware/HardwareBuffer;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void HardwareBufferRenderer::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jboolean HardwareBufferRenderer::isClosed() const
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	inline android::graphics::HardwareBufferRenderer_RenderRequest HardwareBufferRenderer::obtainRenderRequest() const
	{
		return callObjectMethod(
			"obtainRenderRequest",
			"()Landroid/graphics/HardwareBufferRenderer$RenderRequest;"
		);
	}
	inline void HardwareBufferRenderer::setContentRoot(android::graphics::RenderNode arg0) const
	{
		callMethod<void>(
			"setContentRoot",
			"(Landroid/graphics/RenderNode;)V",
			arg0.object()
		);
	}
	inline void HardwareBufferRenderer::setLightSourceAlpha(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setLightSourceAlpha",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void HardwareBufferRenderer::setLightSourceGeometry(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		callMethod<void>(
			"setLightSourceGeometry",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
