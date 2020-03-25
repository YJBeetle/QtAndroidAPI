#pragma once

#ifndef ANDROID_GRAPHICS_HARDWARERENDERER
#define ANDROID_GRAPHICS_HARDWARERENDERER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class RenderNode;
}
namespace __jni_impl::android::graphics
{
	class HardwareRenderer_FrameRenderRequest;
}
namespace __jni_impl::android::view
{
	class Surface;
}

namespace __jni_impl::android::graphics
{
	class HardwareRenderer : public __JniBaseClass
	{
	public:
		// Fields
		static jint SYNC_CONTEXT_IS_STOPPED();
		static jint SYNC_FRAME_DROPPED();
		static jint SYNC_LOST_SURFACE_REWARD_IF_FOUND();
		static jint SYNC_OK();
		static jint SYNC_REDRAW_REQUESTED();
		
		// Constructors
		void __constructor();
		
		// Methods
		void start();
		void stop();
		void setName(jstring arg0);
		void destroy();
		void setOpaque(jboolean arg0);
		jboolean isOpaque();
		void setLightSourceGeometry(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setLightSourceAlpha(jfloat arg0, jfloat arg1);
		void setContentRoot(__jni_impl::android::graphics::RenderNode arg0);
		QAndroidJniObject createRenderRequest();
		void clearContent();
		void notifyFramePending();
		void setSurface(__jni_impl::android::view::Surface arg0);
	};
} // namespace __jni_impl::android::graphics

#include "RenderNode.hpp"
#include "HardwareRenderer_FrameRenderRequest.hpp"
#include "../view/Surface.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	jint HardwareRenderer::SYNC_CONTEXT_IS_STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_CONTEXT_IS_STOPPED");
	}
	jint HardwareRenderer::SYNC_FRAME_DROPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_FRAME_DROPPED");
	}
	jint HardwareRenderer::SYNC_LOST_SURFACE_REWARD_IF_FOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_LOST_SURFACE_REWARD_IF_FOUND");
	}
	jint HardwareRenderer::SYNC_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_OK");
	}
	jint HardwareRenderer::SYNC_REDRAW_REQUESTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.HardwareRenderer",
			"SYNC_REDRAW_REQUESTED");
	}
	
	// Constructors
	void HardwareRenderer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.HardwareRenderer",
			"()V");
	}
	
	// Methods
	void HardwareRenderer::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V");
	}
	void HardwareRenderer::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V");
	}
	void HardwareRenderer::setName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void HardwareRenderer::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V");
	}
	void HardwareRenderer::setOpaque(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOpaque",
			"(Z)V",
			arg0);
	}
	jboolean HardwareRenderer::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z");
	}
	void HardwareRenderer::setLightSourceGeometry(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"setLightSourceGeometry",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void HardwareRenderer::setLightSourceAlpha(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setLightSourceAlpha",
			"(FF)V",
			arg0,
			arg1);
	}
	void HardwareRenderer::setContentRoot(__jni_impl::android::graphics::RenderNode arg0)
	{
		__thiz.callMethod<void>(
			"setContentRoot",
			"(Landroid/graphics/RenderNode;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject HardwareRenderer::createRenderRequest()
	{
		return __thiz.callObjectMethod(
			"createRenderRequest",
			"()Landroid/graphics/HardwareRenderer$FrameRenderRequest;");
	}
	void HardwareRenderer::clearContent()
	{
		__thiz.callMethod<void>(
			"clearContent",
			"()V");
	}
	void HardwareRenderer::notifyFramePending()
	{
		__thiz.callMethod<void>(
			"notifyFramePending",
			"()V");
	}
	void HardwareRenderer::setSurface(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class HardwareRenderer : public __jni_impl::android::graphics::HardwareRenderer
	{
	public:
		HardwareRenderer(QAndroidJniObject obj) { __thiz = obj; }
		HardwareRenderer()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_HARDWARERENDERER

