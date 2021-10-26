#pragma once

#ifndef ANDROID_GRAPHICS_COLORSPACE_RGB_TRANSFERPARAMETERS
#define ANDROID_GRAPHICS_COLORSPACE_RGB_TRANSFERPARAMETERS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::graphics
{
	class ColorSpace_Rgb_TransferParameters : public __JniBaseClass
	{
	public:
		// Fields
		jdouble a();
		jdouble b();
		jdouble c();
		jdouble d();
		jdouble e();
		jdouble f();
		jdouble g();
		
		// Constructors
		void __constructor(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4);
		void __constructor(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5, jdouble arg6);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	jdouble ColorSpace_Rgb_TransferParameters::a()
	{
		return __thiz.getField<jdouble>(
			"a"
		);
	}
	jdouble ColorSpace_Rgb_TransferParameters::b()
	{
		return __thiz.getField<jdouble>(
			"b"
		);
	}
	jdouble ColorSpace_Rgb_TransferParameters::c()
	{
		return __thiz.getField<jdouble>(
			"c"
		);
	}
	jdouble ColorSpace_Rgb_TransferParameters::d()
	{
		return __thiz.getField<jdouble>(
			"d"
		);
	}
	jdouble ColorSpace_Rgb_TransferParameters::e()
	{
		return __thiz.getField<jdouble>(
			"e"
		);
	}
	jdouble ColorSpace_Rgb_TransferParameters::f()
	{
		return __thiz.getField<jdouble>(
			"f"
		);
	}
	jdouble ColorSpace_Rgb_TransferParameters::g()
	{
		return __thiz.getField<jdouble>(
			"g"
		);
	}
	
	// Constructors
	void ColorSpace_Rgb_TransferParameters::__constructor(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb$TransferParameters",
			"(DDDDD)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void ColorSpace_Rgb_TransferParameters::__constructor(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5, jdouble arg6)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb$TransferParameters",
			"(DDDDDDD)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	
	// Methods
	jboolean ColorSpace_Rgb_TransferParameters::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ColorSpace_Rgb_TransferParameters::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class ColorSpace_Rgb_TransferParameters : public __jni_impl::android::graphics::ColorSpace_Rgb_TransferParameters
	{
	public:
		ColorSpace_Rgb_TransferParameters(QAndroidJniObject obj) { __thiz = obj; }
		ColorSpace_Rgb_TransferParameters(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		ColorSpace_Rgb_TransferParameters(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5, jdouble arg6)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_COLORSPACE_RGB_TRANSFERPARAMETERS

