#pragma once

#include "../common/AdSelectionSignals.def.hpp"
#include "../common/AdTechIdentifier.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./AdSelectionConfig.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	inline JObject AdSelectionConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.adselection.AdSelectionConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AdSelectionConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AdSelectionConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::adservices::common::AdSelectionSignals AdSelectionConfig::getAdSelectionSignals() const
	{
		return callObjectMethod(
			"getAdSelectionSignals",
			"()Landroid/adservices/common/AdSelectionSignals;"
		);
	}
	inline JObject AdSelectionConfig::getCustomAudienceBuyers() const
	{
		return callObjectMethod(
			"getCustomAudienceBuyers",
			"()Ljava/util/List;"
		);
	}
	inline android::net::Uri AdSelectionConfig::getDecisionLogicUri() const
	{
		return callObjectMethod(
			"getDecisionLogicUri",
			"()Landroid/net/Uri;"
		);
	}
	inline JObject AdSelectionConfig::getPerBuyerSignals() const
	{
		return callObjectMethod(
			"getPerBuyerSignals",
			"()Ljava/util/Map;"
		);
	}
	inline android::adservices::common::AdTechIdentifier AdSelectionConfig::getSeller() const
	{
		return callObjectMethod(
			"getSeller",
			"()Landroid/adservices/common/AdTechIdentifier;"
		);
	}
	inline android::adservices::common::AdSelectionSignals AdSelectionConfig::getSellerSignals() const
	{
		return callObjectMethod(
			"getSellerSignals",
			"()Landroid/adservices/common/AdSelectionSignals;"
		);
	}
	inline android::net::Uri AdSelectionConfig::getTrustedScoringSignalsUri() const
	{
		return callObjectMethod(
			"getTrustedScoringSignalsUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jint AdSelectionConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void AdSelectionConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
