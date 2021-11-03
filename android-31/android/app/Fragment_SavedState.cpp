#include "../os/Parcel.hpp"
#include "./Fragment_SavedState.hpp"

namespace android::app
{
	// Fields
	JObject Fragment_SavedState::CREATOR()
	{
		return getStaticObjectField(
			"android.app.Fragment$SavedState",
			"CREATOR",
			"Landroid/os/Parcelable$ClassLoaderCreator;"
		);
	}
	
	// QAndroidJniObject forward
	Fragment_SavedState::Fragment_SavedState(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Fragment_SavedState::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Fragment_SavedState::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

