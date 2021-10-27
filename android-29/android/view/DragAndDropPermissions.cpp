#include "../os/Parcel.hpp"
#include "./DragAndDropPermissions.hpp"

namespace android::view
{
	// Fields
	QAndroidJniObject DragAndDropPermissions::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.DragAndDropPermissions",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	DragAndDropPermissions::DragAndDropPermissions(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint DragAndDropPermissions::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void DragAndDropPermissions::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void DragAndDropPermissions::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view

