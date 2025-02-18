#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./FrequencyCapFilters.def.hpp"

namespace android::adservices::common
{
	// Fields
	inline jint FrequencyCapFilters::AD_EVENT_TYPE_CLICK()
	{
		return getStaticField<jint>(
			"android.adservices.common.FrequencyCapFilters",
			"AD_EVENT_TYPE_CLICK"
		);
	}
	inline jint FrequencyCapFilters::AD_EVENT_TYPE_IMPRESSION()
	{
		return getStaticField<jint>(
			"android.adservices.common.FrequencyCapFilters",
			"AD_EVENT_TYPE_IMPRESSION"
		);
	}
	inline jint FrequencyCapFilters::AD_EVENT_TYPE_VIEW()
	{
		return getStaticField<jint>(
			"android.adservices.common.FrequencyCapFilters",
			"AD_EVENT_TYPE_VIEW"
		);
	}
	inline jint FrequencyCapFilters::AD_EVENT_TYPE_WIN()
	{
		return getStaticField<jint>(
			"android.adservices.common.FrequencyCapFilters",
			"AD_EVENT_TYPE_WIN"
		);
	}
	inline JObject FrequencyCapFilters::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.common.FrequencyCapFilters",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint FrequencyCapFilters::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean FrequencyCapFilters::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject FrequencyCapFilters::getKeyedFrequencyCapsForClickEvents() const
	{
		return callObjectMethod(
			"getKeyedFrequencyCapsForClickEvents",
			"()Ljava/util/List;"
		);
	}
	inline JObject FrequencyCapFilters::getKeyedFrequencyCapsForImpressionEvents() const
	{
		return callObjectMethod(
			"getKeyedFrequencyCapsForImpressionEvents",
			"()Ljava/util/List;"
		);
	}
	inline JObject FrequencyCapFilters::getKeyedFrequencyCapsForViewEvents() const
	{
		return callObjectMethod(
			"getKeyedFrequencyCapsForViewEvents",
			"()Ljava/util/List;"
		);
	}
	inline JObject FrequencyCapFilters::getKeyedFrequencyCapsForWinEvents() const
	{
		return callObjectMethod(
			"getKeyedFrequencyCapsForWinEvents",
			"()Ljava/util/List;"
		);
	}
	inline jint FrequencyCapFilters::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString FrequencyCapFilters::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void FrequencyCapFilters::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::adservices::common

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::common;
#endif
