#pragma once

#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./TrustedBiddingData.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	inline JObject TrustedBiddingData::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.customaudience.TrustedBiddingData",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TrustedBiddingData::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean TrustedBiddingData::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject TrustedBiddingData::getTrustedBiddingKeys() const
	{
		return callObjectMethod(
			"getTrustedBiddingKeys",
			"()Ljava/util/List;"
		);
	}
	inline android::net::Uri TrustedBiddingData::getTrustedBiddingUri() const
	{
		return callObjectMethod(
			"getTrustedBiddingUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jint TrustedBiddingData::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void TrustedBiddingData::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
