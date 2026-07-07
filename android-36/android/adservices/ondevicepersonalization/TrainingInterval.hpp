#pragma once

#include "../../../JObject.hpp"
#include "../../../java/time/Duration.def.hpp"
#include "./TrainingInterval.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	inline jint TrainingInterval::SCHEDULING_MODE_ONE_TIME()
	{
		return getStaticField<jint>(
			"android.adservices.ondevicepersonalization.TrainingInterval",
			"SCHEDULING_MODE_ONE_TIME"
		);
	}
	inline jint TrainingInterval::SCHEDULING_MODE_RECURRENT()
	{
		return getStaticField<jint>(
			"android.adservices.ondevicepersonalization.TrainingInterval",
			"SCHEDULING_MODE_RECURRENT"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean TrainingInterval::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::Duration TrainingInterval::getMinimumInterval() const
	{
		return callObjectMethod(
			"getMinimumInterval",
			"()Ljava/time/Duration;"
		);
	}
	inline jint TrainingInterval::getSchedulingMode() const
	{
		return callMethod<jint>(
			"getSchedulingMode",
			"()I"
		);
	}
	inline jint TrainingInterval::hashCode() const
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
