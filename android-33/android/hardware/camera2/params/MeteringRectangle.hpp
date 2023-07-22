#pragma once

#include "../../../graphics/Point.def.hpp"
#include "../../../graphics/Rect.def.hpp"
#include "../../../util/Size.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./MeteringRectangle.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	inline jint MeteringRectangle::METERING_WEIGHT_DONT_CARE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.MeteringRectangle",
			"METERING_WEIGHT_DONT_CARE"
		);
	}
	inline jint MeteringRectangle::METERING_WEIGHT_MAX()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.MeteringRectangle",
			"METERING_WEIGHT_MAX"
		);
	}
	inline jint MeteringRectangle::METERING_WEIGHT_MIN()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.MeteringRectangle",
			"METERING_WEIGHT_MIN"
		);
	}
	
	// Constructors
	inline MeteringRectangle::MeteringRectangle(android::graphics::Rect arg0, jint arg1)
		: JObject(
			"android.hardware.camera2.params.MeteringRectangle",
			"(Landroid/graphics/Rect;I)V",
			arg0.object(),
			arg1
		) {}
	inline MeteringRectangle::MeteringRectangle(android::graphics::Point arg0, android::util::Size arg1, jint arg2)
		: JObject(
			"android.hardware.camera2.params.MeteringRectangle",
			"(Landroid/graphics/Point;Landroid/util/Size;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline MeteringRectangle::MeteringRectangle(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: JObject(
			"android.hardware.camera2.params.MeteringRectangle",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	inline jboolean MeteringRectangle::equals(android::hardware::camera2::params::MeteringRectangle arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Landroid/hardware/camera2/params/MeteringRectangle;)Z",
			arg0.object()
		);
	}
	inline jboolean MeteringRectangle::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint MeteringRectangle::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline jint MeteringRectangle::getMeteringWeight() const
	{
		return callMethod<jint>(
			"getMeteringWeight",
			"()I"
		);
	}
	inline android::graphics::Rect MeteringRectangle::getRect() const
	{
		return callObjectMethod(
			"getRect",
			"()Landroid/graphics/Rect;"
		);
	}
	inline android::util::Size MeteringRectangle::getSize() const
	{
		return callObjectMethod(
			"getSize",
			"()Landroid/util/Size;"
		);
	}
	inline android::graphics::Point MeteringRectangle::getUpperLeftPoint() const
	{
		return callObjectMethod(
			"getUpperLeftPoint",
			"()Landroid/graphics/Point;"
		);
	}
	inline jint MeteringRectangle::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline jint MeteringRectangle::getX() const
	{
		return callMethod<jint>(
			"getX",
			"()I"
		);
	}
	inline jint MeteringRectangle::getY() const
	{
		return callMethod<jint>(
			"getY",
			"()I"
		);
	}
	inline jint MeteringRectangle::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString MeteringRectangle::toString() const
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
