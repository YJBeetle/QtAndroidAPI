#pragma once

#include "../../../JObjectArray.hpp"
#include "./InferenceInput.def.hpp"
#include "./InferenceInput_Params.def.hpp"
#include "./InferenceOutput.def.hpp"
#include "./InferenceInput_Builder.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline InferenceInput_Builder::InferenceInput_Builder(android::adservices::ondevicepersonalization::InferenceInput_Params arg0, JObjectArray arg1, android::adservices::ondevicepersonalization::InferenceOutput arg2)
		: JObject(
			"android.adservices.ondevicepersonalization.InferenceInput$Builder",
			"(Landroid/adservices/ondevicepersonalization/InferenceInput$Params;[Ljava/lang/Object;Landroid/adservices/ondevicepersonalization/InferenceOutput;)V",
			arg0.object(),
			arg1.object<jobjectArray>(),
			arg2.object()
		) {}
	
	// Methods
	inline android::adservices::ondevicepersonalization::InferenceInput InferenceInput_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/ondevicepersonalization/InferenceInput;"
		);
	}
	inline android::adservices::ondevicepersonalization::InferenceInput_Builder InferenceInput_Builder::setBatchSize(jint arg0) const
	{
		return callObjectMethod(
			"setBatchSize",
			"(I)Landroid/adservices/ondevicepersonalization/InferenceInput$Builder;",
			arg0
		);
	}
	inline android::adservices::ondevicepersonalization::InferenceInput_Builder InferenceInput_Builder::setExpectedOutputStructure(android::adservices::ondevicepersonalization::InferenceOutput arg0) const
	{
		return callObjectMethod(
			"setExpectedOutputStructure",
			"(Landroid/adservices/ondevicepersonalization/InferenceOutput;)Landroid/adservices/ondevicepersonalization/InferenceInput$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::ondevicepersonalization::InferenceInput_Builder InferenceInput_Builder::setInputData(JObjectArray arg0) const
	{
		return callObjectMethod(
			"setInputData",
			"([Ljava/lang/Object;)Landroid/adservices/ondevicepersonalization/InferenceInput$Builder;",
			arg0.object<jobjectArray>()
		);
	}
	inline android::adservices::ondevicepersonalization::InferenceInput_Builder InferenceInput_Builder::setParams(android::adservices::ondevicepersonalization::InferenceInput_Params arg0) const
	{
		return callObjectMethod(
			"setParams",
			"(Landroid/adservices/ondevicepersonalization/InferenceInput$Params;)Landroid/adservices/ondevicepersonalization/InferenceInput$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
