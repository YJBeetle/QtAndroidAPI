#pragma once

#include "./InferenceInput_Params.def.hpp"
#include "../../../JString.hpp"
#include "./InferenceInput_Params_Builder.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline InferenceInput_Params_Builder::InferenceInput_Params_Builder(JObject arg0, JString arg1)
		: JObject(
			"android.adservices.ondevicepersonalization.InferenceInput$Params$Builder",
			"(Landroid/adservices/ondevicepersonalization/KeyValueStore;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline android::adservices::ondevicepersonalization::InferenceInput_Params InferenceInput_Params_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/ondevicepersonalization/InferenceInput$Params;"
		);
	}
	inline android::adservices::ondevicepersonalization::InferenceInput_Params_Builder InferenceInput_Params_Builder::setDelegateType(jint arg0) const
	{
		return callObjectMethod(
			"setDelegateType",
			"(I)Landroid/adservices/ondevicepersonalization/InferenceInput$Params$Builder;",
			arg0
		);
	}
	inline android::adservices::ondevicepersonalization::InferenceInput_Params_Builder InferenceInput_Params_Builder::setKeyValueStore(JObject arg0) const
	{
		return callObjectMethod(
			"setKeyValueStore",
			"(Landroid/adservices/ondevicepersonalization/KeyValueStore;)Landroid/adservices/ondevicepersonalization/InferenceInput$Params$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::ondevicepersonalization::InferenceInput_Params_Builder InferenceInput_Params_Builder::setModelKey(JString arg0) const
	{
		return callObjectMethod(
			"setModelKey",
			"(Ljava/lang/String;)Landroid/adservices/ondevicepersonalization/InferenceInput$Params$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::adservices::ondevicepersonalization::InferenceInput_Params_Builder InferenceInput_Params_Builder::setModelType(jint arg0) const
	{
		return callObjectMethod(
			"setModelType",
			"(I)Landroid/adservices/ondevicepersonalization/InferenceInput$Params$Builder;",
			arg0
		);
	}
	inline android::adservices::ondevicepersonalization::InferenceInput_Params_Builder InferenceInput_Params_Builder::setRecommendedNumThreads(jint arg0) const
	{
		return callObjectMethod(
			"setRecommendedNumThreads",
			"(I)Landroid/adservices/ondevicepersonalization/InferenceInput$Params$Builder;",
			arg0
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
