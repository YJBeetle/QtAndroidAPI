#pragma once

#ifndef ANDROID_RENDERSCRIPT_INT2
#define ANDROID_RENDERSCRIPT_INT2

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Int2 : public __JniBaseClass
	{
	public:
		// Fields
		jint x();
		jint y();
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0, jint arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	jint Int2::x()
	{
		return __thiz.getField<jint>(
			"x"
		);
	}
	jint Int2::y()
	{
		return __thiz.getField<jint>(
			"y"
		);
	}
	
	// Constructors
	void Int2::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Int2",
			"()V"
		);
	}
	void Int2::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Int2",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Int2 : public __jni_impl::android::renderscript::Int2
	{
	public:
		Int2(QAndroidJniObject obj) { __thiz = obj; }
		Int2()
		{
			__constructor();
		}
		Int2(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_INT2

