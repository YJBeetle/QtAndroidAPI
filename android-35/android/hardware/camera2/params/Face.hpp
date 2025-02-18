#pragma once

#include "../../../graphics/Point.def.hpp"
#include "../../../graphics/Rect.def.hpp"
#include "../../../../JString.hpp"
#include "./Face.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	inline jint Face::ID_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.Face",
			"ID_UNSUPPORTED"
		);
	}
	inline jint Face::SCORE_MAX()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.Face",
			"SCORE_MAX"
		);
	}
	inline jint Face::SCORE_MIN()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.Face",
			"SCORE_MIN"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Rect Face::getBounds() const
	{
		return callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	inline jint Face::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline android::graphics::Point Face::getLeftEyePosition() const
	{
		return callObjectMethod(
			"getLeftEyePosition",
			"()Landroid/graphics/Point;"
		);
	}
	inline android::graphics::Point Face::getMouthPosition() const
	{
		return callObjectMethod(
			"getMouthPosition",
			"()Landroid/graphics/Point;"
		);
	}
	inline android::graphics::Point Face::getRightEyePosition() const
	{
		return callObjectMethod(
			"getRightEyePosition",
			"()Landroid/graphics/Point;"
		);
	}
	inline jint Face::getScore() const
	{
		return callMethod<jint>(
			"getScore",
			"()I"
		);
	}
	inline JString Face::toString() const
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
