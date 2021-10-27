#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Float2 : public __JniBaseClass
	{
	public:
		// Fields
		jfloat x();
		jfloat y();
		
		// Constructors
		void __constructor();
		void __constructor(jfloat arg0, jfloat arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	jfloat Float2::x()
	{
		return __thiz.getField<jfloat>(
			"x"
		);
	}
	jfloat Float2::y()
	{
		return __thiz.getField<jfloat>(
			"y"
		);
	}
	
	// Constructors
	void Float2::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Float2",
			"()V"
		);
	}
	void Float2::__constructor(jfloat arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Float2",
			"(FF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Float2 : public __jni_impl::android::renderscript::Float2
	{
	public:
		Float2(QAndroidJniObject obj) { __thiz = obj; }
		Float2()
		{
			__constructor();
		}
		Float2(jfloat arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::renderscript

