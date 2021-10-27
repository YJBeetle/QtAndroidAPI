#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Int4 : public __JniBaseClass
	{
	public:
		// Fields
		jint w();
		jint x();
		jint y();
		jint z();
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	jint Int4::w()
	{
		return __thiz.getField<jint>(
			"w"
		);
	}
	jint Int4::x()
	{
		return __thiz.getField<jint>(
			"x"
		);
	}
	jint Int4::y()
	{
		return __thiz.getField<jint>(
			"y"
		);
	}
	jint Int4::z()
	{
		return __thiz.getField<jint>(
			"z"
		);
	}
	
	// Constructors
	void Int4::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Int4",
			"()V"
		);
	}
	void Int4::__constructor(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Int4",
			"(IIII)V",
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
	class Int4 : public __jni_impl::android::renderscript::Int4
	{
	public:
		Int4(QAndroidJniObject obj) { __thiz = obj; }
		Int4()
		{
			__constructor();
		}
		Int4(jint arg0, jint arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::renderscript

