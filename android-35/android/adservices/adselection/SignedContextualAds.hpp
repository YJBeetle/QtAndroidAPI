#pragma once

#include "../../../JByteArray.hpp"
#include "../common/AdTechIdentifier.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SignedContextualAds.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	inline JObject SignedContextualAds::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.adselection.SignedContextualAds",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SignedContextualAds::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SignedContextualAds::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject SignedContextualAds::getAdsWithBid() const
	{
		return callObjectMethod(
			"getAdsWithBid",
			"()Ljava/util/List;"
		);
	}
	inline android::adservices::common::AdTechIdentifier SignedContextualAds::getBuyer() const
	{
		return callObjectMethod(
			"getBuyer",
			"()Landroid/adservices/common/AdTechIdentifier;"
		);
	}
	inline android::net::Uri SignedContextualAds::getDecisionLogicUri() const
	{
		return callObjectMethod(
			"getDecisionLogicUri",
			"()Landroid/net/Uri;"
		);
	}
	inline JByteArray SignedContextualAds::getSignature() const
	{
		return callObjectMethod(
			"getSignature",
			"()[B"
		);
	}
	inline jint SignedContextualAds::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString SignedContextualAds::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SignedContextualAds::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
