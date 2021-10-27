#pragma once

#ifndef ANDROID_OPENGL_EGLOBJECTHANDLE
#define ANDROID_OPENGL_EGLOBJECTHANDLE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::opengl
{
	class EGLObjectHandle : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getHandle();
		jlong getNativeHandle();
		jint hashCode();
	};
} // namespace __jni_impl::android::opengl


namespace __jni_impl::android::opengl
{
	// Fields
	
	// Constructors
	void EGLObjectHandle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.EGLObjectHandle",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class EGLObjectHandle : public __jni_impl::android::opengl::EGLObjectHandle
	{
	public:
		EGLObjectHandle(QAndroidJniObject obj) { __thiz = obj; }
		EGLObjectHandle()
		{
			__constructor();
		}
	};
} // namespace android::opengl

#endif // ANDROID_OPENGL_EGLOBJECTHANDLE

