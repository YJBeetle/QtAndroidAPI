#pragma once

#ifndef ANDROID_OPENGL_GLSURFACEVIEW
#define ANDROID_OPENGL_GLSURFACEVIEW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/SurfaceView.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::opengl
{
	class GLSurfaceView : public __jni_impl::android::view::SurfaceView
	{
	public:
		// Fields
		static jint DEBUG_CHECK_GL_ERROR();
		static jint DEBUG_LOG_GL_CALLS();
		static jint RENDERMODE_CONTINUOUSLY();
		static jint RENDERMODE_WHEN_DIRTY();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		void surfaceCreated(__jni_impl::__JniBaseClass arg0);
		void surfaceChanged(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jint arg3);
		void surfaceRedrawNeeded(__jni_impl::__JniBaseClass arg0);
		void surfaceDestroyed(__jni_impl::__JniBaseClass arg0);
		void surfaceRedrawNeededAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		void onResume();
		void onPause();
		void setGLWrapper(__jni_impl::__JniBaseClass arg0);
		void setDebugFlags(jint arg0);
		jint getDebugFlags();
		void setPreserveEGLContextOnPause(jboolean arg0);
		jboolean getPreserveEGLContextOnPause();
		void setRenderer(__jni_impl::__JniBaseClass arg0);
		void setEGLContextFactory(__jni_impl::__JniBaseClass arg0);
		void setEGLWindowSurfaceFactory(__jni_impl::__JniBaseClass arg0);
		void setEGLConfigChooser(jboolean arg0);
		void setEGLConfigChooser(__jni_impl::__JniBaseClass arg0);
		void setEGLConfigChooser(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void setEGLContextClientVersion(jint arg0);
		void setRenderMode(jint arg0);
		jint getRenderMode();
		void requestRender();
		void queueEvent(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::opengl

#include "../content/Context.hpp"

namespace __jni_impl::android::opengl
{
	// Fields
	jint GLSurfaceView::DEBUG_CHECK_GL_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLSurfaceView",
			"DEBUG_CHECK_GL_ERROR"
		);
	}
	jint GLSurfaceView::DEBUG_LOG_GL_CALLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLSurfaceView",
			"DEBUG_LOG_GL_CALLS"
		);
	}
	jint GLSurfaceView::RENDERMODE_CONTINUOUSLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLSurfaceView",
			"RENDERMODE_CONTINUOUSLY"
		);
	}
	jint GLSurfaceView::RENDERMODE_WHEN_DIRTY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLSurfaceView",
			"RENDERMODE_WHEN_DIRTY"
		);
	}
	
	// Constructors
	void GLSurfaceView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.opengl.GLSurfaceView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	void GLSurfaceView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.opengl.GLSurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	void GLSurfaceView::surfaceCreated(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"surfaceCreated",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void GLSurfaceView::surfaceChanged(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"surfaceChanged",
			"(Landroid/view/SurfaceHolder;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void GLSurfaceView::surfaceRedrawNeeded(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"surfaceRedrawNeeded",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void GLSurfaceView::surfaceDestroyed(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"surfaceDestroyed",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void GLSurfaceView::surfaceRedrawNeededAsync(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"surfaceRedrawNeededAsync",
			"(Landroid/view/SurfaceHolder;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void GLSurfaceView::onResume()
	{
		__thiz.callMethod<void>(
			"onResume",
			"()V"
		);
	}
	void GLSurfaceView::onPause()
	{
		__thiz.callMethod<void>(
			"onPause",
			"()V"
		);
	}
	void GLSurfaceView::setGLWrapper(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setGLWrapper",
			"(Landroid/opengl/GLSurfaceView$GLWrapper;)V",
			arg0.__jniObject().object()
		);
	}
	void GLSurfaceView::setDebugFlags(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDebugFlags",
			"(I)V",
			arg0
		);
	}
	jint GLSurfaceView::getDebugFlags()
	{
		return __thiz.callMethod<jint>(
			"getDebugFlags",
			"()I"
		);
	}
	void GLSurfaceView::setPreserveEGLContextOnPause(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPreserveEGLContextOnPause",
			"(Z)V",
			arg0
		);
	}
	jboolean GLSurfaceView::getPreserveEGLContextOnPause()
	{
		return __thiz.callMethod<jboolean>(
			"getPreserveEGLContextOnPause",
			"()Z"
		);
	}
	void GLSurfaceView::setRenderer(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setRenderer",
			"(Landroid/opengl/GLSurfaceView$Renderer;)V",
			arg0.__jniObject().object()
		);
	}
	void GLSurfaceView::setEGLContextFactory(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEGLContextFactory",
			"(Landroid/opengl/GLSurfaceView$EGLContextFactory;)V",
			arg0.__jniObject().object()
		);
	}
	void GLSurfaceView::setEGLWindowSurfaceFactory(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEGLWindowSurfaceFactory",
			"(Landroid/opengl/GLSurfaceView$EGLWindowSurfaceFactory;)V",
			arg0.__jniObject().object()
		);
	}
	void GLSurfaceView::setEGLConfigChooser(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEGLConfigChooser",
			"(Z)V",
			arg0
		);
	}
	void GLSurfaceView::setEGLConfigChooser(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEGLConfigChooser",
			"(Landroid/opengl/GLSurfaceView$EGLConfigChooser;)V",
			arg0.__jniObject().object()
		);
	}
	void GLSurfaceView::setEGLConfigChooser(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"setEGLConfigChooser",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void GLSurfaceView::setEGLContextClientVersion(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEGLContextClientVersion",
			"(I)V",
			arg0
		);
	}
	void GLSurfaceView::setRenderMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRenderMode",
			"(I)V",
			arg0
		);
	}
	jint GLSurfaceView::getRenderMode()
	{
		return __thiz.callMethod<jint>(
			"getRenderMode",
			"()I"
		);
	}
	void GLSurfaceView::requestRender()
	{
		__thiz.callMethod<void>(
			"requestRender",
			"()V"
		);
	}
	void GLSurfaceView::queueEvent(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"queueEvent",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class GLSurfaceView : public __jni_impl::android::opengl::GLSurfaceView
	{
	public:
		GLSurfaceView(QAndroidJniObject obj) { __thiz = obj; }
		GLSurfaceView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		GLSurfaceView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::opengl

#endif // ANDROID_OPENGL_GLSURFACEVIEW

