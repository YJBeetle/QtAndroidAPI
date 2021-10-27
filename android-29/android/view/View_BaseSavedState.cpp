#include "../os/Parcel.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "./View_BaseSavedState.hpp"

namespace android::view
{
	// Fields
	QAndroidJniObject View_BaseSavedState::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.View$BaseSavedState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	View_BaseSavedState::View_BaseSavedState(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	View_BaseSavedState::View_BaseSavedState(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.View$BaseSavedState",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	View_BaseSavedState::View_BaseSavedState(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.View$BaseSavedState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object()
		);
	}
	View_BaseSavedState::View_BaseSavedState(android::os::Parcel &arg0, java::lang::ClassLoader &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.View$BaseSavedState",
			"(Landroid/os/Parcel;Ljava/lang/ClassLoader;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void View_BaseSavedState::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view

