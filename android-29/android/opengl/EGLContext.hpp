#pragma once

#include "../../__JniBaseClass.hpp"
#include "./EGLObjectHandle.hpp"


namespace android::opengl
{
	class EGLContext : public android::opengl::EGLObjectHandle
	{
	public:
		// Fields
		
		EGLContext(QAndroidJniObject obj);
		// Constructors
		EGLContext() = default;
		
		// Methods
		jboolean equals(jobject arg0);
	};
} // namespace android::opengl

