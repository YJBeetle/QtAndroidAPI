#pragma once

#include "../os/Parcel.def.hpp"
#include "./Preference_BaseSavedState.def.hpp"

namespace android::preference
{
	// Fields
	inline JObject Preference_BaseSavedState::CREATOR()
	{
		return getStaticObjectField(
			"android.preference.Preference$BaseSavedState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline Preference_BaseSavedState::Preference_BaseSavedState(android::os::Parcel arg0)
		: android::view::AbsSavedState(
			"android.preference.Preference$BaseSavedState",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline Preference_BaseSavedState::Preference_BaseSavedState(JObject arg0)
		: android::view::AbsSavedState(
			"android.preference.Preference$BaseSavedState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		) {}
	
	// Methods
} // namespace android::preference

// Base class headers
#include "../view/AbsSavedState.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::preference;
#endif
