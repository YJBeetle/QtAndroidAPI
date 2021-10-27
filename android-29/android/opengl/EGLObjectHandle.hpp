#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::opengl
{
	class EGLObjectHandle : public __JniBaseClass
	{
	public:
		// Fields
		
		EGLObjectHandle(QAndroidJniObject obj);
		// Constructors
		EGLObjectHandle() = default;
		
		// Methods
		jint getHandle();
		jlong getNativeHandle();
		jint hashCode();
	};
} // namespace android::opengl

