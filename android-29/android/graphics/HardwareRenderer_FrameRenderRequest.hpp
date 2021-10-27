#pragma once

#ifndef ANDROID_GRAPHICS_HARDWARERENDERER_FRAMERENDERREQUEST
#define ANDROID_GRAPHICS_HARDWARERENDERER_FRAMERENDERREQUEST

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class HardwareRenderer;
}

namespace __jni_impl::android::graphics
{
	class HardwareRenderer_FrameRenderRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject setFrameCommitCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject setVsyncTime(jlong arg0);
		QAndroidJniObject setWaitForPresent(jboolean arg0);
		jint syncAndDraw();
	};
} // namespace __jni_impl::android::graphics

#include "HardwareRenderer.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void HardwareRenderer_FrameRenderRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.HardwareRenderer$FrameRenderRequest",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject HardwareRenderer_FrameRenderRequest::setFrameCommitCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
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
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class HardwareRenderer_FrameRenderRequest : public __jni_impl::android::graphics::HardwareRenderer_FrameRenderRequest
	{
	public:
		HardwareRenderer_FrameRenderRequest(QAndroidJniObject obj) { __thiz = obj; }
		HardwareRenderer_FrameRenderRequest()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_HARDWARERENDERER_FRAMERENDERREQUEST

