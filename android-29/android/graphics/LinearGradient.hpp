#pragma once

#ifndef ANDROID_GRAPHICS_LINEARGRADIENT
#define ANDROID_GRAPHICS_LINEARGRADIENT

#include "../../__JniBaseClass.hpp"
#include "Shader.hpp"

namespace __jni_impl::android::graphics
{
	class Shader_TileMode;
}

namespace __jni_impl::android::graphics
{
	class LinearGradient : public __jni_impl::android::graphics::Shader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jintArray arg4, jfloatArray arg5, __jni_impl::android::graphics::Shader_TileMode arg6);
		void __constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jlongArray arg4, jfloatArray arg5, __jni_impl::android::graphics::Shader_TileMode arg6);
		void __constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jint arg5, __jni_impl::android::graphics::Shader_TileMode arg6);
		void __constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jlong arg4, jlong arg5, __jni_impl::android::graphics::Shader_TileMode arg6);
		
		// Methods
	};
} // namespace __jni_impl::android::graphics

#include "Shader_TileMode.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void LinearGradient::__constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jintArray arg4, jfloatArray arg5, __jni_impl::android::graphics::Shader_TileMode arg6)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.LinearGradient",
			"(FFFF[I[FLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	void LinearGradient::__constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jlongArray arg4, jfloatArray arg5, __jni_impl::android::graphics::Shader_TileMode arg6)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.LinearGradient",
			"(FFFF[J[FLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	void LinearGradient::__constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jint arg5, __jni_impl::android::graphics::Shader_TileMode arg6)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.LinearGradient",
			"(FFFFIILandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	void LinearGradient::__constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jlong arg4, jlong arg5, __jni_impl::android::graphics::Shader_TileMode arg6)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.LinearGradient",
			"(FFFFJJLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class LinearGradient : public __jni_impl::android::graphics::LinearGradient
	{
	public:
		LinearGradient(QAndroidJniObject obj) { __thiz = obj; }
		LinearGradient(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jintArray arg4, jfloatArray arg5, __jni_impl::android::graphics::Shader_TileMode arg6)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6);
		}
		LinearGradient(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jlongArray arg4, jfloatArray arg5, __jni_impl::android::graphics::Shader_TileMode arg6)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6);
		}
		LinearGradient(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jint arg5, __jni_impl::android::graphics::Shader_TileMode arg6)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6);
		}
		LinearGradient(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jlong arg4, jlong arg5, __jni_impl::android::graphics::Shader_TileMode arg6)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_LINEARGRADIENT

