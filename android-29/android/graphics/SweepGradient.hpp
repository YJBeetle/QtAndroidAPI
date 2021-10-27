#pragma once

#include "../../__JniBaseClass.hpp"
#include "Shader.hpp"


namespace __jni_impl::android::graphics
{
	class SweepGradient : public __jni_impl::android::graphics::Shader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jfloat arg0, jfloat arg1, jintArray arg2, jfloatArray arg3);
		void __constructor(jfloat arg0, jfloat arg1, jlongArray arg2, jfloatArray arg3);
		void __constructor(jfloat arg0, jfloat arg1, jint arg2, jint arg3);
		void __constructor(jfloat arg0, jfloat arg1, jlong arg2, jlong arg3);
		
		// Methods
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void SweepGradient::__constructor(jfloat arg0, jfloat arg1, jintArray arg2, jfloatArray arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SweepGradient",
			"(FF[I[F)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void SweepGradient::__constructor(jfloat arg0, jfloat arg1, jlongArray arg2, jfloatArray arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SweepGradient",
			"(FF[J[F)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void SweepGradient::__constructor(jfloat arg0, jfloat arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SweepGradient",
			"(FFII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void SweepGradient::__constructor(jfloat arg0, jfloat arg1, jlong arg2, jlong arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SweepGradient",
			"(FFJJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class SweepGradient : public __jni_impl::android::graphics::SweepGradient
	{
	public:
		SweepGradient(QAndroidJniObject obj) { __thiz = obj; }
		SweepGradient(jfloat arg0, jfloat arg1, jintArray arg2, jfloatArray arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SweepGradient(jfloat arg0, jfloat arg1, jlongArray arg2, jfloatArray arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SweepGradient(jfloat arg0, jfloat arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SweepGradient(jfloat arg0, jfloat arg1, jlong arg2, jlong arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::graphics

