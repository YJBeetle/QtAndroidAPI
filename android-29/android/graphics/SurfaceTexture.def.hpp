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
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceTexture(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceTexture(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SurfaceTexture(jboolean arg0);
		SurfaceTexture(jint arg0);
		SurfaceTexture(jint arg0, jboolean arg1);
		
		// Methods
		void attachToGLContext(jint arg0) const;
		void detachFromGLContext() const;
		jlong getTimestamp() const;
		void getTransformMatrix(JFloatArray arg0) const;
		jboolean isReleased() const;
		void release() const;
		void releaseTexImage() const;
		void setDefaultBufferSize(jint arg0, jint arg1) const;
		void setOnFrameAvailableListener(JObject arg0) const;
		void setOnFrameAvailableListener(JObject arg0, android::os::Handler arg1) const;
		void updateTexImage() const;
	};
} // namespace android::graphics

