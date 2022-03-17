#pragma once

#include "../os/Parcel.def.hpp"
#include "../../java/lang/ClassLoader.def.hpp"
#include "./AbsSavedState.def.hpp"

namespace android::view
{
	// Fields
	inline JObject AbsSavedState::CREATOR()
	{
		return getStaticObjectField(
			"android.view.AbsSavedState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline android::view::AbsSavedState AbsSavedState::EMPTY_STATE()
	{
		return getStaticObjectField(
			"android.view.AbsSavedState",
			"EMPTY_STATE",
			"Landroid/view/AbsSavedState;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AbsSavedState::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject AbsSavedState::getSuperState() const
	{
		return callObjectMethod(
			"getSuperState",
			"()Landroid/os/Parcelable;"
		);
	}
	inline void AbsSavedState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

// Base class headers

