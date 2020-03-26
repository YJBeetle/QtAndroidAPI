#pragma once

#ifndef ANDROID_RENDERSCRIPT_LONG3
#define ANDROID_RENDERSCRIPT_LONG3

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Long3 : public __JniBaseClass
	{
	public:
		// Fields
		jlong x();
		jlong y();
		jlong z();
		
		// Constructors
		void __constructor();
		void __constructor(jlong arg0, jlong arg1, jlong arg2);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	jlong Long3::x()
	{
		return __thiz.getField<jlong>(
			"x"
		);
	}
	jlong Long3::y()
	{
		return __thiz.getField<jlong>(
			"y"
		);
	}
	jlong Long3::z()
	{
		return __thiz.getField<jlong>(
			"z"
		);
	}
	
	// Constructors
	void Long3::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Long3",
			"()V");
	}
	void Long3::__constructor(jlong arg0, jlong arg1, jlong arg2)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Long3",
			"(JJJ)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Long3 : public __jni_impl::android::renderscript::Long3
	{
	public:
		Long3(QAndroidJniObject obj) { __thiz = obj; }
		Long3()
		{
			__constructor();
		}
		Long3(jlong arg0, jlong arg1, jlong arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_LONG3

