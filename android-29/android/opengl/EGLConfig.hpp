#pragma once

#include "../../__JniBaseClass.hpp"
#include "./EGLObjectHandle.hpp"


namespace android::opengl
{
	class EGLConfig : public android::opengl::EGLObjectHandle
	{
	public:
		// Fields
		
		EGLConfig(QAndroidJniObject obj);
		// Constructors
		EGLConfig() = default;
		
		// Methods
		jboolean equals(jobject arg0);
	};
} // namespace android::opengl

