#pragma once

#include "./TrainingInterval.def.hpp"
#include "../../../java/time/Duration.def.hpp"
#include "./TrainingInterval_Builder.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline TrainingInterval_Builder::TrainingInterval_Builder()
		: JObject(
			"android.adservices.ondevicepersonalization.TrainingInterval$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::ondevicepersonalization::TrainingInterval TrainingInterval_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/ondevicepersonalization/TrainingInterval;"
		);
	}
	inline android::adservices::ondevicepersonalization::TrainingInterval_Builder TrainingInterval_Builder::setMinimumInterval(java::time::Duration arg0) const
	{
		return callObjectMethod(
			"setMinimumInterval",
			"(Ljava/time/Duration;)Landroid/adservices/ondevicepersonalization/TrainingInterval$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::ondevicepersonalization::TrainingInterval_Builder TrainingInterval_Builder::setSchedulingMode(jint arg0) const
	{
		return callObjectMethod(
			"setSchedulingMode",
			"(I)Landroid/adservices/ondevicepersonalization/TrainingInterval$Builder;",
			arg0
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
