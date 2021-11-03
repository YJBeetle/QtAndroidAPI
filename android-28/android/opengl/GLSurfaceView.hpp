#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
#include "../view/SurfaceView.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit GLSurfaceView(const char *className, const char *sig, Ts...agv) : android::view::SurfaceView(className, sig, std::forward<Ts>(agv)...) {}
		GLSurfaceView(QJniObject obj);
		
		// Constructors
		GLSurfaceView(android::content::Context arg0);
		GLSurfaceView(android::content::Context arg0, JObject arg1);
		
		// Methods
		jint getDebugFlags();
		jboolean getPreserveEGLContextOnPause();
		jint getRenderMode();
		void onPause();
		void onResume();
		void queueEvent(JObject arg0);
		void requestRender();
		void setDebugFlags(jint arg0);
		void setEGLConfigChooser(JObject arg0);
		void setEGLConfigChooser(jboolean arg0);
		void setEGLConfigChooser(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void setEGLContextClientVersion(jint arg0);
		void setEGLContextFactory(JObject arg0);
		void setEGLWindowSurfaceFactory(JObject arg0);
		void setGLWrapper(JObject arg0);
		void setPreserveEGLContextOnPause(jboolean arg0);
		void setRenderMode(jint arg0);
		void setRenderer(JObject arg0);
		void surfaceChanged(JObject arg0, jint arg1, jint arg2, jint arg3);
		void surfaceCreated(JObject arg0);
		void surfaceDestroyed(JObject arg0);
		void surfaceRedrawNeeded(JObject arg0);
		void surfaceRedrawNeededAsync(JObject arg0, JObject arg1);
	};
} // namespace android::opengl

