#pragma once

#include "./Bundle.def.hpp"
#include "./Handler.def.hpp"
#include "./Parcel.def.hpp"
#include "./ResultReceiver.def.hpp"

namespace android::os
{
	// Fields
	inline JObject ResultReceiver::CREATOR()
	{
		return getStaticObjectField(
			"android.os.ResultReceiver",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ResultReceiver::ResultReceiver(android::os::Handler arg0)
		: JObject(
			"android.os.ResultReceiver",
			"(Landroid/os/Handler;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint ResultReceiver::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void ResultReceiver::send(jint arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"send",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	inline void ResultReceiver::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

// Base class headers

