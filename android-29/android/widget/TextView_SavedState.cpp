#include "../os/Parcel.hpp"
#include "./TextView_SavedState.hpp"

namespace android::widget
{
	// Fields
	QAndroidJniObject TextView_SavedState::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.TextView$SavedState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	TextView_SavedState::TextView_SavedState(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring TextView_SavedState::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TextView_SavedState::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::widget

