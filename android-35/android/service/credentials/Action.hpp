#pragma once

#include "../../app/slice/Slice.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./Action.def.hpp"

namespace android::service::credentials
{
	// Fields
	inline JObject Action::CREATOR()
	{
		return getStaticObjectField(
			"android.service.credentials.Action",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline Action::Action(android::app::slice::Slice arg0)
		: JObject(
			"android.service.credentials.Action",
			"(Landroid/app/slice/Slice;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint Action::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::app::slice::Slice Action::getSlice() const
	{
		return callObjectMethod(
			"getSlice",
			"()Landroid/app/slice/Slice;"
		);
	}
	inline void Action::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
