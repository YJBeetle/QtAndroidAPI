#include "./EGLObjectHandle.hpp"

namespace android::opengl
{
	// Fields
	
	// QAndroidJniObject forward
	EGLObjectHandle::EGLObjectHandle(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint EGLObjectHandle::getHandle()
	{
		return callMethod<jint>(
			"getHandle",
			"()I"
		);
	}
	jlong EGLObjectHandle::getNativeHandle()
	{
		return callMethod<jlong>(
			"getNativeHandle",
			"()J"
		);
	}
	jint EGLObjectHandle::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::opengl

