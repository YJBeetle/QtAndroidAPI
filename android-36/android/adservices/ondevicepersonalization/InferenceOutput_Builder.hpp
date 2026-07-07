#pragma once

#include "./InferenceOutput.def.hpp"
#include "../../../JObject.hpp"
#include "./InferenceOutput_Builder.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline InferenceOutput_Builder::InferenceOutput_Builder()
		: JObject(
			"android.adservices.ondevicepersonalization.InferenceOutput$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::ondevicepersonalization::InferenceOutput_Builder InferenceOutput_Builder::addDataOutput(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"addDataOutput",
			"(ILjava/lang/Object;)Landroid/adservices/ondevicepersonalization/InferenceOutput$Builder;",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline android::adservices::ondevicepersonalization::InferenceOutput InferenceOutput_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/ondevicepersonalization/InferenceOutput;"
		);
	}
	inline android::adservices::ondevicepersonalization::InferenceOutput_Builder InferenceOutput_Builder::setDataOutputs(JObject arg0) const
	{
		return callObjectMethod(
			"setDataOutputs",
			"(Ljava/util/Map;)Landroid/adservices/ondevicepersonalization/InferenceOutput$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
