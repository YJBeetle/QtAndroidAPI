#include "../os/Parcel.hpp"
#include "./TextView_SavedState.hpp"

namespace android::widget
{
	// Fields
	__JniBaseClass TextView_SavedState::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.TextView$SavedState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	TextView_SavedState::TextView_SavedState(QAndroidJniObject obj) : android::view::View_BaseSavedState(obj) {}
	
	// Constructors
	
	// Methods
	jstring TextView_SavedState::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TextView_SavedState::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::widget

