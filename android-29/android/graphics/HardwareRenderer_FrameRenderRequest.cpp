#include "./HardwareRenderer.hpp"
#include "./HardwareRenderer_FrameRenderRequest.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	HardwareRenderer_FrameRenderRequest::HardwareRenderer_FrameRenderRequest(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject HardwareRenderer_FrameRenderRequest::setFrameCommitCallback(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"setFrameCommitCallback",
			"(Ljava/util/concurrent/Executor;Ljava/lang/Runnable;)Landroid/graphics/HardwareRenderer$FrameRenderRequest;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject HardwareRenderer_FrameRenderRequest::setVsyncTime(jlong arg0)
	{
		return callObjectMethod(
			"setVsyncTime",
			"(J)Landroid/graphics/HardwareRenderer$FrameRenderRequest;",
			arg0
		);
	}
	QAndroidJniObject HardwareRenderer_FrameRenderRequest::setWaitForPresent(jboolean arg0)
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

