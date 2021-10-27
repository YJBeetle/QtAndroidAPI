#pragma once

#include "../../__JniBaseClass.hpp"
#include "Shader.hpp"

namespace __jni_impl::android::graphics
{
	class Shader_TileMode;
}

namespace __jni_impl::android::graphics
{
	class RadialGradient : public __jni_impl::android::graphics::Shader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jfloat arg0, jfloat arg1, jfloat arg2, jintArray arg3, jfloatArray arg4, __jni_impl::android::graphics::Shader_TileMode arg5);
		void __constructor(jfloat arg0, jfloat arg1, jfloat arg2, jlongArray arg3, jfloatArray arg4, __jni_impl::android::graphics::Shader_TileMode arg5);
		void __constructor(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3, jint arg4, __jni_impl::android::graphics::Shader_TileMode arg5);
		void __constructor(jfloat arg0, jfloat arg1, jfloat arg2, jlong arg3, jlong arg4, __jni_impl::android::graphics::Shader_TileMode arg5);
		
		// Methods
	};
} // namespace __jni_impl::android::graphics

#include "Shader_TileMode.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void RadialGradient::__constructor(jfloat arg0, jfloat arg1, jfloat arg2, jintArray arg3, jfloatArray arg4, __jni_impl::android::graphics::Shader_TileMode arg5)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RadialGradient",
			"(FFF[I[FLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void RadialGradient::__constructor(jfloat arg0, jfloat arg1, jfloat arg2, jlongArray arg3, jfloatArray arg4, __jni_impl::android::graphics::Shader_TileMode arg5)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RadialGradient",
			"(FFF[J[FLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void RadialGradient::__constructor(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3, jint arg4, __jni_impl::android::graphics::Shader_TileMode arg5)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RadialGradient",
			"(FFFIILandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void RadialGradient::__constructor(jfloat arg0, jfloat arg1, jfloat arg2, jlong arg3, jlong arg4, __jni_impl::android::graphics::Shader_TileMode arg5)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RadialGradient",
			"(FFFJJLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class RadialGradient : public __jni_impl::android::graphics::RadialGradient
	{
	public:
		RadialGradient(QAndroidJniObject obj) { __thiz = obj; }
		RadialGradient(jfloat arg0, jfloat arg1, jfloat arg2, jintArray arg3, jfloatArray arg4, __jni_impl::android::graphics::Shader_TileMode arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
		RadialGradient(jfloat arg0, jfloat arg1, jfloat arg2, jlongArray arg3, jfloatArray arg4, __jni_impl::android::graphics::Shader_TileMode arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
		RadialGradient(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3, jint arg4, __jni_impl::android::graphics::Shader_TileMode arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
		RadialGradient(jfloat arg0, jfloat arg1, jfloat arg2, jlong arg3, jlong arg4, __jni_impl::android::graphics::Shader_TileMode arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
	};
} // namespace android::graphics

