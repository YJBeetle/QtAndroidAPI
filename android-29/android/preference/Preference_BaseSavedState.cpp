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
	
	Preference_BaseSavedState::Preference_BaseSavedState(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Preference_BaseSavedState::Preference_BaseSavedState(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.Preference$BaseSavedState",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	Preference_BaseSavedState::Preference_BaseSavedState(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.Preference$BaseSavedState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::preference

