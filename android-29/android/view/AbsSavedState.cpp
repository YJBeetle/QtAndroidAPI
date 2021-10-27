#include "../os/Parcel.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "./AbsSavedState.hpp"

namespace android::view
{
	// Fields
	QAndroidJniObject AbsSavedState::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.AbsSavedState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject AbsSavedState::EMPTY_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.AbsSavedState",
			"EMPTY_STATE",
			"Landroid/view/AbsSavedState;"
		);
	}
	
	AbsSavedState::AbsSavedState(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint AbsSavedState::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject AbsSavedState::getSuperState()
	{
		return __thiz.callObjectMethod(
			"getSuperState",
			"()Landroid/os/Parcelable;"
		);
	}
	void AbsSavedState::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view

