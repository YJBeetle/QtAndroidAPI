#include "../os/Parcel.hpp"
#include "./Preference_BaseSavedState.hpp"

namespace android::preference
{
	// Fields
	QAndroidJniObject Preference_BaseSavedState::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.preference.Preference$BaseSavedState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Preference_BaseSavedState::Preference_BaseSavedState(QAndroidJniObject obj) : android::view::AbsSavedState(obj) {}
	
	// Constructors
	Preference_BaseSavedState::Preference_BaseSavedState(android::os::Parcel arg0)
		: android::view::AbsSavedState(
			"android.preference.Preference$BaseSavedState",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	Preference_BaseSavedState::Preference_BaseSavedState(__JniBaseClass arg0)
		: android::view::AbsSavedState(
			"android.preference.Preference$BaseSavedState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		) {}
	
	// Methods
} // namespace android::preference
