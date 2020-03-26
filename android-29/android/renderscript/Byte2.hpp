#pragma once

#ifndef ANDROID_RENDERSCRIPT_BYTE2
#define ANDROID_RENDERSCRIPT_BYTE2

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Byte2 : public __JniBaseClass
	{
	public:
		// Fields
		jbyte x();
		jbyte y();
		
		// Constructors
		void __constructor();
		void __constructor(jbyte arg0, jbyte arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	jbyte Byte2::x()
	{
		return __thiz.getField<jbyte>(
			"x"
		);
	}
	jbyte Byte2::y()
	{
		return __thiz.getField<jbyte>(
			"y"
		);
	}
	
	// Constructors
	void Byte2::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Byte2",
			"()V");
	}
	void Byte2::__constructor(jbyte arg0, jbyte arg1)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Byte2",
			"(BB)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Byte2 : public __jni_impl::android::renderscript::Byte2
	{
	public:
		Byte2(QAndroidJniObject obj) { __thiz = obj; }
		Byte2()
		{
			__constructor();
		}
		Byte2(jbyte arg0, jbyte arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_BYTE2

