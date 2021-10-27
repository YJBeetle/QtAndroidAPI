#pragma once

#include "../../__JniBaseClass.hpp"
#include "EGLObjectHandle.hpp"


namespace __jni_impl::android::opengl
{
	class EGLSurface : public __jni_impl::android::opengl::EGLObjectHandle
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
	};
} // namespace __jni_impl::android::opengl


namespace __jni_impl::android::opengl
{
	// Fields
	
	// Constructors
	void EGLSurface::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.EGLSurface",
			"(V)V");
	}
	
	// Methods
	jboolean EGLSurface::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class EGLSurface : public __jni_impl::android::opengl::EGLSurface
	{
	public:
		EGLSurface(QAndroidJniObject obj) { __thiz = obj; }
		EGLSurface()
		{
			__constructor();
		}
	};
} // namespace android::opengl

