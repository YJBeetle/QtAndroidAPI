#pragma once

#include "../../__JniBaseClass.hpp"
#include "./EGLObjectHandle.hpp"


namespace android::opengl
{
	class EGLSync : public android::opengl::EGLObjectHandle
	{
	public:
		// Fields
		
		EGLSync(QAndroidJniObject obj);
		// Constructors
		EGLSync() = default;
		
		// Methods
		jboolean equals(jobject arg0);
	};
} // namespace android::opengl

