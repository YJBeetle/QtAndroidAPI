#pragma once

#include "./HardwareRenderer_FrameRenderRequest.def.hpp"
#include "./RenderNode.def.hpp"
#include "../view/Surface.def.hpp"
#include "../../JString.hpp"
#include "./HardwareRenderer.def.hpp"

namespace android::graphics
{
	// Fields
	inline jint HardwareRenderer::SYNC_CONTEXT_IS_STOPPED()
	{
		return getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_CONTEXT_IS_STOPPED"
		);
	}
	inline jint HardwareRenderer::SYNC_FRAME_DROPPED()
	{
		return getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_FRAME_DROPPED"
		);
	}
	inline jint HardwareRenderer::SYNC_LOST_SURFACE_REWARD_IF_FOUND()
	{
		return getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_LOST_SURFACE_REWARD_IF_FOUND"
		);
	}
	inline jint HardwareRenderer::SYNC_OK()
	{
		return getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_OK"
		);
	}
	inline jint HardwareRenderer::SYNC_REDRAW_REQUESTED()
	{
		return getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_REDRAW_REQUESTED"
		);
	}
	
	// Constructors
	inline HardwareRenderer::HardwareRenderer()
		: JObject(
			"android.graphics.HardwareRenderer",
			"()V"
		) {}
	
	// Methods
	inline void HardwareRenderer::clearContent() const
	{
		callMethod<void>(
			"clearContent",
			"()V"
		);
	}
	inline android::graphics::HardwareRenderer_FrameRenderRequest HardwareRenderer::createRenderRequest() const
	{
		return callObjectMethod(
			"createRenderRequest",
			"()Landroid/graphics/HardwareRenderer$FrameRenderRequest;"
		);
	}
	inline void HardwareRenderer::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	inline jboolean HardwareRenderer::isOpaque() const
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	inline void HardwareRenderer::notifyFramePending() const
	{
		callMethod<void>(
			"notifyFramePending",
			"()V"
		);
	}
	inline void HardwareRenderer::setContentRoot(android::graphics::RenderNode arg0) const
	{
		callMethod<void>(
			"setContentRoot",
			"(Landroid/graphics/RenderNode;)V",
			arg0.object()
		);
	}
	inline void HardwareRenderer::setLightSourceAlpha(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setLightSourceAlpha",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void HardwareRenderer::setLightSourceGeometry(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	inline void HardwareRenderer::setName(JString arg0) const
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void HardwareRenderer::setOpaque(jboolean arg0) const
	{
		callMethod<void>(
			"setOpaque",
			"(Z)V",
			arg0
		);
	}
	inline void HardwareRenderer::setSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	inline void HardwareRenderer::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	inline void HardwareRenderer::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
