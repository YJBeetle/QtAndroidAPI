#pragma once

#ifndef ANDROID_GRAPHICS_BITMAPSHADER
#define ANDROID_GRAPHICS_BITMAPSHADER

#include "../../__JniBaseClass.hpp"
#include "Shader.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class Shader_TileMode;
}

namespace __jni_impl::android::graphics
{
	class BitmapShader : public __jni_impl::android::graphics::Shader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Shader_TileMode arg1, __jni_impl::android::graphics::Shader_TileMode arg2);
		
		// Methods
	};
} // namespace __jni_impl::android::graphics

#include "Bitmap.hpp"
#include "Shader_TileMode.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void BitmapShader::__constructor(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Shader_TileMode arg1, __jni_impl::android::graphics::Shader_TileMode arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.BitmapShader",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class BitmapShader : public __jni_impl::android::graphics::BitmapShader
	{
	public:
		BitmapShader(QAndroidJniObject obj) { __thiz = obj; }
		BitmapShader(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Shader_TileMode arg1, __jni_impl::android::graphics::Shader_TileMode arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_BITMAPSHADER

