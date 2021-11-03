#include "./EGLObjectHandle.hpp"

namespace android::opengl
{
	// Fields
	
	// QJniObject forward
	EGLObjectHandle::EGLObjectHandle(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint EGLObjectHandle::getHandle() const
	{
		return callMethod<jint>(
			"getHandle",
			"()I"
		);
	}
	jlong EGLObjectHandle::getNativeHandle() const
	{
		return callMethod<jlong>(
			"getNativeHandle",
			"()J"
		);
	}
	jint EGLObjectHandle::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::opengl

