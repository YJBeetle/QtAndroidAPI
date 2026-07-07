#pragma once

#include "./AppInstallFilters.def.hpp"
#include "./FrequencyCapFilters.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AdFilters.def.hpp"

namespace android::adservices::common
{
	// Fields
	inline JObject AdFilters::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.common.AdFilters",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AdFilters::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AdFilters::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::adservices::common::AppInstallFilters AdFilters::getAppInstallFilters() const
	{
		return callObjectMethod(
			"getAppInstallFilters",
			"()Landroid/adservices/common/AppInstallFilters;"
		);
	}
	inline android::adservices::common::FrequencyCapFilters AdFilters::getFrequencyCapFilters() const
	{
		return callObjectMethod(
			"getFrequencyCapFilters",
			"()Landroid/adservices/common/FrequencyCapFilters;"
		);
	}
	inline jint AdFilters::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AdFilters::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AdFilters::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
