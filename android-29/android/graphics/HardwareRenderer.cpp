#include "./HardwareRenderer_FrameRenderRequest.hpp"
#include "./RenderNode.hpp"
#include "../view/Surface.hpp"
#include "../../JString.hpp"
#include "./HardwareRenderer.hpp"

namespace android::graphics
{
	// Fields
	jint HardwareRenderer::SYNC_CONTEXT_IS_STOPPED()
	{
		return getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_CONTEXT_IS_STOPPED"
		);
	}
	jint HardwareRenderer::SYNC_FRAME_DROPPED()
	{
		return getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_FRAME_DROPPED"
		);
	}
	jint HardwareRenderer::SYNC_LOST_SURFACE_REWARD_IF_FOUND()
	{
		return getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_LOST_SURFACE_REWARD_IF_FOUND"
		);
	}
	jint HardwareRenderer::SYNC_OK()
	{
		return getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_OK"
		);
	}
	jint HardwareRenderer::SYNC_REDRAW_REQUESTED()
	{
		return getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_REDRAW_REQUESTED"
		);
	}
	
	// QJniObject forward
	HardwareRenderer::HardwareRenderer(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	HardwareRenderer::HardwareRenderer()
		: JObject(
			"android.graphics.HardwareRenderer",
			"()V"
		) {}
	
	// Methods
	void HardwareRenderer::clearContent() const
	{
		callMethod<void>(
			"clearContent",
			"()V"
		);
	}
	android::graphics::HardwareRenderer_FrameRenderRequest HardwareRenderer::createRenderRequest() const
	{
		return callObjectMethod(
			"createRenderRequest",
			"()Landroid/graphics/HardwareRenderer$FrameRenderRequest;"
		);
	}
	void HardwareRenderer::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	jboolean HardwareRenderer::isOpaque() const
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	void HardwareRenderer::notifyFramePending() const
	{
		callMethod<void>(
			"notifyFramePending",
			"()V"
		);
	}
	void HardwareRenderer::setContentRoot(android::graphics::RenderNode arg0) const
	{
		callMethod<void>(
			"setContentRoot",
			"(Landroid/graphics/RenderNode;)V",
			arg0.object()
		);
	}
	void HardwareRenderer::setLightSourceAlpha(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setLightSourceAlpha",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void HardwareRenderer::setLightSourceGeometry(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	void HardwareRenderer::setName(JString arg0) const
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void HardwareRenderer::setOpaque(jboolean arg0) const
	{
		callMethod<void>(
			"setOpaque",
			"(Z)V",
			arg0
		);
	}
	void HardwareRenderer::setSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void HardwareRenderer::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	void HardwareRenderer::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::graphics

