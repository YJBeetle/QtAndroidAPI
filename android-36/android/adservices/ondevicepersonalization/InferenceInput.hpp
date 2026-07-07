#pragma once

#include "../../../JObjectArray.hpp"
#include "./InferenceInput_Params.def.hpp"
#include "./InferenceOutput.def.hpp"
#include "../../../JObject.hpp"
#include "./InferenceInput.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean InferenceInput::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint InferenceInput::getBatchSize() const
	{
		return callMethod<jint>(
			"getBatchSize",
			"()I"
		);
	}
	inline android::adservices::ondevicepersonalization::InferenceOutput InferenceInput::getExpectedOutputStructure() const
	{
		return callObjectMethod(
			"getExpectedOutputStructure",
			"()Landroid/adservices/ondevicepersonalization/InferenceOutput;"
		);
	}
	inline JObjectArray InferenceInput::getInputData() const
	{
		return callObjectMethod(
			"getInputData",
			"()[Ljava/lang/Object;"
		);
	}
	inline android::adservices::ondevicepersonalization::InferenceInput_Params InferenceInput::getParams() const
	{
		return callObjectMethod(
			"getParams",
			"()Landroid/adservices/ondevicepersonalization/InferenceInput$Params;"
		);
	}
	inline jint InferenceInput::hashCode() const
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
