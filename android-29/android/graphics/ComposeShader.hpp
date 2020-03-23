#pragma once

#ifndef ANDROID_GRAPHICS_COMPOSESHADER
#define ANDROID_GRAPHICS_COMPOSESHADER

#include "Shader.hpp"

namespace __jni_impl::android::graphics
{
	class Shader;
}
namespace __jni_impl::android::graphics
{
	class Xfermode;
}
namespace __jni_impl::android::graphics
{
	class PorterDuff_Mode;
}
namespace __jni_impl::android::graphics
{
	class BlendMode;
}

namespace __jni_impl::android::graphics
{
	class ComposeShader : public __jni_impl::android::graphics::Shader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::Shader arg0, __jni_impl::android::graphics::Shader arg1, __jni_impl::android::graphics::Xfermode arg2);
		void __constructor(__jni_impl::android::graphics::Shader arg0, __jni_impl::android::graphics::Shader arg1, __jni_impl::android::graphics::PorterDuff_Mode arg2);
		void __constructor(__jni_impl::android::graphics::Shader arg0, __jni_impl::android::graphics::Shader arg1, __jni_impl::android::graphics::BlendMode arg2);
		
		// Methods
	};
} // namespace __jni_impl::android::graphics

#include "Shader.hpp"
#include "Xfermode.hpp"
#include "PorterDuff_Mode.hpp"
#include "BlendMode.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void ComposeShader::__constructor(__jni_impl::android::graphics::Shader arg0, __jni_impl::android::graphics::Shader arg1, __jni_impl::android::graphics::Xfermode arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ComposeShader",
			"(Landroid/graphics/Shader;Landroid/graphics/Shader;Landroid/graphics/Xfermode;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ComposeShader::__constructor(__jni_impl::android::graphics::Shader arg0, __jni_impl::android::graphics::Shader arg1, __jni_impl::android::graphics::PorterDuff_Mode arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ComposeShader",
			"(Landroid/graphics/Shader;Landroid/graphics/Shader;Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ComposeShader::__constructor(__jni_impl::android::graphics::Shader arg0, __jni_impl::android::graphics::Shader arg1, __jni_impl::android::graphics::BlendMode arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ComposeShader",
			"(Landroid/graphics/Shader;Landroid/graphics/Shader;Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class ComposeShader : public __jni_impl::android::graphics::ComposeShader
	{
	public:
		ComposeShader(QAndroidJniObject obj) { __thiz = obj; }
		ComposeShader(__jni_impl::android::graphics::Shader arg0, __jni_impl::android::graphics::Shader arg1, __jni_impl::android::graphics::Xfermode arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ComposeShader(__jni_impl::android::graphics::Shader arg0, __jni_impl::android::graphics::Shader arg1, __jni_impl::android::graphics::PorterDuff_Mode arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ComposeShader(__jni_impl::android::graphics::Shader arg0, __jni_impl::android::graphics::Shader arg1, __jni_impl::android::graphics::BlendMode arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_COMPOSESHADER

