#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_PARAMS_COLORSPACETRANSFORM
#define ANDROID_HARDWARE_CAMERA2_PARAMS_COLORSPACETRANSFORM

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::util
{
	class Rational;
}

namespace __jni_impl::android::hardware::camera2::params
{
	class ColorSpaceTransform : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jarray arg0);
		void __constructor(jintArray arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		void copyElements(jintArray arg0, jint arg1);
		void copyElements(jarray arg0, jint arg1);
		QAndroidJniObject getElement(jint arg0, jint arg1);
	};
} // namespace __jni_impl::android::hardware::camera2::params

#include "../../../util/Rational.hpp"

namespace __jni_impl::android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	void ColorSpaceTransform::__constructor(jarray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.ColorSpaceTransform",
			"([Landroid/util/Rational;)V",
			arg0);
	}
	void ColorSpaceTransform::__constructor(jintArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.ColorSpaceTransform",
			"([I)V",
			arg0);
	}
	
	// Methods
	jboolean ColorSpaceTransform::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ColorSpaceTransform::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ColorSpaceTransform::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void ColorSpaceTransform::copyElements(jintArray arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"copyElements",
			"([II)V",
			arg0,
			arg1
		);
	}
	void ColorSpaceTransform::copyElements(jarray arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"copyElements",
			"([Landroid/util/Rational;I)V",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ColorSpaceTransform::getElement(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getElement",
			"(II)Landroid/util/Rational;",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::hardware::camera2::params

namespace android::hardware::camera2::params
{
	class ColorSpaceTransform : public __jni_impl::android::hardware::camera2::params::ColorSpaceTransform
	{
	public:
		ColorSpaceTransform(QAndroidJniObject obj) { __thiz = obj; }
		ColorSpaceTransform(jarray arg0)
		{
			__constructor(
				arg0);
		}
		ColorSpaceTransform(jintArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::hardware::camera2::params

#endif // ANDROID_HARDWARE_CAMERA2_PARAMS_COLORSPACETRANSFORM

