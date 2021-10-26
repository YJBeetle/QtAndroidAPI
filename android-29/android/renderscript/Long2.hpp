#pragma once

#ifndef ANDROID_RENDERSCRIPT_LONG2
#define ANDROID_RENDERSCRIPT_LONG2

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Long2 : public __JniBaseClass
	{
	public:
		// Fields
		jlong x();
		jlong y();
		
		// Constructors
		void __constructor();
		void __constructor(jlong arg0, jlong arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	jlong Long2::x()
	{
		return __thiz.getField<jlong>(
			"x"
		);
	}
	jlong Long2::y()
	{
		return __thiz.getField<jlong>(
			"y"
		);
	}
	
	// Constructors
	void Long2::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Long2",
			"()V"
		);
	}
	void Long2::__constructor(jlong arg0, jlong arg1)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Long2",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Long2 : public __jni_impl::android::renderscript::Long2
	{
	public:
		Long2(QAndroidJniObject obj) { __thiz = obj; }
		Long2()
		{
			__constructor();
		}
		Long2(jlong arg0, jlong arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_LONG2

