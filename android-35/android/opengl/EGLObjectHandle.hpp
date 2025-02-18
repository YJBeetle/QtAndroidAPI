#pragma once

#include "./EGLObjectHandle.def.hpp"

namespace android::opengl
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint EGLObjectHandle::getHandle() const
	{
		return callMethod<jint>(
			"getHandle",
			"()I"
		);
	}
	inline jlong EGLObjectHandle::getNativeHandle() const
	{
		return callMethod<jlong>(
			"getNativeHandle",
			"()J"
		);
	}
	inline jint EGLObjectHandle::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::opengl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::opengl;
#endif
