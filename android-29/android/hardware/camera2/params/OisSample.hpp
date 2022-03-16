#pragma once

#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./OisSample.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	inline OisSample::OisSample(jlong arg0, jfloat arg1, jfloat arg2)
		: JObject(
			"android.hardware.camera2.params.OisSample",
			"(JFF)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline jboolean OisSample::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong OisSample::getTimestamp() const
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	inline jfloat OisSample::getXshift() const
	{
		return callMethod<jfloat>(
			"getXshift",
			"()F"
		);
	}
	inline jfloat OisSample::getYshift() const
	{
		return callMethod<jfloat>(
			"getYshift",
			"()F"
		);
	}
	inline jint OisSample::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString OisSample::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

