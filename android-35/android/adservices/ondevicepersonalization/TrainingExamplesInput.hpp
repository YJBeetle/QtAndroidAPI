#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TrainingExamplesInput.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean TrainingExamplesInput::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString TrainingExamplesInput::getPopulationName() const
	{
		return callObjectMethod(
			"getPopulationName",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray TrainingExamplesInput::getResumptionToken() const
	{
		return callObjectMethod(
			"getResumptionToken",
			"()[B"
		);
	}
	inline JString TrainingExamplesInput::getTaskName() const
	{
		return callObjectMethod(
			"getTaskName",
			"()Ljava/lang/String;"
		);
	}
	inline jint TrainingExamplesInput::hashCode() const
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
