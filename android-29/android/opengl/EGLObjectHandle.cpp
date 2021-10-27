#include "./EGLObjectHandle.hpp"

namespace android::opengl
{
	// Fields
	
	EGLObjectHandle::EGLObjectHandle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint EGLObjectHandle::getHandle()
	{
		return __thiz.callMethod<jint>(
			"getHandle",
			"()I"
		);
	}
	jlong EGLObjectHandle::getNativeHandle()
	{
		return __thiz.callMethod<jlong>(
			"getNativeHandle",
			"()J"
		);
	}
	jint EGLObjectHandle::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::opengl

