#include "../content/Context.hpp"
#include "./GLSurfaceView.hpp"

namespace android::opengl
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
	
	GLSurfaceView::GLSurfaceView(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GLSurfaceView::GLSurfaceView(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.opengl.GLSurfaceView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	GLSurfaceView::GLSurfaceView(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.opengl.GLSurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint GLSurfaceView::getDebugFlags()
	{
		return __thiz.callMethod<jint>(
			"getDebugFlags",
			"()I"
		);
	}
	jboolean GLSurfaceView::getPreserveEGLContextOnPause()
	{
		return __thiz.callMethod<jboolean>(
			"getPreserveEGLContextOnPause",
			"()Z"
		);
	}
	jint GLSurfaceView::getRenderMode()
	{
		return __thiz.callMethod<jint>(
			"getRenderMode",
			"()I"
		);
	}
	void GLSurfaceView::onPause()
	{
		__thiz.callMethod<void>(
			"onPause",
			"()V"
		);
	}
	void GLSurfaceView::onResume()
	{
		__thiz.callMethod<void>(
			"onResume",
			"()V"
		);
	}
	void GLSurfaceView::queueEvent(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"queueEvent",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	void GLSurfaceView::requestRender()
	{
		__thiz.callMethod<void>(
			"requestRender",
			"()V"
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
	void GLSurfaceView::setEGLConfigChooser(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEGLConfigChooser",
			"(Landroid/opengl/GLSurfaceView$EGLConfigChooser;)V",
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
	void GLSurfaceView::setEGLContextFactory(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEGLContextFactory",
			"(Landroid/opengl/GLSurfaceView$EGLContextFactory;)V",
			arg0.__jniObject().object()
		);
	}
	void GLSurfaceView::setEGLWindowSurfaceFactory(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEGLWindowSurfaceFactory",
			"(Landroid/opengl/GLSurfaceView$EGLWindowSurfaceFactory;)V",
			arg0.__jniObject().object()
		);
	}
	void GLSurfaceView::setGLWrapper(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setGLWrapper",
			"(Landroid/opengl/GLSurfaceView$GLWrapper;)V",
			arg0.__jniObject().object()
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
	void GLSurfaceView::setRenderMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRenderMode",
			"(I)V",
			arg0
		);
	}
	void GLSurfaceView::setRenderer(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setRenderer",
			"(Landroid/opengl/GLSurfaceView$Renderer;)V",
			arg0.__jniObject().object()
		);
	}
	void GLSurfaceView::surfaceChanged(__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
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
	void GLSurfaceView::surfaceCreated(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"surfaceCreated",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void GLSurfaceView::surfaceDestroyed(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"surfaceDestroyed",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void GLSurfaceView::surfaceRedrawNeeded(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"surfaceRedrawNeeded",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void GLSurfaceView::surfaceRedrawNeededAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"surfaceRedrawNeededAsync",
			"(Landroid/view/SurfaceHolder;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::opengl

