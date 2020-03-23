#pragma once

#ifndef ANDROID_RENDERSCRIPT_FLOAT4
#define ANDROID_RENDERSCRIPT_FLOAT4

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Float4 : public __JniBaseClass
	{
	public:
		// Fields
		jfloat w();
		jfloat x();
		jfloat y();
		jfloat z();
		
		// Constructors
		void __constructor();
		void __constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	jfloat Float4::w()
	{
		return __thiz.getField<jfloat>(
			"w");
	}
	jfloat Float4::x()
	{
		return __thiz.getField<jfloat>(
			"x");
	}
	jfloat Float4::y()
	{
		return __thiz.getField<jfloat>(
			"y");
	}
	jfloat Float4::z()
	{
		return __thiz.getField<jfloat>(
			"z");
	}
	
	// Constructors
	void Float4::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Float4",
			"()V");
	}
	void Float4::__constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Float4",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Float4 : public __jni_impl::android::renderscript::Float4
	{
	public:
		Float4(QAndroidJniObject obj) { __thiz = obj; }
		Float4()
		{
			__constructor();
		}
		Float4(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_FLOAT4

