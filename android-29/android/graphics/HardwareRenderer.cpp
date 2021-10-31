#include "./HardwareRenderer_FrameRenderRequest.hpp"
#include "./RenderNode.hpp"
#include "../view/Surface.hpp"
#include "./HardwareRenderer.hpp"

namespace android::graphics
{
	// Fields
	jint HardwareRenderer::SYNC_CONTEXT_IS_STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_CONTEXT_IS_STOPPED"
		);
	}
	jint HardwareRenderer::SYNC_FRAME_DROPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_FRAME_DROPPED"
		);
	}
	jint HardwareRenderer::SYNC_LOST_SURFACE_REWARD_IF_FOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_LOST_SURFACE_REWARD_IF_FOUND"
		);
	}
	jint HardwareRenderer::SYNC_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_OK"
		);
	}
	jint HardwareRenderer::SYNC_REDRAW_REQUESTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_REDRAW_REQUESTED"
		);
	}
	
	// QAndroidJniObject forward
	HardwareRenderer::HardwareRenderer(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	HardwareRenderer::HardwareRenderer()
		: __JniBaseClass(
			"android.graphics.HardwareRenderer",
			"()V"
		) {}
	
	// Methods
	void HardwareRenderer::clearContent()
	{
		callMethod<void>(
			"clearContent",
			"()V"
		);
	}
	android::graphics::HardwareRenderer_FrameRenderRequest HardwareRenderer::createRenderRequest()
	{
		return callObjectMethod(
			"createRenderRequest",
			"()Landroid/graphics/HardwareRenderer$FrameRenderRequest;"
		);
	}
	void HardwareRenderer::destroy()
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	jboolean HardwareRenderer::isOpaque()
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	void HardwareRenderer::notifyFramePending()
	{
		callMethod<void>(
			"notifyFramePending",
			"()V"
		);
	}
	void HardwareRenderer::setContentRoot(android::graphics::RenderNode arg0)
	{
		callMethod<void>(
			"setContentRoot",
			"(Landroid/graphics/RenderNode;)V",
			arg0.object()
		);
	}
	void HardwareRenderer::setLightSourceAlpha(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"setLightSourceAlpha",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void HardwareRenderer::setLightSourceGeometry(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
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
	void HardwareRenderer::setName(jstring arg0)
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HardwareRenderer::setOpaque(jboolean arg0)
	{
		callMethod<void>(
			"setOpaque",
			"(Z)V",
			arg0
		);
	}
	void HardwareRenderer::setSurface(android::view::Surface arg0)
	{
		callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void HardwareRenderer::start()
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	void HardwareRenderer::stop()
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::graphics

