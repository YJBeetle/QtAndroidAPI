#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./SellerConfiguration.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	inline JObject SellerConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.adselection.SellerConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SellerConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SellerConfiguration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint SellerConfiguration::getMaximumPayloadSizeBytes() const
	{
		return callMethod<jint>(
			"getMaximumPayloadSizeBytes",
			"()I"
		);
	}
	inline JObject SellerConfiguration::getPerBuyerConfigurations() const
	{
		return callObjectMethod(
			"getPerBuyerConfigurations",
			"()Ljava/util/Set;"
		);
	}
	inline jint SellerConfiguration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void SellerConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
