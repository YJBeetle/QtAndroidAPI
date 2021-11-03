#pragma once

#include "../../JObject.hpp"

class JFloatArray;
namespace android::os
{
	class Handler;
}

namespace android::graphics
{
	class SurfaceTexture : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SurfaceTexture(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceTexture(QAndroidJniObject obj);
		
		// Constructors
		SurfaceTexture(jboolean arg0);
		SurfaceTexture(jint arg0);
		SurfaceTexture(jint arg0, jboolean arg1);
		
		// Methods
		void attachToGLContext(jint arg0);
		void detachFromGLContext();
		jlong getTimestamp();
		void getTransformMatrix(JFloatArray arg0);
		jboolean isReleased();
		void release();
		void releaseTexImage();
		void setDefaultBufferSize(jint arg0, jint arg1);
		void setOnFrameAvailableListener(JObject arg0);
		void setOnFrameAvailableListener(JObject arg0, android::os::Handler arg1);
		void updateTexImage();
	};
} // namespace android::graphics

