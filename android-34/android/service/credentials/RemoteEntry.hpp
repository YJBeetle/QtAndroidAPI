#pragma once

#include "../../app/slice/Slice.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./RemoteEntry.def.hpp"

namespace android::service::credentials
{
	// Fields
	inline JObject RemoteEntry::CREATOR()
	{
		return getStaticObjectField(
			"android.service.credentials.RemoteEntry",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline RemoteEntry::RemoteEntry(android::app::slice::Slice arg0)
		: JObject(
			"android.service.credentials.RemoteEntry",
			"(Landroid/app/slice/Slice;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint RemoteEntry::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::app::slice::Slice RemoteEntry::getSlice() const
	{
		return callObjectMethod(
			"getSlice",
			"()Landroid/app/slice/Slice;"
		);
	}
	inline void RemoteEntry::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::credentials

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::credentials;
#endif
