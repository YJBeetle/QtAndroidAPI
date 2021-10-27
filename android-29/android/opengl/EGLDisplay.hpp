#pragma once

#include "../../__JniBaseClass.hpp"
#include "./EGLObjectHandle.hpp"


namespace android::opengl
{
	class EGLDisplay : public android::opengl::EGLObjectHandle
	{
	public:
		// Fields
		
		EGLDisplay(QAndroidJniObject obj);
		// Constructors
		EGLDisplay() = default;
		
		// Methods
		jboolean equals(jobject arg0);
	};
} // namespace android::opengl

