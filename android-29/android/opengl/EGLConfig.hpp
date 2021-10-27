#pragma once

#include "../../__JniBaseClass.hpp"
#include "EGLObjectHandle.hpp"


namespace __jni_impl::android::opengl
{
	class EGLConfig : public __jni_impl::android::opengl::EGLObjectHandle
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
	void EGLConfig::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.EGLConfig",
			"(V)V");
	}
	
	// Methods
	jboolean EGLConfig::equals(jobject arg0)
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
	class EGLConfig : public __jni_impl::android::opengl::EGLConfig
	{
	public:
		EGLConfig(QAndroidJniObject obj) { __thiz = obj; }
		EGLConfig()
		{
			__constructor();
		}
	};
} // namespace android::opengl

