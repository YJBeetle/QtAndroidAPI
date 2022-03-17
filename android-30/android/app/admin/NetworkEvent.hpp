#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./NetworkEvent.def.hpp"

namespace android::app::admin
{
	// Fields
	inline JObject NetworkEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.NetworkEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint NetworkEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong NetworkEvent::getId() const
	{
		return callMethod<jlong>(
			"getId",
			"()J"
		);
	}
	inline JString NetworkEvent::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jlong NetworkEvent::getTimestamp() const
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	inline void NetworkEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

// Base class headers

