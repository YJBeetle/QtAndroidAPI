#include "../../../util/Rational.hpp"
#include "./ColorSpaceTransform.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// QAndroidJniObject forward
	ColorSpaceTransform::ColorSpaceTransform(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ColorSpaceTransform::ColorSpaceTransform(jintArray arg0)
		: __JniBaseClass(
			"android.hardware.camera2.params.ColorSpaceTransform",
			"([I)V",
			arg0
		) {}
	ColorSpaceTransform::ColorSpaceTransform(jarray arg0)
		: __JniBaseClass(
			"android.hardware.camera2.params.ColorSpaceTransform",
			"([Landroid/util/Rational;)V",
			arg0
		) {}
	
	// Methods
	void ColorSpaceTransform::copyElements(jintArray arg0, jint arg1)
	{
		callMethod<void>(
			"copyElements",
			"([II)V",
			arg0,
			arg1
		);
	}
	void ColorSpaceTransform::copyElements(jarray arg0, jint arg1)
	{
		callMethod<void>(
			"copyElements",
			"([Landroid/util/Rational;I)V",
			arg0,
			arg1
		);
	}
	jboolean ColorSpaceTransform::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ColorSpaceTransform::getElement(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getElement",
			"(II)Landroid/util/Rational;",
			arg0,
			arg1
		);
	}
	jint ColorSpaceTransform::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ColorSpaceTransform::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2::params

