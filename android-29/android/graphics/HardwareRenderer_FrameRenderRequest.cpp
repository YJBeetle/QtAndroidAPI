#include "./HardwareRenderer.hpp"
#include "./HardwareRenderer_FrameRenderRequest.hpp"

namespace android::graphics
{
	// Fields
	
	HardwareRenderer_FrameRenderRequest::HardwareRenderer_FrameRenderRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject HardwareRenderer_FrameRenderRequest::setFrameCommitCallback(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"setFrameCommitCallback",
			"(Ljava/util/concurrent/Executor;Ljava/lang/Runnable;)Landroid/graphics/HardwareRenderer$FrameRenderRequest;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject HardwareRenderer_FrameRenderRequest::setVsyncTime(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setVsyncTime",
			"(J)Landroid/graphics/HardwareRenderer$FrameRenderRequest;",
			arg0
		);
	}
	QAndroidJniObject HardwareRenderer_FrameRenderRequest::setWaitForPresent(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setWaitForPresent",
			"(Z)Landroid/graphics/HardwareRenderer$FrameRenderRequest;",
			arg0
		);
	}
	jint HardwareRenderer_FrameRenderRequest::syncAndDraw()
	{
		return __thiz.callMethod<jint>(
			"syncAndDraw",
			"()I"
		);
	}
} // namespace android::graphics

