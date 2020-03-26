#pragma once

#ifndef ANDROID_RENDERSCRIPT_FLOAT3
#define ANDROID_RENDERSCRIPT_FLOAT3

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Float3 : public __JniBaseClass
	{
	public:
		// Fields
		jfloat x();
		jfloat y();
		jfloat z();
		
		// Constructors
		void __constructor();
		void __constructor(jfloat arg0, jfloat arg1, jfloat arg2);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	jfloat Float3::x()
	{
		return __thiz.getField<jfloat>(
			"x"
		);
	}
	jfloat Float3::y()
	{
		return __thiz.getField<jfloat>(
			"y"
		);
	}
	jfloat Float3::z()
	{
		return __thiz.getField<jfloat>(
			"z"
		);
	}
	
	// Constructors
	void Float3::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Float3",
			"()V");
	}
	void Float3::__constructor(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Float3",
			"(FFF)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Float3 : public __jni_impl::android::renderscript::Float3
	{
	public:
		Float3(QAndroidJniObject obj) { __thiz = obj; }
		Float3()
		{
			__constructor();
		}
		Float3(jfloat arg0, jfloat arg1, jfloat arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_FLOAT3

