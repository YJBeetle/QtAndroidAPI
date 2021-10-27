#include "../../../util/Rational.hpp"
#include "./ColorSpaceTransform.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	ColorSpaceTransform::ColorSpaceTransform(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ColorSpaceTransform::ColorSpaceTransform(jintArray &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.ColorSpaceTransform",
			"([I)V",
			arg0
		);
	}
	ColorSpaceTransform::ColorSpaceTransform(jarray &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.ColorSpaceTransform",
			"([Landroid/util/Rational;)V",
			arg0
		);
	}
	
	// Methods
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
	jboolean ColorSpaceTransform::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jint ColorSpaceTransform::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ColorSpaceTransform::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2::params

