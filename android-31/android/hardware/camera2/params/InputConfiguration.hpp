#pragma once

#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./InputConfiguration.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	inline InputConfiguration::InputConfiguration(JObject arg0, jint arg1)
		: JObject(
			"android.hardware.camera2.params.InputConfiguration",
			"(Ljava/util/Collection;I)V",
			arg0.object(),
			arg1
		) {}
	inline InputConfiguration::InputConfiguration(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.hardware.camera2.params.InputConfiguration",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline jboolean InputConfiguration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint InputConfiguration::getFormat() const
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	inline jint InputConfiguration::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline jint InputConfiguration::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline jint InputConfiguration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean InputConfiguration::isMultiResolution() const
	{
		return callMethod<jboolean>(
			"isMultiResolution",
			"()Z"
		);
	}
	inline JString InputConfiguration::toString() const
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
