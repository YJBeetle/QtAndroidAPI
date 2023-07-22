#pragma once

#include "../view/SurfaceView.def.hpp"

namespace android::content
{
	class Context;
}

namespace android::opengl
{
	class GLSurfaceView : public android::view::SurfaceView
	{
	public:
		// Fields
		static jint DEBUG_CHECK_GL_ERROR();
		static jint DEBUG_LOG_GL_CALLS();
		static jint RENDERMODE_CONTINUOUSLY();
		static jint RENDERMODE_WHEN_DIRTY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GLSurfaceView(const char *className, const char *sig, Ts...agv) : android::view::SurfaceView(className, sig, std::forward<Ts>(agv)...) {}
		GLSurfaceView(QAndroidJniObject obj) : android::view::SurfaceView(obj) {}
		
		// Constructors
		GLSurfaceView(android::content::Context arg0);
		GLSurfaceView(android::content::Context arg0, JObject arg1);
		
		// Methods
		jint getDebugFlags() const;
		jboolean getPreserveEGLContextOnPause() const;
		jint getRenderMode() const;
		void onPause() const;
		void onResume() const;
		void queueEvent(JObject arg0) const;
		void requestRender() const;
		void setDebugFlags(jint arg0) const;
		void setEGLConfigChooser(JObject arg0) const;
		void setEGLConfigChooser(jboolean arg0) const;
		void setEGLConfigChooser(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const;
		void setEGLContextClientVersion(jint arg0) const;
		void setEGLContextFactory(JObject arg0) const;
		void setEGLWindowSurfaceFactory(JObject arg0) const;
		void setGLWrapper(JObject arg0) const;
		void setPreserveEGLContextOnPause(jboolean arg0) const;
		void setRenderMode(jint arg0) const;
		void setRenderer(JObject arg0) const;
		void surfaceChanged(JObject arg0, jint arg1, jint arg2, jint arg3) const;
		void surfaceCreated(JObject arg0) const;
		void surfaceDestroyed(JObject arg0) const;
		void surfaceRedrawNeeded(JObject arg0) const;
		void surfaceRedrawNeededAsync(JObject arg0, JObject arg1) const;
	};
} // namespace android::opengl

