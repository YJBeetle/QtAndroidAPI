#include "../../../../JIntArray.hpp"
#include "../../../../JArray.hpp"
#include "../../../util/Rational.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./ColorSpaceTransform.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// QJniObject forward
	ColorSpaceTransform::ColorSpaceTransform(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ColorSpaceTransform::ColorSpaceTransform(JIntArray arg0)
		: JObject(
			"android.hardware.camera2.params.ColorSpaceTransform",
			"([I)V",
			arg0.object<jintArray>()
		) {}
	ColorSpaceTransform::ColorSpaceTransform(JArray arg0)
		: JObject(
			"android.hardware.camera2.params.ColorSpaceTransform",
			"([Landroid/util/Rational;)V",
			arg0.object<jarray>()
		) {}
	
	// Methods
	void ColorSpaceTransform::copyElements(JIntArray arg0, jint arg1)
	{
		callMethod<void>(
			"copyElements",
			"([II)V",
			arg0.object<jintArray>(),
			arg1
		);
	}
	void ColorSpaceTransform::copyElements(JArray arg0, jint arg1)
	{
		callMethod<void>(
			"copyElements",
			"([Landroid/util/Rational;I)V",
			arg0.object<jarray>(),
			arg1
		);
	}
	jboolean ColorSpaceTransform::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::util::Rational ColorSpaceTransform::getElement(jint arg0, jint arg1)
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
	JString ColorSpaceTransform::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2::params

