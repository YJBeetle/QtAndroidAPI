#pragma once

#include "../../../../JFloatArray.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./LensIntrinsicsSample.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	inline LensIntrinsicsSample::LensIntrinsicsSample(jlong arg0, JFloatArray arg1)
		: JObject(
			"android.hardware.camera2.params.LensIntrinsicsSample",
			"(J[F)V",
			arg0,
			arg1.object<jfloatArray>()
		) {}
	
	// Methods
	inline jboolean LensIntrinsicsSample::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JFloatArray LensIntrinsicsSample::getLensIntrinsics() const
	{
		return callObjectMethod(
			"getLensIntrinsics",
			"()[F"
		);
	}
	inline jlong LensIntrinsicsSample::getTimestampNanos() const
	{
		return callMethod<jlong>(
			"getTimestampNanos",
			"()J"
		);
	}
	inline jint LensIntrinsicsSample::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString LensIntrinsicsSample::toString() const
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
