#pragma once

#ifndef ANDROID_RENDERSCRIPT_INT3
#define ANDROID_RENDERSCRIPT_INT3

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Int3 : public __JniBaseClass
	{
	public:
		// Fields
		jint x();
		jint y();
		jint z();
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0, jint arg1, jint arg2);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	jint Int3::x()
	{
		return __thiz.getField<jint>(
			"x"
		);
	}
	jint Int3::y()
	{
		return __thiz.getField<jint>(
			"y"
		);
	}
	jint Int3::z()
	{
		return __thiz.getField<jint>(
			"z"
		);
	}
	
	// Constructors
	void Int3::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Int3",
			"()V"
		);
	}
	void Int3::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Int3",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Int3 : public __jni_impl::android::renderscript::Int3
	{
	public:
		Int3(QAndroidJniObject obj) { __thiz = obj; }
		Int3()
		{
			__constructor();
		}
		Int3(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_INT3

