#include "../os/Parcel.hpp"
#include "./Preference_BaseSavedState.hpp"

namespace android::preference
{
	// Fields
	JObject Preference_BaseSavedState::CREATOR()
	{
		return getStaticObjectField(
			"android.preference.Preference$BaseSavedState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	Preference_BaseSavedState::Preference_BaseSavedState(android::os::Parcel arg0)
		: android::view::AbsSavedState(
			"android.preference.Preference$BaseSavedState",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	Preference_BaseSavedState::Preference_BaseSavedState(JObject arg0)
		: android::view::AbsSavedState(
			"android.preference.Preference$BaseSavedState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		) {}
	
	// Methods
} // namespace android::preference

