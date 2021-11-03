#include "./HardwareRenderer.hpp"
#include "./HardwareRenderer_FrameRenderRequest.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	HardwareRenderer_FrameRenderRequest::HardwareRenderer_FrameRenderRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::HardwareRenderer_FrameRenderRequest HardwareRenderer_FrameRenderRequest::setFrameCommitCallback(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"setFrameCommitCallback",
			"(Ljava/util/concurrent/Executor;Ljava/lang/Runnable;)Landroid/graphics/HardwareRenderer$FrameRenderRequest;",
			arg0.object(),
			arg1.object()
		);
	}
	android::graphics::HardwareRenderer_FrameRenderRequest HardwareRenderer_FrameRenderRequest::setVsyncTime(jlong arg0)
	{
		return callObjectMethod(
			"setVsyncTime",
			"(J)Landroid/graphics/HardwareRenderer$FrameRenderRequest;",
			arg0
		);
	}
	android::graphics::HardwareRenderer_FrameRenderRequest HardwareRenderer_FrameRenderRequest::setWaitForPresent(jboolean arg0)
	{
		return callObjectMethod(
			"setWaitForPresent",
			"(Z)Landroid/graphics/HardwareRenderer$FrameRenderRequest;",
			arg0
		);
	}
	jint HardwareRenderer_FrameRenderRequest::syncAndDraw()
	{
		return callMethod<jint>(
			"syncAndDraw",
			"()I"
		);
	}
} // namespace android::graphics

