#pragma once

#ifndef ANDROID_RENDERSCRIPT_SHORT3
#define ANDROID_RENDERSCRIPT_SHORT3

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Short3 : public __JniBaseClass
	{
	public:
		// Fields
		jshort x();
		jshort y();
		jshort z();
		
		// Constructors
		void __constructor();
		void __constructor(jshort arg0, jshort arg1, jshort arg2);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	jshort Short3::x()
	{
		return __thiz.getField<jshort>(
			"x");
	}
	jshort Short3::y()
	{
		return __thiz.getField<jshort>(
			"y");
	}
	jshort Short3::z()
	{
		return __thiz.getField<jshort>(
			"z");
	}
	
	// Constructors
	void Short3::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Short3",
			"()V");
	}
	void Short3::__constructor(jshort arg0, jshort arg1, jshort arg2)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Short3",
			"(SSS)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Short3 : public __jni_impl::android::renderscript::Short3
	{
	public:
		Short3(QAndroidJniObject obj) { __thiz = obj; }
		Short3()
		{
			__constructor();
		}
		Short3(jshort arg0, jshort arg1, jshort arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SHORT3

