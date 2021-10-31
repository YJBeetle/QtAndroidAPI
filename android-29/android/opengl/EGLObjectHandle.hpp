#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::opengl
{
	class EGLObjectHandle : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EGLObjectHandle(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EGLObjectHandle(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getHandle();
		jlong getNativeHandle();
		jint hashCode();
	};
} // namespace android::opengl

