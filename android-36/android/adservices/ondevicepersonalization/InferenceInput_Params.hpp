#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./InferenceInput_Params.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	inline jint InferenceInput_Params::DELEGATE_CPU()
	{
		return getStaticField<jint>(
			"android.adservices.ondevicepersonalization.InferenceInput$Params",
			"DELEGATE_CPU"
		);
	}
	inline jint InferenceInput_Params::MODEL_TYPE_TENSORFLOW_LITE()
	{
		return getStaticField<jint>(
			"android.adservices.ondevicepersonalization.InferenceInput$Params",
			"MODEL_TYPE_TENSORFLOW_LITE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean InferenceInput_Params::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint InferenceInput_Params::getDelegateType() const
	{
		return callMethod<jint>(
			"getDelegateType",
			"()I"
		);
	}
	inline JObject InferenceInput_Params::getKeyValueStore() const
	{
		return callObjectMethod(
			"getKeyValueStore",
			"()Landroid/adservices/ondevicepersonalization/KeyValueStore;"
		);
	}
	inline JString InferenceInput_Params::getModelKey() const
	{
		return callObjectMethod(
			"getModelKey",
			"()Ljava/lang/String;"
		);
	}
	inline jint InferenceInput_Params::getModelType() const
	{
		return callMethod<jint>(
			"getModelType",
			"()I"
		);
	}
	inline jint InferenceInput_Params::getRecommendedNumThreads() const
	{
		return callMethod<jint>(
			"getRecommendedNumThreads",
			"()I"
		);
	}
	inline jint InferenceInput_Params::hashCode() const
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
