#pragma once

#include "../common/AdSelectionSignals.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/Instant.def.hpp"
#include "./PartialCustomAudience.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	inline JObject PartialCustomAudience::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.customaudience.PartialCustomAudience",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PartialCustomAudience::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PartialCustomAudience::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::Instant PartialCustomAudience::getActivationTime() const
	{
		return callObjectMethod(
			"getActivationTime",
			"()Ljava/time/Instant;"
		);
	}
	inline java::time::Instant PartialCustomAudience::getExpirationTime() const
	{
		return callObjectMethod(
			"getExpirationTime",
			"()Ljava/time/Instant;"
		);
	}
	inline JString PartialCustomAudience::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline android::adservices::common::AdSelectionSignals PartialCustomAudience::getUserBiddingSignals() const
	{
		return callObjectMethod(
			"getUserBiddingSignals",
			"()Landroid/adservices/common/AdSelectionSignals;"
		);
	}
	inline jint PartialCustomAudience::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PartialCustomAudience::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PartialCustomAudience::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::adservices::customaudience

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::customaudience;
#endif
