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
	
	// QAndroidJniObject forward
	GLSurfaceView::GLSurfaceView(QAndroidJniObject obj) : android::view::SurfaceView(obj) {}
	
	// Constructors
	GLSurfaceView::GLSurfaceView(android::content::Context arg0)
		: android::view::SurfaceView(
			"android.opengl.GLSurfaceView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	GLSurfaceView::GLSurfaceView(android::content::Context arg0, __JniBaseClass arg1)
		: android::view::SurfaceView(
			"android.opengl.GLSurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jint GLSurfaceView::getDebugFlags()
	{
		return callMethod<jint>(
			"getDebugFlags",
			"()I"
		);
	}
	jboolean GLSurfaceView::getPreserveEGLContextOnPause()
	{
		return callMethod<jboolean>(
			"getPreserveEGLContextOnPause",
			"()Z"
		);
	}
	jint GLSurfaceView::getRenderMode()
	{
		return callMethod<jint>(
			"getRenderMode",
			"()I"
		);
	}
	void GLSurfaceView::onPause()
	{
		callMethod<void>(
			"onPause",
			"()V"
		);
	}
	void GLSurfaceView::onResume()
	{
		callMethod<void>(
			"onResume",
			"()V"
		);
	}
	void GLSurfaceView::queueEvent(__JniBaseClass arg0)
	{
		callMethod<void>(
			"queueEvent",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	void GLSurfaceView::requestRender()
	{
		callMethod<void>(
			"requestRender",
			"()V"
		);
	}
	void GLSurfaceView::setDebugFlags(jint arg0)
	{
		callMethod<void>(
			"setDebugFlags",
			"(I)V",
			arg0
		);
	}
	void GLSurfaceView::setEGLConfigChooser(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setEGLConfigChooser",
			"(Landroid/opengl/GLSurfaceView$EGLConfigChooser;)V",
			arg0.object()
		);
	}
	void GLSurfaceView::setEGLConfigChooser(jboolean arg0)
	{
		callMethod<void>(
			"setEGLConfigChooser",
			"(Z)V",
			arg0
		);
	}
	void GLSurfaceView::setEGLConfigChooser(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		callMethod<void>(
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
		callMethod<void>(
			"setEGLContextClientVersion",
			"(I)V",
			arg0
		);
	}
	void GLSurfaceView::setEGLContextFactory(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setEGLContextFactory",
			"(Landroid/opengl/GLSurfaceView$EGLContextFactory;)V",
			arg0.object()
		);
	}
	void GLSurfaceView::setEGLWindowSurfaceFactory(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setEGLWindowSurfaceFactory",
			"(Landroid/opengl/GLSurfaceView$EGLWindowSurfaceFactory;)V",
			arg0.object()
		);
	}
	void GLSurfaceView::setGLWrapper(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setGLWrapper",
			"(Landroid/opengl/GLSurfaceView$GLWrapper;)V",
			arg0.object()
		);
	}
	void GLSurfaceView::setPreserveEGLContextOnPause(jboolean arg0)
	{
		callMethod<void>(
			"setPreserveEGLContextOnPause",
			"(Z)V",
			arg0
		);
	}
	void GLSurfaceView::setRenderMode(jint arg0)
	{
		callMethod<void>(
			"setRenderMode",
			"(I)V",
			arg0
		);
	}
	void GLSurfaceView::setRenderer(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setRenderer",
			"(Landroid/opengl/GLSurfaceView$Renderer;)V",
			arg0.object()
		);
	}
	void GLSurfaceView::surfaceChanged(__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"surfaceChanged",
			"(Landroid/view/SurfaceHolder;III)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	void GLSurfaceView::surfaceCreated(__JniBaseClass arg0)
	{
		callMethod<void>(
			"surfaceCreated",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	void GLSurfaceView::surfaceDestroyed(__JniBaseClass arg0)
	{
		callMethod<void>(
			"surfaceDestroyed",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	void GLSurfaceView::surfaceRedrawNeeded(__JniBaseClass arg0)
	{
		callMethod<void>(
			"surfaceRedrawNeeded",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	void GLSurfaceView::surfaceRedrawNeededAsync(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"surfaceRedrawNeededAsync",
			"(Landroid/view/SurfaceHolder;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::opengl

