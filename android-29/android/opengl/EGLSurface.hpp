#pragma once

#include "../../__JniBaseClass.hpp"
#include "./EGLObjectHandle.hpp"


namespace android::opengl
{
	class EGLSurface : public android::opengl::EGLObjectHandle
	{
	public:
		// Fields
		
		EGLSurface(QAndroidJniObject obj);
		// Constructors
		EGLSurface() = default;
		
		// Methods
		jboolean equals(jobject arg0);
	};
} // namespace android::opengl

