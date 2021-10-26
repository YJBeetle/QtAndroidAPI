#pragma once

#ifndef ANDROID_RENDERSCRIPT_SHORT2
#define ANDROID_RENDERSCRIPT_SHORT2

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Short2 : public __JniBaseClass
	{
	public:
		// Fields
		jshort x();
		jshort y();
		
		// Constructors
		void __constructor();
		void __constructor(jshort arg0, jshort arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	jshort Short2::x()
	{
		return __thiz.getField<jshort>(
			"x"
		);
	}
	jshort Short2::y()
	{
		return __thiz.getField<jshort>(
			"y"
		);
	}
	
	// Constructors
	void Short2::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Short2",
			"()V"
		);
	}
	void Short2::__constructor(jshort arg0, jshort arg1)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Short2",
			"(SS)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Short2 : public __jni_impl::android::renderscript::Short2
	{
	public:
		Short2(QAndroidJniObject obj) { __thiz = obj; }
		Short2()
		{
			__constructor();
		}
		Short2(jshort arg0, jshort arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SHORT2

