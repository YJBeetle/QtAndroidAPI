#pragma once

#include "./EGLObjectHandle.hpp"

class JObject;

namespace android::opengl
{
	class EGLSurface : public android::opengl::EGLObjectHandle
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EGLSurface(const char *className, const char *sig, Ts...agv) : android::opengl::EGLObjectHandle(className, sig, std::forward<Ts>(agv)...) {}
		EGLSurface(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
	};
} // namespace android::opengl

