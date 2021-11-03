#include "../content/Context.hpp"
#include "./GLSurfaceView.hpp"

namespace android::opengl
{
	// Fields
	jint GLSurfaceView::DEBUG_CHECK_GL_ERROR()
	{
		return getStaticField<jint>(
			"android.opengl.GLSurfaceView",
			"DEBUG_CHECK_GL_ERROR"
		);
	}
	jint GLSurfaceView::DEBUG_LOG_GL_CALLS()
	{
		return getStaticField<jint>(
			"android.opengl.GLSurfaceView",
			"DEBUG_LOG_GL_CALLS"
		);
	}
	jint GLSurfaceView::RENDERMODE_CONTINUOUSLY()
	{
		return getStaticField<jint>(
			"android.opengl.GLSurfaceView",
			"RENDERMODE_CONTINUOUSLY"
		);
	}
	jint GLSurfaceView::RENDERMODE_WHEN_DIRTY()
	{
		return getStaticField<jint>(
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
	GLSurfaceView::GLSurfaceView(android::content::Context arg0, JObject arg1)
		: android::view::SurfaceView(
			"android.opengl.GLSurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jint GLSurfaceView::getDebugFlags() const
	{
		return callMethod<jint>(
			"getDebugFlags",
			"()I"
		);
	}
	jboolean GLSurfaceView::getPreserveEGLContextOnPause() const
	{
		return callMethod<jboolean>(
			"getPreserveEGLContextOnPause",
			"()Z"
		);
	}
	jint GLSurfaceView::getRenderMode() const
	{
		return callMethod<jint>(
			"getRenderMode",
			"()I"
		);
	}
	void GLSurfaceView::onPause() const
	{
		callMethod<void>(
			"onPause",
			"()V"
		);
	}
	void GLSurfaceView::onResume() const
	{
		callMethod<void>(
			"onResume",
			"()V"
		);
	}
	void GLSurfaceView::queueEvent(JObject arg0) const
	{
		callMethod<void>(
			"queueEvent",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	void GLSurfaceView::requestRender() const
	{
		callMethod<void>(
			"requestRender",
			"()V"
		);
	}
	void GLSurfaceView::setDebugFlags(jint arg0) const
	{
		callMethod<void>(
			"setDebugFlags",
			"(I)V",
			arg0
		);
	}
	void GLSurfaceView::setEGLConfigChooser(JObject arg0) const
	{
		callMethod<void>(
			"setEGLConfigChooser",
			"(Landroid/opengl/GLSurfaceView$EGLConfigChooser;)V",
			arg0.object()
		);
	}
	void GLSurfaceView::setEGLConfigChooser(jboolean arg0) const
	{
		callMethod<void>(
			"setEGLConfigChooser",
			"(Z)V",
			arg0
		);
	}
	void GLSurfaceView::setEGLConfigChooser(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const
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
	void GLSurfaceView::setEGLContextClientVersion(jint arg0) const
	{
		callMethod<void>(
			"setEGLContextClientVersion",
			"(I)V",
			arg0
		);
	}
	void GLSurfaceView::setEGLContextFactory(JObject arg0) const
	{
		callMethod<void>(
			"setEGLContextFactory",
			"(Landroid/opengl/GLSurfaceView$EGLContextFactory;)V",
			arg0.object()
		);
	}
	void GLSurfaceView::setEGLWindowSurfaceFactory(JObject arg0) const
	{
		callMethod<void>(
			"setEGLWindowSurfaceFactory",
			"(Landroid/opengl/GLSurfaceView$EGLWindowSurfaceFactory;)V",
			arg0.object()
		);
	}
	void GLSurfaceView::setGLWrapper(JObject arg0) const
	{
		callMethod<void>(
			"setGLWrapper",
			"(Landroid/opengl/GLSurfaceView$GLWrapper;)V",
			arg0.object()
		);
	}
	void GLSurfaceView::setPreserveEGLContextOnPause(jboolean arg0) const
	{
		callMethod<void>(
			"setPreserveEGLContextOnPause",
			"(Z)V",
			arg0
		);
	}
	void GLSurfaceView::setRenderMode(jint arg0) const
	{
		callMethod<void>(
			"setRenderMode",
			"(I)V",
			arg0
		);
	}
	void GLSurfaceView::setRenderer(JObject arg0) const
	{
		callMethod<void>(
			"setRenderer",
			"(Landroid/opengl/GLSurfaceView$Renderer;)V",
			arg0.object()
		);
	}
	void GLSurfaceView::surfaceChanged(JObject arg0, jint arg1, jint arg2, jint arg3) const
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
	void GLSurfaceView::surfaceCreated(JObject arg0) const
	{
		callMethod<void>(
			"surfaceCreated",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	void GLSurfaceView::surfaceDestroyed(JObject arg0) const
	{
		callMethod<void>(
			"surfaceDestroyed",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	void GLSurfaceView::surfaceRedrawNeeded(JObject arg0) const
	{
		callMethod<void>(
			"surfaceRedrawNeeded",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	void GLSurfaceView::surfaceRedrawNeededAsync(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"surfaceRedrawNeededAsync",
			"(Landroid/view/SurfaceHolder;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::opengl

