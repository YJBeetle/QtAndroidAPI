#pragma once

#include "../common/AdTechIdentifier.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./PerBuyerConfiguration.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	inline JObject PerBuyerConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.adselection.PerBuyerConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PerBuyerConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PerBuyerConfiguration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::adservices::common::AdTechIdentifier PerBuyerConfiguration::getBuyer() const
	{
		return callObjectMethod(
			"getBuyer",
			"()Landroid/adservices/common/AdTechIdentifier;"
		);
	}
	inline jint PerBuyerConfiguration::getTargetInputSizeBytes() const
	{
		return callMethod<jint>(
			"getTargetInputSizeBytes",
			"()I"
		);
	}
	inline jint PerBuyerConfiguration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void PerBuyerConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
