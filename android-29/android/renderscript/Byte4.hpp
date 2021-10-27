#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Byte4 : public __JniBaseClass
	{
	public:
		// Fields
		jbyte w();
		jbyte x();
		jbyte y();
		jbyte z();
		
		// Constructors
		void __constructor();
		void __constructor(jbyte arg0, jbyte arg1, jbyte arg2, jbyte arg3);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	jbyte Byte4::w()
	{
		return __thiz.getField<jbyte>(
			"w"
		);
	}
	jbyte Byte4::x()
	{
		return __thiz.getField<jbyte>(
			"x"
		);
	}
	jbyte Byte4::y()
	{
		return __thiz.getField<jbyte>(
			"y"
		);
	}
	jbyte Byte4::z()
	{
		return __thiz.getField<jbyte>(
			"z"
		);
	}
	
	// Constructors
	void Byte4::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Byte4",
			"()V"
		);
	}
	void Byte4::__constructor(jbyte arg0, jbyte arg1, jbyte arg2, jbyte arg3)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Byte4",
			"(BBBB)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Byte4 : public __jni_impl::android::renderscript::Byte4
	{
	public:
		Byte4(QAndroidJniObject obj) { __thiz = obj; }
		Byte4()
		{
			__constructor();
		}
		Byte4(jbyte arg0, jbyte arg1, jbyte arg2, jbyte arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::renderscript

