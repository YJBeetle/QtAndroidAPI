#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Byte3 : public __JniBaseClass
	{
	public:
		// Fields
		jbyte x();
		jbyte y();
		jbyte z();
		
		// Constructors
		void __constructor();
		void __constructor(jbyte arg0, jbyte arg1, jbyte arg2);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	jbyte Byte3::x()
	{
		return __thiz.getField<jbyte>(
			"x"
		);
	}
	jbyte Byte3::y()
	{
		return __thiz.getField<jbyte>(
			"y"
		);
	}
	jbyte Byte3::z()
	{
		return __thiz.getField<jbyte>(
			"z"
		);
	}
	
	// Constructors
	void Byte3::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Byte3",
			"()V"
		);
	}
	void Byte3::__constructor(jbyte arg0, jbyte arg1, jbyte arg2)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Byte3",
			"(BBB)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Byte3 : public __jni_impl::android::renderscript::Byte3
	{
	public:
		Byte3(QAndroidJniObject obj) { __thiz = obj; }
		Byte3()
		{
			__constructor();
		}
		Byte3(jbyte arg0, jbyte arg1, jbyte arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::renderscript

