#pragma once

#include "./TrainingExampleRecord.def.hpp"
#include "./TrainingExamplesOutput.def.hpp"
#include "./TrainingExamplesOutput_Builder.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline TrainingExamplesOutput_Builder::TrainingExamplesOutput_Builder()
		: JObject(
			"android.adservices.ondevicepersonalization.TrainingExamplesOutput$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::ondevicepersonalization::TrainingExamplesOutput_Builder TrainingExamplesOutput_Builder::addTrainingExampleRecord(android::adservices::ondevicepersonalization::TrainingExampleRecord arg0) const
	{
		return callObjectMethod(
			"addTrainingExampleRecord",
			"(Landroid/adservices/ondevicepersonalization/TrainingExampleRecord;)Landroid/adservices/ondevicepersonalization/TrainingExamplesOutput$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::ondevicepersonalization::TrainingExamplesOutput TrainingExamplesOutput_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/ondevicepersonalization/TrainingExamplesOutput;"
		);
	}
	inline android::adservices::ondevicepersonalization::TrainingExamplesOutput_Builder TrainingExamplesOutput_Builder::setTrainingExampleRecords(JObject arg0) const
	{
		return callObjectMethod(
			"setTrainingExampleRecords",
			"(Ljava/util/List;)Landroid/adservices/ondevicepersonalization/TrainingExamplesOutput$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
