#pragma once

#include "../../../../JFloatArray.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./RggbChannelVector.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	inline jint RggbChannelVector::BLUE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RggbChannelVector",
			"BLUE"
		);
	}
	inline jint RggbChannelVector::COUNT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RggbChannelVector",
			"COUNT"
		);
	}
	inline jint RggbChannelVector::GREEN_EVEN()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RggbChannelVector",
			"GREEN_EVEN"
		);
	}
	inline jint RggbChannelVector::GREEN_ODD()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RggbChannelVector",
			"GREEN_ODD"
		);
	}
	inline jint RggbChannelVector::RED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.RggbChannelVector",
			"RED"
		);
	}
	
	// Constructors
	inline RggbChannelVector::RggbChannelVector(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		: JObject(
			"android.hardware.camera2.params.RggbChannelVector",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline void RggbChannelVector::copyTo(JFloatArray arg0, jint arg1) const
	{
		callMethod<void>(
			"copyTo",
			"([FI)V",
			arg0.object<jfloatArray>(),
			arg1
		);
	}
	inline jboolean RggbChannelVector::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat RggbChannelVector::getBlue() const
	{
		return callMethod<jfloat>(
			"getBlue",
			"()F"
		);
	}
	inline jfloat RggbChannelVector::getComponent(jint arg0) const
	{
		return callMethod<jfloat>(
			"getComponent",
			"(I)F",
			arg0
		);
	}
	inline jfloat RggbChannelVector::getGreenEven() const
	{
		return callMethod<jfloat>(
			"getGreenEven",
			"()F"
		);
	}
	inline jfloat RggbChannelVector::getGreenOdd() const
	{
		return callMethod<jfloat>(
			"getGreenOdd",
			"()F"
		);
	}
	inline jfloat RggbChannelVector::getRed() const
	{
		return callMethod<jfloat>(
			"getRed",
			"()F"
		);
	}
	inline jint RggbChannelVector::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString RggbChannelVector::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

