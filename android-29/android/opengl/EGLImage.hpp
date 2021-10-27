#pragma once

#include "../../__JniBaseClass.hpp"
#include "./EGLObjectHandle.hpp"


namespace android::opengl
{
	class EGLImage : public android::opengl::EGLObjectHandle
	{
	public:
		// Fields
		
		EGLImage(QAndroidJniObject obj);
		// Constructors
		EGLImage() = default;
		
		// Methods
		jboolean equals(jobject arg0);
	};
} // namespace android::opengl

