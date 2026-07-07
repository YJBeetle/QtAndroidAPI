#pragma once

#include "../../../JObject.hpp"
#include "./InferenceOutput.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean InferenceOutput::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject InferenceOutput::getDataOutputs() const
	{
		return callObjectMethod(
			"getDataOutputs",
			"()Ljava/util/Map;"
		);
	}
	inline jint InferenceOutput::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
