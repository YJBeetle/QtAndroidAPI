#pragma once

#include "./ColorSpace.def.hpp"
#include "./HardwareBufferRenderer.def.hpp"
#include "./HardwareBufferRenderer_RenderRequest.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void HardwareBufferRenderer_RenderRequest::draw(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"draw",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::graphics::HardwareBufferRenderer_RenderRequest HardwareBufferRenderer_RenderRequest::setBufferTransform(jint arg0) const
	{
		return callObjectMethod(
			"setBufferTransform",
			"(I)Landroid/graphics/HardwareBufferRenderer$RenderRequest;",
			arg0
		);
	}
	inline android::graphics::HardwareBufferRenderer_RenderRequest HardwareBufferRenderer_RenderRequest::setColorSpace(android::graphics::ColorSpace arg0) const
	{
		return callObjectMethod(
			"setColorSpace",
			"(Landroid/graphics/ColorSpace;)Landroid/graphics/HardwareBufferRenderer$RenderRequest;",
			arg0.object()
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
