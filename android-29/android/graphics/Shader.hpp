#pragma once

#ifndef ANDROID_GRAPHICS_SHADER
#define ANDROID_GRAPHICS_SHADER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Matrix;
}

namespace __jni_impl::android::graphics
{
	class Shader : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean getLocalMatrix(__jni_impl::android::graphics::Matrix arg0);
		void setLocalMatrix(__jni_impl::android::graphics::Matrix arg0);
	};
} // namespace __jni_impl::android::graphics

#include "Matrix.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void Shader::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Shader",
			"()V");
	}
	
	// Methods
	jboolean Shader::getLocalMatrix(__jni_impl::android::graphics::Matrix arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getLocalMatrix",
			"(Landroid/graphics/Matrix;)Z",
			arg0.__jniObject().object()
		);
	}
	void Shader::setLocalMatrix(__jni_impl::android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"setLocalMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Shader : public __jni_impl::android::graphics::Shader
	{
	public:
		Shader(QAndroidJniObject obj) { __thiz = obj; }
		Shader()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_SHADER

