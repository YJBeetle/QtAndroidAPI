#pragma once

#include "../common/AdSelectionSignals.def.hpp"
#include "../common/AdTechIdentifier.def.hpp"
#include "./TrustedBiddingData.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/Instant.def.hpp"
#include "./CustomAudience.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	inline JObject CustomAudience::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.customaudience.CustomAudience",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CustomAudience::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CustomAudience::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::Instant CustomAudience::getActivationTime() const
	{
		return callObjectMethod(
			"getActivationTime",
			"()Ljava/time/Instant;"
		);
	}
	inline JObject CustomAudience::getAds() const
	{
		return callObjectMethod(
			"getAds",
			"()Ljava/util/List;"
		);
	}
	inline android::net::Uri CustomAudience::getBiddingLogicUri() const
	{
		return callObjectMethod(
			"getBiddingLogicUri",
			"()Landroid/net/Uri;"
		);
	}
	inline android::adservices::common::AdTechIdentifier CustomAudience::getBuyer() const
	{
		return callObjectMethod(
			"getBuyer",
			"()Landroid/adservices/common/AdTechIdentifier;"
		);
	}
	inline android::net::Uri CustomAudience::getDailyUpdateUri() const
	{
		return callObjectMethod(
			"getDailyUpdateUri",
			"()Landroid/net/Uri;"
		);
	}
	inline java::time::Instant CustomAudience::getExpirationTime() const
	{
		return callObjectMethod(
			"getExpirationTime",
			"()Ljava/time/Instant;"
		);
	}
	inline JString CustomAudience::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline android::adservices::customaudience::TrustedBiddingData CustomAudience::getTrustedBiddingData() const
	{
		return callObjectMethod(
			"getTrustedBiddingData",
			"()Landroid/adservices/customaudience/TrustedBiddingData;"
		);
	}
	inline android::adservices::common::AdSelectionSignals CustomAudience::getUserBiddingSignals() const
	{
		return callObjectMethod(
			"getUserBiddingSignals",
			"()Landroid/adservices/common/AdSelectionSignals;"
		);
	}
	inline jint CustomAudience::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void CustomAudience::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
