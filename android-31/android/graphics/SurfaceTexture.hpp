#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Handler;
}

namespace android::graphics
{
	class SurfaceTexture : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceTexture(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceTexture(QJniObject obj);
		
		// Constructors
		SurfaceTexture(jboolean arg0);
		SurfaceTexture(jint arg0);
		SurfaceTexture(jint arg0, jboolean arg1);
		
		// Methods
		void attachToGLContext(jint arg0);
		void detachFromGLContext();
		jlong getTimestamp();
		void getTransformMatrix(jfloatArray arg0);
		jboolean isReleased();
		void release();
		void releaseTexImage();
		void setDefaultBufferSize(jint arg0, jint arg1);
		void setOnFrameAvailableListener(__JniBaseClass arg0);
		void setOnFrameAvailableListener(__JniBaseClass arg0, android::os::Handler arg1);
		void updateTexImage();
	};
} // namespace android::graphics

