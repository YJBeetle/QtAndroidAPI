#pragma once

#ifndef ANDROID_RENDERSCRIPT_LONG4
#define ANDROID_RENDERSCRIPT_LONG4

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Long4 : public __JniBaseClass
	{
	public:
		// Fields
		jlong w();
		jlong x();
		jlong y();
		jlong z();
		
		// Constructors
		void __constructor();
		void __constructor(jlong arg0, jlong arg1, jlong arg2, jlong arg3);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	jlong Long4::w()
	{
		return __thiz.getField<jlong>(
			"w");
	}
	jlong Long4::x()
	{
		return __thiz.getField<jlong>(
			"x");
	}
	jlong Long4::y()
	{
		return __thiz.getField<jlong>(
			"y");
	}
	jlong Long4::z()
	{
		return __thiz.getField<jlong>(
			"z");
	}
	
	// Constructors
	void Long4::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Long4",
			"()V");
	}
	void Long4::__constructor(jlong arg0, jlong arg1, jlong arg2, jlong arg3)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Long4",
			"(JJJJ)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Long4 : public __jni_impl::android::renderscript::Long4
	{
	public:
		Long4(QAndroidJniObject obj) { __thiz = obj; }
		Long4()
		{
			__constructor();
		}
		Long4(jlong arg0, jlong arg1, jlong arg2, jlong arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_LONG4

