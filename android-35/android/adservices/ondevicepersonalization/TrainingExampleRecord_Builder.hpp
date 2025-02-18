#pragma once

#include "../../../JByteArray.hpp"
#include "./TrainingExampleRecord.def.hpp"
#include "./TrainingExampleRecord_Builder.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline TrainingExampleRecord_Builder::TrainingExampleRecord_Builder()
		: JObject(
			"android.adservices.ondevicepersonalization.TrainingExampleRecord$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::ondevicepersonalization::TrainingExampleRecord TrainingExampleRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/ondevicepersonalization/TrainingExampleRecord;"
		);
	}
	inline android::adservices::ondevicepersonalization::TrainingExampleRecord_Builder TrainingExampleRecord_Builder::setResumptionToken(JByteArray arg0) const
	{
		return callObjectMethod(
			"setResumptionToken",
			"([B)Landroid/adservices/ondevicepersonalization/TrainingExampleRecord$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::adservices::ondevicepersonalization::TrainingExampleRecord_Builder TrainingExampleRecord_Builder::setTrainingExample(JByteArray arg0) const
	{
		return callObjectMethod(
			"setTrainingExample",
			"([B)Landroid/adservices/ondevicepersonalization/TrainingExampleRecord$Builder;",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
