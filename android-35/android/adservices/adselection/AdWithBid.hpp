#pragma once

#include "../common/AdData.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./AdWithBid.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	inline JObject AdWithBid::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.adselection.AdWithBid",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline AdWithBid::AdWithBid(android::adservices::common::AdData arg0, jdouble arg1)
		: JObject(
			"android.adservices.adselection.AdWithBid",
			"(Landroid/adservices/common/AdData;D)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jint AdWithBid::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AdWithBid::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::adservices::common::AdData AdWithBid::getAdData() const
	{
		return callObjectMethod(
			"getAdData",
			"()Landroid/adservices/common/AdData;"
		);
	}
	inline jdouble AdWithBid::getBid() const
	{
		return callMethod<jdouble>(
			"getBid",
			"()D"
		);
	}
	inline jint AdWithBid::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void AdWithBid::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
