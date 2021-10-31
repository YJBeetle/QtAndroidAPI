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
	
	HardwareRenderer::HardwareRenderer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	HardwareRenderer::HardwareRenderer()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.HardwareRenderer",
			"()V"
		);
	}
	
	// Methods
	void HardwareRenderer::clearContent()
	{
		__thiz.callMethod<void>(
			"clearContent",
			"()V"
		);
	}
	QAndroidJniObject HardwareRenderer::createRenderRequest()
	{
		return __thiz.callObjectMethod(
			"createRenderRequest",
			"()Landroid/graphics/HardwareRenderer$FrameRenderRequest;"
		);
	}
	void HardwareRenderer::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
		);
	}
	jboolean HardwareRenderer::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	void HardwareRenderer::notifyFramePending()
	{
		__thiz.callMethod<void>(
			"notifyFramePending",
			"()V"
		);
	}
	void HardwareRenderer::setContentRoot(android::graphics::RenderNode arg0)
	{
		__thiz.callMethod<void>(
			"setContentRoot",
			"(Landroid/graphics/RenderNode;)V",
			arg0.__jniObject().object()
		);
	}
	void HardwareRenderer::setLightSourceAlpha(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setLightSourceAlpha",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void HardwareRenderer::setLightSourceGeometry(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HardwareRenderer::setOpaque(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOpaque",
			"(Z)V",
			arg0
		);
	}
	void HardwareRenderer::setSurface(android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	void HardwareRenderer::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	void HardwareRenderer::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::graphics

