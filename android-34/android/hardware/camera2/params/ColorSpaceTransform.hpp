#pragma once

#include "../../../../JIntArray.hpp"
#include "../../../../JArray.hpp"
#include "../../../util/Rational.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./ColorSpaceTransform.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	inline ColorSpaceTransform::ColorSpaceTransform(JIntArray arg0)
		: JObject(
			"android.hardware.camera2.params.ColorSpaceTransform",
			"([I)V",
			arg0.object<jintArray>()
		) {}
	inline ColorSpaceTransform::ColorSpaceTransform(JArray arg0)
		: JObject(
			"android.hardware.camera2.params.ColorSpaceTransform",
			"([Landroid/util/Rational;)V",
			arg0.object<jarray>()
		) {}
	
	// Methods
	inline void ColorSpaceTransform::copyElements(JIntArray arg0, jint arg1) const
	{
		callMethod<void>(
			"copyElements",
			"([II)V",
			arg0.object<jintArray>(),
			arg1
		);
	}
	inline void ColorSpaceTransform::copyElements(JArray arg0, jint arg1) const
	{
		callMethod<void>(
			"copyElements",
			"([Landroid/util/Rational;I)V",
			arg0.object<jarray>(),
			arg1
		);
	}
	inline jboolean ColorSpaceTransform::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::util::Rational ColorSpaceTransform::getElement(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getElement",
			"(II)Landroid/util/Rational;",
			arg0,
			arg1
		);
	}
	inline jint ColorSpaceTransform::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString ColorSpaceTransform::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2::params;
#endif
