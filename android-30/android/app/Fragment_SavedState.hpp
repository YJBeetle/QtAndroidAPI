#pragma once

#include "../os/Parcel.def.hpp"
#include "./Fragment_SavedState.def.hpp"

namespace android::app
{
	// Fields
	inline JObject Fragment_SavedState::CREATOR()
	{
		return getStaticObjectField(
			"android.app.Fragment$SavedState",
			"CREATOR",
			"Landroid/os/Parcelable$ClassLoaderCreator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Fragment_SavedState::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void Fragment_SavedState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

