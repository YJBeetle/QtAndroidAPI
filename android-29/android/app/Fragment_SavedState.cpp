#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./Fragment_SavedState.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject Fragment_SavedState::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Fragment$SavedState",
			"CREATOR",
			"Landroid/os/Parcelable$ClassLoaderCreator;"
		);
	}
	
	Fragment_SavedState::Fragment_SavedState(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint Fragment_SavedState::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Fragment_SavedState::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

