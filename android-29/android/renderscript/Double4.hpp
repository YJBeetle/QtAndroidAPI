#pragma once

#ifndef ANDROID_RENDERSCRIPT_DOUBLE4
#define ANDROID_RENDERSCRIPT_DOUBLE4

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Double4 : public __JniBaseClass
	{
	public:
		// Fields
		jdouble w();
		jdouble x();
		jdouble y();
		jdouble z();
		
		// Constructors
		void __constructor();
		void __constructor(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	jdouble Double4::w()
	{
		return __thiz.getField<jdouble>(
			"w"
		);
	}
	jdouble Double4::x()
	{
		return __thiz.getField<jdouble>(
			"x"
		);
	}
	jdouble Double4::y()
	{
		return __thiz.getField<jdouble>(
			"y"
		);
	}
	jdouble Double4::z()
	{
		return __thiz.getField<jdouble>(
			"z"
		);
	}
	
	// Constructors
	void Double4::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Double4",
			"()V"
		);
	}
	void Double4::__constructor(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Double4",
			"(DDDD)V",
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
	class Double4 : public __jni_impl::android::renderscript::Double4
	{
	public:
		Double4(QAndroidJniObject obj) { __thiz = obj; }
		Double4()
		{
			__constructor();
		}
		Double4(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_DOUBLE4

